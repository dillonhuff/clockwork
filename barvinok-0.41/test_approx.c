#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <isl/ctx.h>
#include <isl/val.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/polynomial.h>
#include <barvinok/polylib.h>
#include <barvinok/isl.h>
#include <barvinok/options.h>
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

struct tms { int dummy; };
static void times(struct tms* time)
{
}
static my_clock_t time_diff(struct tms *before, struct tms *after)
{
	return 0;
}

#endif

struct {
    int	    sign;
    int	    method;
    int	    flags;
} methods[] = {
{ BV_APPROX_SIGN_NONE,      BV_APPROX_NONE,	0 },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_BERNOULLI,	0 },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_DROP,	0 },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_VOLUME,	BV_VOL_LIFT },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_VOLUME,	BV_VOL_VERTEX },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_VOLUME,	BV_VOL_BARYCENTER },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_SCALE,	0 },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_SCALE,	BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST },
{ BV_APPROX_SIGN_APPROX,    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_DROP,	0 },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_VOLUME,	BV_VOL_LIFT },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_VOLUME,	BV_VOL_VERTEX },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_VOLUME,	BV_VOL_BARYCENTER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	0 },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW  | BV_APPROX_SCALE_CHAMBER},
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW2 },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW2 | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW2 },
{ BV_APPROX_SIGN_LOWER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW2 | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_DROP,	0 },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_VOLUME,	BV_VOL_LIFT },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_VOLUME,	BV_VOL_VERTEX },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_VOLUME,	BV_VOL_BARYCENTER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	0 },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW2 },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_NARROW2 | BV_APPROX_SCALE_CHAMBER },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW2 },
{ BV_APPROX_SIGN_UPPER,	    BV_APPROX_SCALE,	BV_APPROX_SCALE_FAST | BV_APPROX_SCALE_NARROW2 | BV_APPROX_SCALE_CHAMBER },
};

#define nr_methods (sizeof(methods)/sizeof(*methods))

struct options {
    int quiet;
    struct verify_options    *verify;
};

ISL_ARGS_START(struct options, options_args)
ISL_ARG_CHILD(struct options, verify, NULL, &verify_options_args, NULL)
ISL_ARG_BOOL(struct options, quiet, 'q', "quiet", 0, NULL)
ISL_ARGS_END

ISL_ARG_DEF(options, struct options, options_args)

struct result_data {
    Value		    n;
    double		    RE_sum[nr_methods];

    my_clock_t		    ticks[nr_methods];
    size_t		    size[nr_methods];
};

void result_data_init(struct result_data *result)
{
    int i;
    for (i = 0; i < nr_methods; ++i) {
	result->RE_sum[i] = 0;
	result->ticks[i] = 0;
	result->size[i] = 0;
    }
    value_init(result->n);
}

void result_data_clear(struct result_data *result)
{
    value_clear(result->n);
}

void result_data_print(struct result_data *result, int n)
{
    int i;

    fprintf(stderr, "%g", (double)result->ticks[0]/n);
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %g", (double)result->ticks[i]/n);
    fprintf(stderr, "\n");

    fprintf(stderr, "%zd", result->size[0]/n);
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %zd", result->size[i]/n);
    fprintf(stderr, "\n");

    fprintf(stderr, "%g\n", VALUE_TO_DOUBLE(result->n));
    fprintf(stderr, "%g", result->RE_sum[0]/VALUE_TO_DOUBLE(result->n));
    for (i = 1; i < nr_methods; ++i)
	fprintf(stderr, ", %g", result->RE_sum[i]/VALUE_TO_DOUBLE(result->n));
    fprintf(stderr, "\n");
}

struct test_approx_data {
    struct verify_point_data vpd;
    isl_pw_qpolynomial	    **pwqp;
    struct result_data	    *result;
};

static __isl_give isl_val *eval(__isl_keep isl_pw_qpolynomial *pwqp,
	__isl_keep isl_point *pnt, int sign)
{
    isl_val *res;

    pwqp = isl_pw_qpolynomial_copy(pwqp);
    res = isl_pw_qpolynomial_eval(pwqp, isl_point_copy(pnt));
    if (sign == BV_APPROX_SIGN_LOWER)
	res = isl_val_ceil(res);
    else if (sign == BV_APPROX_SIGN_UPPER)
	res = isl_val_floor(res);
    else if (sign == BV_APPROX_SIGN_APPROX)
	res = isl_val_trunc(res);
    else
	assert(isl_val_is_int(res));

    return res;
}

static isl_stat test_approx(__isl_take isl_point *pnt, void *user)
{
    struct test_approx_data *ta_data = (struct test_approx_data *) user;
    isl_val *exact, *approx;
    int i;

    ta_data->vpd.n--;

    exact = eval(ta_data->pwqp[0], pnt, BV_APPROX_SIGN_NONE);

    value_increment(ta_data->result->n, ta_data->result->n);
    for (i = 1; i < nr_methods; ++i) {
	double error;
	approx = eval(ta_data->pwqp[i], pnt, methods[i].sign);
	assert(approx);
	if (methods[i].sign == BV_APPROX_SIGN_LOWER)
	    assert(isl_val_le(approx, exact));
	if (methods[i].sign == BV_APPROX_SIGN_UPPER)
	    assert(isl_val_ge(approx, exact));
	approx = isl_val_sub(approx, isl_val_copy(exact));
	if (isl_val_is_zero(exact))
	    error = fabs(isl_val_get_d(approx));
	else
	    error = fabs(isl_val_get_d(approx)) / isl_val_get_d(exact);
	isl_val_free(approx);
	ta_data->result->RE_sum[i] += error;
    }

    if (!ta_data->vpd.options->print_all &&
	(ta_data->vpd.n % ta_data->vpd.s) == 0) {
	    printf("o");
	    fflush(stdout);
    }

    isl_val_free(exact);
    isl_point_free(pnt);

    return (ta_data->vpd.n >= 1) ? isl_stat_ok : isl_stat_error;
}

static int test(__isl_keep isl_set *context,
	__isl_keep isl_pw_qpolynomial **pwqp, struct result_data *result,
	struct verify_options *options)
{
	struct test_approx_data data = { { options } };
	int r;

	r = verify_point_data_init(&data.vpd, context);

	data.pwqp = pwqp;
	data.result = result;
	if (r == 0)
		isl_set_foreach_point(context, &test_approx, &data);
	if (data.vpd.error)
		r = -1;

	verify_point_data_fini(&data.vpd);

	return r;
}

/* Turn the set dimensions of "context" into parameters and return
 * the corresponding parameter domain.
 */
static __isl_give isl_set *to_parameter_domain(__isl_take isl_set *context)
{
	context = isl_set_move_dims(context, isl_dim_param, 0, isl_dim_set, 0,
				       isl_set_dim(context, isl_dim_set));
	return isl_set_params(context);
}

static int handle(isl_ctx *ctx, FILE *in, struct result_data *result,
	struct verify_options *options)
{
    int i;
    int r;
    int nparam;
    isl_space *space;
    isl_set *set;
    isl_set *context;
    isl_pw_qpolynomial *pwqp[nr_methods];

    set = isl_set_read_from_file(ctx, in);
    context = isl_set_read_from_file(ctx, in);

    context = to_parameter_domain(context);
    nparam = isl_set_dim(context, isl_dim_param);
    if (nparam != isl_set_dim(set, isl_dim_param)) {
	    int dim = isl_set_dim(set, isl_dim_set);
	    set = isl_set_move_dims(set, isl_dim_param, 0,
					isl_dim_set, dim - nparam, nparam);
    }

    set = isl_set_intersect_params(set, context);
    context = isl_set_params(isl_set_copy(set));
    space = isl_set_get_space(context);

    context = verify_context_set_bounds(context, options);

    for (i = 0; i < nr_methods; ++i) {
	struct tms st_cpu;
	struct tms en_cpu;
	options->barvinok->approx->approximation = methods[i].sign;
	options->barvinok->approx->method = methods[i].method;
	if (methods[i].method == BV_APPROX_SCALE)
	    options->barvinok->approx->scale_flags = methods[i].flags;
	else if (methods[i].method == BV_APPROX_VOLUME)
	    options->barvinok->approx->volume_triangulate = methods[i].flags;

	times(&st_cpu);
	pwqp[i] = isl_set_card(isl_set_copy(set));
	times(&en_cpu);
	result->ticks[i] = time_diff(&en_cpu, &st_cpu);
    }
    for (i = 0; i < nr_methods; ++i)
	result->size[i] = 0;
    r = test(context, pwqp, result, options);
    for (i = 0; i < nr_methods; ++i)
	isl_pw_qpolynomial_free(pwqp[i]);

    isl_space_free(space);
    isl_set_free(context);
    isl_set_free(set);

    return r;
}

int main(int argc, char **argv)
{
    isl_ctx *ctx;
    char path[PATH_MAX+1];
    struct result_data all_result;
    int n = 0;
    int r = EXIT_SUCCESS;
    struct options *options = options_new_with_defaults();

    argc = options_parse(options, argc, argv, ISL_ARG_ALL);
    ctx = isl_ctx_alloc_with_options(&options_args, options);

    if (options->verify->M == INT_MIN)
	options->verify->M = 100;
    if (options->verify->m == INT_MAX)
	options->verify->m = -100;

    result_data_init(&all_result);

    while (fgets(path, sizeof(path), stdin)) {
	struct result_data result;
	FILE *in;
	int i;

	++n;
	result_data_init(&result);
	fprintf(stderr, "%s", path);
	*strchr(path, '\n') = '\0';
	in = fopen(path, "r");
	assert(in);
	if (handle(ctx, in, &result, options->verify) < 0)
	    r = EXIT_FAILURE;
	fclose(in);

	if (!options->quiet)
	    result_data_print(&result, 1);

	value_addto(all_result.n, all_result.n, result.n);
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

    isl_ctx_free(ctx);

    return r;
}
