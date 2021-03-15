#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <isl/val.h>
#include <isl/point.h>
#include <isl/set.h>
#include <barvinok/polylib.h>
#include <barvinok/isl.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "verify.h"

#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

/* RANGE : normal range for evaluations (-RANGE -> RANGE) */
#define RANGE 50

/* SRANGE : small range for evaluations */
#define SRANGE 15

/* if dimension >= BIDDIM, use SRANGE */
#define BIGDIM 5

/* VSRANGE : very small range for evaluations */
#define VSRANGE 5

/* if dimension >= VBIDDIM, use VSRANGE */
#define VBIGDIM 8

static int set_m(void *opt, long val)
{
	struct verify_options *options = (struct verify_options *)opt;
	options->m = val;
	options->verify = 1;
	return 0;
}

static int set_M(void *opt, long val)
{
	struct verify_options *options = (struct verify_options *)opt;
	options->M = val;
	options->verify = 1;
	return 0;
}

static int set_r(void *opt, long val)
{
	struct verify_options *options = (struct verify_options *)opt;
	options->r = val;
	options->m = -val;
	options->M = val;
	options->verify = 1;
	return 0;
}

ISL_ARGS_START(struct verify_options, verify_options_args)
ISL_ARG_CHILD(struct verify_options, barvinok, NULL, &barvinok_options_args,
	NULL)
ISL_ARG_BOOL(struct verify_options, verify, 'T', "verify", 0, NULL)
ISL_ARG_BOOL(struct verify_options, exact, 'E', "exact", 0, NULL)
ISL_ARG_BOOL(struct verify_options, print_all, 'A', "print-all", 0, NULL)
ISL_ARG_BOOL(struct verify_options, continue_on_error, 'C',
	"continue-on-error", 0, NULL)
ISL_ARG_USER_LONG(struct verify_options, m, 'm', "min", set_m, INT_MAX, NULL)
ISL_ARG_USER_LONG(struct verify_options, M, 'M', "max", set_M, INT_MIN, NULL)
ISL_ARG_USER_LONG(struct verify_options, r, 'r', "range", set_r, -1, NULL)
ISL_ARGS_END

void verify_options_set_range(struct verify_options *options, int dim)
{
    int r;

    if (dim >= VBIGDIM)
	r = VSRANGE;
    else if (dim >= BIGDIM)
	r = SRANGE;
    else
	r = RANGE;
    /* If the user didn't set m or M, then we try to adjust the window
     * to the context in check_poly_context_scan.
     */
    if (options->m == INT_MAX && options->M == INT_MIN)
	options->r = r;
    if (options->M == INT_MIN)
	options->M = r;
    if (options->m == INT_MAX)
	options->m = -r;

    if (options->verify && options->m > options->M) {
	fprintf(stderr,"Nothing to do: min > max !\n");
	exit(0);
    }
}

static Polyhedron *project_on(Polyhedron *P, int i)
{
    unsigned dim = P->Dimension;
    Matrix *T;
    Polyhedron *I;

    if (dim == 1)
	return Polyhedron_Copy(P);

    T = Matrix_Alloc(2, dim+1);
    value_set_si(T->p[0][i], 1);
    value_set_si(T->p[1][dim], 1);
    I = Polyhedron_Image(P, T, P->NbConstraints);
    Matrix_Free(T);
    return I;
}

static void set_bounds(Polyhedron *C, Value **rows, int i, unsigned nparam,
			const struct verify_options *options)
{
    Value min;
    Value max;

    value_init(min);
    value_init(max);
    value_set_si(min, options->m);
    value_set_si(max, options->M);

    if (options->r > 0) {
	Polyhedron *I = project_on(C, i);
	line_minmax(I, &min, &max);
	if (value_cmp_si(min, options->M) >= 0)
	    value_add_int(max, min, options->r);
	else if (value_cmp_si(max, options->m) <= 0)
	    value_sub_int(min, max, options->r);
	else {
	    value_set_si(min, options->m);
	    value_set_si(max, options->M);
	}
    }

    value_set_si(rows[0][0], 1);
    value_set_si(rows[0][1+i], 1);
    value_oppose(rows[0][1+nparam], min);
    value_set_si(rows[1][0], 1);
    value_set_si(rows[1][1+i], -1);
    value_assign(rows[1][1+nparam], max);

    value_clear(min);
    value_clear(max);
}

Polyhedron *check_poly_context_scan(Polyhedron *P, Polyhedron **C,
				    unsigned nparam,
				    const struct verify_options *options)
{
    int i;
    Matrix *MM;
    Polyhedron *CC, *CC2, *CS, *U;
    unsigned MaxRays = options->barvinok->MaxRays;

    if (nparam <= 0)
	return NULL;

    if (!P)
	CC = *C;
    else {
	CC = Polyhedron_Project(P, nparam);
	if (*C) {
	    CC2 = DomainIntersection(*C, CC, MaxRays);
	    Domain_Free(CC);
	    CC = CC2;
	}
    }

    /* Intersect context with range */
    MM = Matrix_Alloc(2*nparam, nparam+2);
    for (i = 0; i < nparam; ++i)
	set_bounds(CC, &MM->p[2*i], i, nparam, options);
    CC2 = AddConstraints(MM->p[0], 2*nparam, CC, options->barvinok->MaxRays);
    if (CC != *C)
	Domain_Free(CC);
    CC = CC2;
    U = Universe_Polyhedron(0);
    CS = Polyhedron_Scan(CC, U, MaxRays & POL_NO_DUAL ? 0 : MaxRays);
    Polyhedron_Free(U);
    *C = CC;
    Matrix_Free(MM);
    return CS;
}

void check_poly_init(Polyhedron *C, struct verify_options *options)
{
    int d, i;

    if (options->print_all)
	return;
    if (C->Dimension <= 0)
	return;

    d = options->M - options->m;
    if (d > 80)
	options->st = 1+d/80;
    else
	options->st = 1;
    for (i = options->m; i <= options->M; i += options->st)
	printf(".");
    printf( "\r" );
    fflush(stdout);
}

static void print_rational(FILE *out, Value n, Value d)
{
    value_print(out, VALUE_FMT, n);
    if (value_notone_p(d)) {
	fprintf(out, "/");
	value_print(out, VALUE_FMT, d);
    }
}

void check_poly_print(int ok, int nparam, Value *z,
		      Value want_n, Value want_d,
		      Value got_n, Value got_d,
		      const char *op, const char *check,
		      const char *long_op,
		      const struct verify_options *options)
{
    int k;

    if (options->print_all) {
	printf("%s(", op);
	value_print(stdout, VALUE_FMT, z[0]);
	for (k = 1; k < nparam; ++k) {
	    printf(", ");
	    value_print(stdout, VALUE_FMT, z[k]);
	}
	printf(") = ");
	print_rational(stdout, got_n, got_d);
	printf(", %s = ", check);
	print_rational(stdout, want_n, want_d);
	printf(". ");
    }

    if (!ok) {
	printf("\n");
	fflush(stdout);
	fprintf(stderr, "Error !\n");
	fprintf(stderr, "%s(", op);
	value_print(stderr, VALUE_FMT, z[0]);
	for (k = 1; k < nparam; ++k) {
	    fprintf(stderr,", ");
	    value_print(stderr, VALUE_FMT, z[k]);
	}
	fprintf(stderr, ") should be ");
	print_rational(stderr, want_n, want_d);
	fprintf(stderr, ", while %s gives ", long_op);
	print_rational(stderr, got_n, got_d);
	fprintf(stderr, ".\n");
    } else if (options->print_all)
	printf("OK.\n");
}

/****************************************************/
/* function check_poly :                            */
/* scans the parameter space from Min to Max (all   */
/* directions). Computes the number of points in    */
/* the polytope using both methods, and compare them*/
/* returns 1 on success                             */
/****************************************************/

int check_poly(Polyhedron *CS, const struct check_poly_data *data,
	       int nparam, int pos, Value *z,
	       const struct verify_options *options)
{
    if (pos == nparam) {
	if (!data->check(data, nparam, z, options) && !options->continue_on_error)
	    return 0;
    } else {
	Value LB, UB;
	int ok;
	value_init(LB);
	value_init(UB);
	ok = !(lower_upper_bounds(1+pos, CS, z-1, &LB, &UB));
	assert(ok);
	for (; value_le(LB, UB); value_increment(LB, LB)) {
	    if (!options->print_all) {
		int k = VALUE_TO_INT(LB);
		if (!pos && !(k % options->st)) {
		    printf("o");
		    fflush(stdout);
		}
	    }
	      
	    value_assign(z[pos], LB);
	    if (!check_poly(CS->next, data, nparam, pos+1, z, options)) {
		value_clear(LB);
		value_clear(UB);
		return 0;
	    }
	}
	value_set_si(z[pos], 0);
	value_clear(LB);
	value_clear(UB);
    }
    return 1;
} /* check_poly */

void check_EP_set_scan(struct check_EP_data *data, Polyhedron *C,
			unsigned MaxRays)
{
    const evalue *EP = data->EP;
    int i;
    int n_S = 0;

    for (i = 0; i < EP->x.p->size/2; ++i) {
	Polyhedron *A = EVALUE_DOMAIN(EP->x.p->arr[2*i]);
	for (; A; A = A->next)
	    ++n_S;
    }

    data->n_S = n_S;
    data->S = ALLOCN(Polyhedron *, n_S);
    n_S = 0;
    for (i = 0; i < EP->x.p->size/2; ++i) {
	Polyhedron *A = EVALUE_DOMAIN(EP->x.p->arr[2*i]);
	for (; A; A = A->next) {
	    Polyhedron *next = A->next;
	    A->next = NULL;
	    data->S[n_S++] = Polyhedron_Scan(A, C,
				    MaxRays & POL_NO_DUAL ? 0 : MaxRays);
	    A->next = next;
	}
    }
}

void check_EP_clear_scan(struct check_EP_data *data)
{
    int i;

    for (i = 0; i < data->n_S; ++i)
	Domain_Free(data->S[i]);
    free(data->S);
}

static int check_EP_on_poly(Polyhedron *P,
			    struct check_EP_data *data,
			    unsigned nvar, unsigned nparam,
			    struct verify_options *options)
{
    Polyhedron *CS;
    unsigned MaxRays = options->barvinok->MaxRays;
    int ok = 1;

    CS = check_poly_context_scan(NULL, &P, P->Dimension, options);

    check_poly_init(P, options);

    if (!(CS && emptyQ2(CS))) {
	check_EP_set_scan(data, P, MaxRays);
	ok = check_poly(CS, &data->cp, nparam, 0, data->cp.z+1+nvar, options);
	check_EP_clear_scan(data);
    }

    if (!options->print_all)
	printf("\n");

    if (CS) {
	Domain_Free(CS);
	Domain_Free(P);
    }

    return ok;
}

/*
 * Project on final dim dimensions
 */
Polyhedron *DomainProject(Polyhedron *D, unsigned dim, unsigned MaxRays)
{
    Polyhedron *P;
    Polyhedron *R;

    R = Polyhedron_Project(D, dim);
    for (P = D->next; P; P = P->next) {
	Polyhedron *R2 = Polyhedron_Project(P, dim);
	Polyhedron *R3 = DomainUnion(R, R2, MaxRays);
	Polyhedron_Free(R2);
	Domain_Free(R);
	R = R3;
    }
    return R;
}

static Polyhedron *evalue_parameter_domain(const evalue *e, unsigned nparam,
					     unsigned MaxRays)
{
    int i;
    Polyhedron *U = NULL;

    if (EVALUE_IS_ZERO(*e))
	return Universe_Polyhedron(0);

    assert(value_zero_p(e->d));
    assert(e->x.p->type == partition);
    assert(e->x.p->size >= 2);

    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *D = EVALUE_DOMAIN(e->x.p->arr[2*i]);
	Polyhedron *P = DomainProject(D, nparam, MaxRays);
	if (!U) {
	    U = P;
	} else {
	    Polyhedron *T = U;
	    U = DomainUnion(U, P, MaxRays);
	    Domain_Free(P);
	    Domain_Free(T);
	}
    }
    return U;
}

int check_EP(struct check_EP_data *data, unsigned nvar, unsigned nparam,
	     struct verify_options *options)
{
    Vector *p;
    int ok = 1;
    Polyhedron *D, *P;

    p = Vector_Alloc(nvar+nparam+2);
    value_set_si(p->p[nvar+nparam+1], 1);

    data->cp.z = p->p;

    D = evalue_parameter_domain(data->EP, nparam, options->barvinok->MaxRays);

    for (P = D; P; P = P->next) {
	ok = check_EP_on_poly(P, data, nvar, nparam, options);
	if (!ok && !options->continue_on_error)
	    break;
    }

    Domain_Free(D);
    Vector_Free(p);

    return ok;
}

__isl_give isl_set *verify_context_set_bounds(__isl_take isl_set *set,
	const struct verify_options *options)
{
	int i;
	unsigned nparam;
	isl_point *pt, *pt2;
	isl_set *box;

	nparam = isl_set_dim(set, isl_dim_param);

	if (options->r > 0) {
		pt = isl_set_sample_point(isl_set_copy(set));
		pt2 = isl_point_copy(pt);

		for (i = 0; i < nparam; ++i) {
			pt = isl_point_add_ui(pt, isl_dim_param, i, options->r);
			pt2 = isl_point_sub_ui(pt2, isl_dim_param, i, options->r);
		}
	} else {
		isl_ctx *ctx;
		isl_val *v;

		ctx = isl_set_get_ctx(set);
		pt = isl_point_zero(isl_set_get_space(set));
		v = isl_val_int_from_si(ctx, options->m);
		for (i = 0; i < nparam; ++i)
			pt = isl_point_set_coordinate_val(pt, isl_dim_param, i,
							    isl_val_copy(v));
		isl_val_free(v);

		pt2 = isl_point_zero(isl_set_get_space(set));
		v = isl_val_int_from_si(ctx, options->M);
		for (i = 0; i < nparam; ++i)
			pt2 = isl_point_set_coordinate_val(pt2, isl_dim_param,
							    i, isl_val_copy(v));
		isl_val_free(v);
	}

	box = isl_set_box_from_points(pt, pt2);

	return isl_set_intersect(set, box);
}

int verify_point_data_init(struct verify_point_data *vpd,
	__isl_keep isl_set *context)
{
	isl_val *v;
	int i;

	context = isl_set_copy(context);
	context = isl_set_from_params(context);
	context = isl_set_move_dims(context, isl_dim_set, 0, isl_dim_param, 0,
					isl_set_dim(context, isl_dim_param));
	v = isl_pw_qpolynomial_max(isl_set_card(context));
	vpd->n = isl_val_cmp_si(v, 200) < 0 ? isl_val_get_num_si(v) : 200;
	isl_val_free(v);

	if (!vpd->options->print_all) {
		vpd->s = vpd->n < 80 ? 1 : 1 + vpd->n/80;
		for (i = 0; i < vpd->n; i += vpd->s)
			printf(".");
		printf("\r");
		fflush(stdout);
	}

	vpd->error = !v ? -1 : 0;

	return vpd->error;
}

void verify_point_data_fini(struct verify_point_data *vpd)
{
	if (!vpd->options->print_all)
		printf("\n");

	if (vpd->error)
		fprintf(stderr, "Check failed !\n");
}
