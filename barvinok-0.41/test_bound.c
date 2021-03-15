#include <assert.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <isl/ctx.h>
#include <isl/stream.h>
#include <isl/options.h>
#include <isl/val.h>
#include <isl/point.h>
#include <isl/set.h>
#include <isl/polynomial.h>
#include <isl/printer.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "verify.h"
#include "config.h"

#ifdef HAVE_SYS_TIMES_H

#include <sys/times.h>

typedef clock_t		my_clock_t;

static my_clock_t time_diff(struct tms *before, struct tms *after)
{
	return after->tms_utime - before->tms_utime;
}

#else

typedef int		my_clock_t;

struct tms {};
static void times(struct tms* time)
{
}
static my_clock_t time_diff(struct tms *before, struct tms *after)
{
	return 0;
}

#endif

static struct {
    int	    method;
} methods[] = {
    { ISL_BOUND_BERNSTEIN },
    { ISL_BOUND_RANGE },
};

#define nr_methods (sizeof(methods)/sizeof(*methods))

struct options {
    struct verify_options    *verify;
    int quiet;
};

ISL_ARGS_START(struct options, options_args)
ISL_ARG_CHILD(struct options, verify, NULL, &verify_options_args, NULL)
ISL_ARG_BOOL(struct options, quiet, 'q', "quiet", 0, NULL)
ISL_ARGS_END

ISL_ARG_DEF(options, struct options, options_args)

struct result_data {
    isl_val		    *n;
    double		    RE_sum[nr_methods];

    my_clock_t		    ticks[nr_methods];
    size_t		    size[nr_methods];
};

void result_data_init(isl_ctx *ctx, struct result_data *result)
{
    int i;
    for (i = 0; i < nr_methods; ++i) {
	result->RE_sum[i] = 0;
	result->ticks[i] = 0;
	result->size[i] = 0;
    }
    result->n = isl_val_zero(ctx);
}

void result_data_clear(struct result_data *result)
{
	isl_val_free(result->n);
}

void result_data_print(struct result_data *result, int n)
{
    int i;

    fprintf(stderr, "%g", (double)result->ticks[0]/n);
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %g", (double)result->ticks[i]/n);
    fprintf(stderr, "\n");

    fprintf(stderr, "%zd/%d", result->size[0], n);
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %zd/%d", result->size[i], n);
    fprintf(stderr, "\n");

    fprintf(stderr, "%g\n", isl_val_get_d(result->n));
    fprintf(stderr, "%g", result->RE_sum[0]/isl_val_get_d(result->n));
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %g", result->RE_sum[i]/isl_val_get_d(result->n));
    fprintf(stderr, "\n");
}

struct verify_point_bound {
	struct verify_point_data vpd;
	struct result_data *result;
	isl_pw_qpolynomial *pwqp;
	isl_pw_qpolynomial_fold **pwf;
};

static isl_stat verify_point(__isl_take isl_point *pnt, void *user)
{
	struct verify_point_bound *vpb = (struct verify_point_bound *) user;
	const struct verify_options *options = vpb->vpd.options;
	int i;
	unsigned nparam;
	isl_val *max, *min, *exact, *approx, *t;
	isl_pw_qpolynomial *pwqp;
	isl_printer *p;

	vpb->vpd.n--;

	pwqp = isl_pw_qpolynomial_copy(vpb->pwqp);

	nparam = isl_pw_qpolynomial_dim(pwqp, isl_dim_param);
	for (i = 0; i < nparam; ++i) {
		t = isl_point_get_coordinate_val(pnt, isl_dim_param, i);
		pwqp = isl_pw_qpolynomial_fix_val(pwqp, isl_dim_param, i, t);
	}

	max = isl_pw_qpolynomial_max(isl_pw_qpolynomial_copy(pwqp));
	max = isl_val_floor(max);

	min = isl_pw_qpolynomial_min(pwqp);
	min = isl_val_ceil(min);

	exact = isl_val_sub(isl_val_copy(max), isl_val_copy(min));
	exact = isl_val_add_ui(exact, 1);

	if (options->print_all) {
		p = isl_printer_to_file(isl_point_get_ctx(pnt), stderr);
		p = isl_printer_print_str(p, "max: ");
		p = isl_printer_print_val(p, max);
		p = isl_printer_print_str(p, ", min: ");
		p = isl_printer_print_val(p, min);
		p = isl_printer_print_str(p, ", range: ");
		p = isl_printer_print_val(p, exact);
	}
	isl_val_free(max);
	isl_val_free(min);

	for (i = 0; i < nr_methods; ++i) {
		double error;

		max = isl_pw_qpolynomial_fold_eval(
				isl_pw_qpolynomial_fold_copy(vpb->pwf[2 * i]),
				isl_point_copy(pnt));
		max = isl_val_floor(max);
	
		min = isl_pw_qpolynomial_fold_eval(
				isl_pw_qpolynomial_fold_copy(vpb->pwf[2 * i + 1]),
				isl_point_copy(pnt));
		min = isl_val_ceil(min);

		approx = isl_val_sub(max, min);
		approx = isl_val_add_ui(approx, 1);
		if (options->print_all) {
			p = isl_printer_print_str(p, ", ");
			p = isl_printer_print_val(p, approx);
		}

		assert(isl_val_ge(approx, exact));
		approx = isl_val_sub(approx, isl_val_copy(exact));

		error = fabs(isl_val_get_d(approx)) / isl_val_get_d(exact);
		if (options->print_all)
			fprintf(stderr, " (%g)", error);
		vpb->result->RE_sum[i] += error;

		isl_val_free(approx);
	}

	if (options->print_all) {
		p = isl_printer_end_line(p);
		isl_printer_free(p);
	} else if ((vpb->vpd.n % vpb->vpd.s) == 0) {
		printf("o");
		fflush(stdout);
	}

	isl_val_free(exact);
	isl_point_free(pnt);

	return vpb->vpd.n >= 1 ? isl_stat_ok : isl_stat_error;
}

static void test(__isl_keep isl_pw_qpolynomial *pwqp,
	__isl_keep isl_pw_qpolynomial_fold **pwf, struct result_data *result,
	struct verify_options *options)
{
	struct verify_point_bound vpb = { { options }, result };
	isl_set *context;
	int r;

	vpb.pwf = pwf;
	vpb.pwqp = pwqp;
	context = isl_pw_qpolynomial_domain(isl_pw_qpolynomial_copy(vpb.pwqp));
	context = isl_set_params(context);
	context = verify_context_set_bounds(context, options);

	r = verify_point_data_init(&vpb.vpd, context);
	assert(r == 0);
	result->n = isl_val_set_si(result->n, vpb.vpd.n);

	isl_set_foreach_point(context, verify_point, &vpb);
	assert(!vpb.vpd.error);

	isl_set_free(context);

	verify_point_data_fini(&vpb.vpd);
}

static void handle(isl_ctx *ctx, FILE *in, struct result_data *result,
	struct verify_options *options)
{
    int i;
    isl_pw_qpolynomial *pwqp, *upper, *lower;
    isl_pw_qpolynomial_fold *pwf[2*nr_methods];
    struct isl_stream *s;

    s = isl_stream_new_file(ctx, in);
    pwqp = isl_stream_read_pw_qpolynomial(s);

    upper = isl_pw_qpolynomial_to_polynomial(isl_pw_qpolynomial_copy(pwqp), 1);
    lower = isl_pw_qpolynomial_to_polynomial(isl_pw_qpolynomial_copy(pwqp), -1);

    for (i = 0; i < nr_methods; ++i) {
	int j;
	struct tms st_cpu;
	struct tms en_cpu;

	times(&st_cpu);
	for (j = 0; j < 2; ++j) {
	    isl_pw_qpolynomial *poly = j == 0 ? upper : lower;
	    enum isl_fold type = j == 0 ? isl_fold_max : isl_fold_min;
	    isl_options_set_bound(ctx, methods[i].method);
	    poly = isl_pw_qpolynomial_copy(poly);
	    pwf[2*i+j] = isl_pw_qpolynomial_bound(poly, type, NULL);
	}
	times(&en_cpu);
	result->ticks[i] = time_diff(&en_cpu, &st_cpu);
	result->size[i] = isl_pw_qpolynomial_fold_size(pwf[2*i]);
	result->size[i] = isl_pw_qpolynomial_fold_size(pwf[2*i+1]);
	if (options->barvinok->verbose) {
	    isl_printer *p = isl_printer_to_file(ctx, stdout);
	    for (j = 0; j < 2; ++j) {
		p = isl_printer_print_pw_qpolynomial_fold(p, pwf[2*i+j]);
		p = isl_printer_end_line(p);
	    }
	    isl_printer_free(p);
	}
    }
    test(pwqp, pwf, result, options);

    for (i = 0; i < 2*nr_methods; ++i)
	isl_pw_qpolynomial_fold_free(pwf[i]);
    isl_pw_qpolynomial_free(pwqp);
    isl_pw_qpolynomial_free(lower);
    isl_pw_qpolynomial_free(upper);

    isl_stream_free(s);
}

int main(int argc, char **argv)
{
    char path[PATH_MAX+1];
    struct result_data all_result;
    int n = 0;
    struct options *options = options_new_with_defaults();
    isl_ctx *ctx = isl_ctx_alloc();

    argc = options_parse(options, argc, argv, ISL_ARG_ALL);

    if (options->verify->M == INT_MIN)
	options->verify->M = 100;
    if (options->verify->m == INT_MAX)
	options->verify->m = -100;

    result_data_init(ctx, &all_result);

    while (fgets(path, sizeof(path), stdin)) {
	struct result_data result;
	FILE *in;
	int i;

	++n;
	result_data_init(ctx, &result);
	fprintf(stderr, "%s", path);
	*strchr(path, '\n') = '\0';
	in = fopen(path, "r");
	assert(in);
	handle(ctx, in, &result, options->verify);
	fclose(in);

	if (!options->quiet)
	    result_data_print(&result, 1);

	all_result.n = isl_val_add(all_result.n, isl_val_copy(result.n));
	for (i = 0; i < nr_methods; ++i) {
	    all_result.RE_sum[i] += result.RE_sum[i];
	    all_result.ticks[i] += result.ticks[i];
	    all_result.size[i] += result.size[i];
	}

	result_data_clear(&result);

	if (!options->quiet) {
	    fprintf(stderr, "average\n");
	    result_data_print(&all_result, n);
	}
    }

    result_data_clear(&all_result);

    options_free(options);
    isl_ctx_free(ctx);

    return 0;
}
