#include <assert.h>
#include <barvinok/barvinok.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "bernoulli.h"
#include "lattice_point.h"
#include "section_array.h"
#include "summate.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

static struct bernoulli_coef bernoulli_coef;
static struct poly_list bernoulli;
static struct poly_list faulhaber;

struct bernoulli_coef *bernoulli_coef_compute(int n)
{
    int i, j;
    Value factor, tmp;

    if (n < bernoulli_coef.n)
	return &bernoulli_coef;

    if (n >= bernoulli_coef.size) {
	int size = 3*(n + 5)/2;
	Vector *b;

	b = Vector_Alloc(size);
	if (bernoulli_coef.n) {
	    Vector_Copy(bernoulli_coef.num->p, b->p, bernoulli_coef.n);
	    Vector_Free(bernoulli_coef.num);
	}
	bernoulli_coef.num = b;
	b = Vector_Alloc(size);
	if (bernoulli_coef.n) {
	    Vector_Copy(bernoulli_coef.den->p, b->p, bernoulli_coef.n);
	    Vector_Free(bernoulli_coef.den);
	}
	bernoulli_coef.den = b;
	b = Vector_Alloc(size);
	if (bernoulli_coef.n) {
	    Vector_Copy(bernoulli_coef.lcm->p, b->p, bernoulli_coef.n);
	    Vector_Free(bernoulli_coef.lcm);
	}
	bernoulli_coef.lcm = b;

	bernoulli_coef.size = size;
    }
    value_init(factor);
    value_init(tmp);
    for (i = bernoulli_coef.n; i <= n; ++i) {
	if (i == 0) {
	    value_set_si(bernoulli_coef.num->p[0], 1);
	    value_set_si(bernoulli_coef.den->p[0], 1);
	    value_set_si(bernoulli_coef.lcm->p[0], 1);
	    continue;
	}
	value_set_si(bernoulli_coef.num->p[i], 0);
	value_set_si(factor, -(i+1));
	for (j = i-1; j >= 0; --j) {
	    mpz_mul_ui(factor, factor, j+1);
	    mpz_divexact_ui(factor, factor, i+1-j);
	    value_division(tmp, bernoulli_coef.lcm->p[i-1],
			   bernoulli_coef.den->p[j]);
	    value_multiply(tmp, tmp, bernoulli_coef.num->p[j]);
	    value_multiply(tmp, tmp, factor);
	    value_addto(bernoulli_coef.num->p[i], bernoulli_coef.num->p[i], tmp);
	}
	mpz_mul_ui(bernoulli_coef.den->p[i], bernoulli_coef.lcm->p[i-1], i+1);
	value_gcd(tmp, bernoulli_coef.num->p[i], bernoulli_coef.den->p[i]);
	if (value_notone_p(tmp)) {
	    value_division(bernoulli_coef.num->p[i],
			    bernoulli_coef.num->p[i], tmp);
	    value_division(bernoulli_coef.den->p[i],
			    bernoulli_coef.den->p[i], tmp);
	}
	value_lcm(bernoulli_coef.lcm->p[i],
		  bernoulli_coef.lcm->p[i-1], bernoulli_coef.den->p[i]);
    }
    bernoulli_coef.n = n+1;
    value_clear(factor);
    value_clear(tmp);

    return &bernoulli_coef;
}

/*
 * Compute either Bernoulli B_n or Faulhaber F_n polynomials.
 *
 * B_n =         sum_{k=0}^n {  n  \choose k } b_k x^{n-k}
 * F_n = 1/(n+1) sum_{k=0}^n { n+1 \choose k } b_k x^{n+1-k}
 */
static struct poly_list *bernoulli_faulhaber_compute(int n, struct poly_list *pl,
						     int faulhaber)
{
    int i, j;
    Value factor;
    struct bernoulli_coef *bc;

    if (n < pl->n)
	return pl;

    if (n >= pl->size) {
	int size = 3*(n + 5)/2;
	Vector **poly;

	poly = ALLOCN(Vector *, size);
	for (i = 0; i < pl->n; ++i)
	    poly[i] = pl->poly[i];
	free(pl->poly);
	pl->poly = poly;

	pl->size = size;
    }

    bc = bernoulli_coef_compute(n);

    value_init(factor);
    for (i = pl->n; i <= n; ++i) {
	pl->poly[i] = Vector_Alloc(i+faulhaber+2);
	value_assign(pl->poly[i]->p[i+faulhaber], bc->lcm->p[i]);
	if (faulhaber)
	    mpz_mul_ui(pl->poly[i]->p[i+2], bc->lcm->p[i], i+1);
	else
	    value_assign(pl->poly[i]->p[i+1], bc->lcm->p[i]);
	value_set_si(factor, 1);
	for (j = 1; j <= i; ++j) {
	    mpz_mul_ui(factor, factor, i+faulhaber+1-j);
	    mpz_divexact_ui(factor, factor, j);
	    value_division(pl->poly[i]->p[i+faulhaber-j],
			   bc->lcm->p[i], bc->den->p[j]);
	    value_multiply(pl->poly[i]->p[i+faulhaber-j],
			   pl->poly[i]->p[i+faulhaber-j], bc->num->p[j]);
	    value_multiply(pl->poly[i]->p[i+faulhaber-j],
			   pl->poly[i]->p[i+faulhaber-j], factor);
	}
	Vector_Normalize(pl->poly[i]->p, i+faulhaber+2);
    }
    value_clear(factor);
    pl->n = n+1;

    return pl;
}

struct poly_list *bernoulli_compute(int n)
{
    return bernoulli_faulhaber_compute(n, &bernoulli, 0);
}

struct poly_list *faulhaber_compute(int n)
{
    return bernoulli_faulhaber_compute(n, &faulhaber, 1);
}

static evalue *shifted_copy(const evalue *src)
{
    evalue *e = ALLOC(evalue);
    value_init(e->d);
    evalue_copy(e, src);
    evalue_shift_variables(e, 0, -1);
    return e;
}

/* Computes the argument for the Faulhaber polynomial.
 * If we are computing a polynomial approximation (exact == 0),
 * then this is simply arg/denom.
 * Otherwise, if neg == 0, then we are dealing with an upper bound
 * and we need to compute floor(arg/denom) = arg/denom - { arg/denom }
 * If neg == 1, then we are dealing with a lower bound
 * and we need to compute ceil(arg/denom) = arg/denom + { -arg/denom }
 *
 * Modifies arg (if exact == 1).
 */
static evalue *power_sums_base(Vector *arg, Value denom, int neg, int exact)
{
    evalue *fract;
    evalue *base = affine2evalue(arg->p, denom, arg->Size-1);

    if (!exact || value_one_p(denom))
	return base;

    if (neg)
	Vector_Oppose(arg->p, arg->p, arg->Size);

    fract = fractional_part(arg->p, denom, arg->Size-1, NULL);
    if (!neg) {
	value_set_si(arg->p[0], -1);
	evalue_mul(fract, arg->p[0]);
    }
    eadd(fract, base);
    evalue_free(fract);

    return base;
}

static evalue *power_sums(struct poly_list *faulhaber, const evalue *poly,
			  Vector *arg, Value denom, int neg, int alt_neg,
			  int exact)
{
    int i;
    evalue *base = power_sums_base(arg, denom, neg, exact);
    evalue *sum = evalue_zero();

    for (i = 1; i < poly->x.p->size; ++i) {
	evalue *term = evalue_polynomial(faulhaber->poly[i], base);
	evalue *factor = shifted_copy(&poly->x.p->arr[i]);
	emul(factor, term);
	if (alt_neg && (i % 2))
	    evalue_negate(term);
	eadd(term, sum);
	evalue_free(factor);
	evalue_free(term);
    }
    if (neg)
	evalue_negate(sum);
    evalue_free(base);

    return sum;
}

/* Given a constraint (cst_affine) a x + b y + c >= 0, compute a constraint (c)
 * +- (b y + c) +- a >=,> 0
 * ^            ^      ^
 * |            |      strict
 * sign_affine  sign_cst
 */
static void bound_constraint(Value *c, unsigned dim,
			     Value *cst_affine,
			     int sign_affine, int sign_cst, int strict)
{
    if (sign_affine == -1)
	Vector_Oppose(cst_affine+1, c, dim+1);
    else
	Vector_Copy(cst_affine+1, c, dim+1);

    if (sign_cst == -1)
	value_subtract(c[dim], c[dim], cst_affine[0]);
    else if (sign_cst == 1)
	value_addto(c[dim], c[dim], cst_affine[0]);

    if (strict)
	value_decrement(c[dim], c[dim]);
}

struct Bernoulli_data {
    struct barvinok_options *options;
    struct evalue_section_array *sections;
    const evalue *e;
};

static evalue *compute_poly_u(evalue *poly_u, Value *upper, Vector *row,
			      unsigned dim, Value tmp,
			      struct poly_list *faulhaber,
			      struct Bernoulli_data *data)
{
    int exact = data->options->approx->method == BV_APPROX_NONE;
    if (poly_u)
	return poly_u;
    Vector_Copy(upper+2, row->p, dim+1);
    value_oppose(tmp, upper[1]);
    value_addto(row->p[dim], row->p[dim], tmp);
    return power_sums(faulhaber, data->e, row, tmp, 0, 0, exact);
}

static evalue *compute_poly_l(evalue *poly_l, Value *lower, Vector *row,
			      unsigned dim,
			      struct poly_list *faulhaber,
			      struct Bernoulli_data *data)
{
    int exact = data->options->approx->method == BV_APPROX_NONE;
    if (poly_l)
	return poly_l;
    Vector_Copy(lower+2, row->p, dim+1);
    value_addto(row->p[dim], row->p[dim], lower[1]);
    return power_sums(faulhaber, data->e, row, lower[1], 0, 1, exact);
}

/* Compute sum of constant term.
 */
static evalue *linear_term(const evalue *cst, Value *lower, Value *upper,
			   Vector *row, Value tmp, int exact)
{
    evalue *linear;
    unsigned dim = row->Size - 1;

    if (EVALUE_IS_ZERO(*cst))
	return evalue_zero();

    if (!exact) {
	value_absolute(tmp, upper[1]);
	/* upper - lower */
	Vector_Combine(lower+2, upper+2, row->p, tmp, lower[1], dim+1);
	value_multiply(tmp, tmp, lower[1]);
	/* upper - lower + 1 */
	value_addto(row->p[dim], row->p[dim], tmp);

	linear = affine2evalue(row->p, tmp, dim);
    } else {
	evalue *l;

	value_absolute(tmp, upper[1]);
	Vector_Copy(upper+2, row->p, dim+1);
	value_addto(row->p[dim], row->p[dim], tmp);
	/* floor(upper+1) */
	linear = power_sums_base(row, tmp, 0, 1);

	Vector_Copy(lower+2, row->p, dim+1);
	/* floor(-lower) */
	l = power_sums_base(row, lower[1], 0, 1);

	/* floor(upper+1) + floor(-lower) = floor(upper) - ceil(lower) + 1 */
	eadd(l, linear);
	evalue_free(l);
    }

    emul(cst, linear);
    return linear;
}

static void Bernoulli_init(unsigned n, void *cb_data)
{
    struct Bernoulli_data *data = (struct Bernoulli_data *)cb_data;
    int exact = data->options->approx->method == BV_APPROX_NONE;
    int cases = exact ? 3 : 5;

    evalue_section_array_ensure(data->sections, cases * n);
}

static void Bernoulli_cb(Matrix *M, Value *lower, Value *upper, void *cb_data);

/*
 * This function requires that either the lower or the upper bound
 * represented by the constraints "lower" and "upper" is an integer
 * affine expression.
 * An affine substitution is performed to make this bound exactly
 * zero, ensuring that in the recursive call to Bernoulli_cb,
 * only one of the "cases" will apply.
 */
static void transform_to_single_case(Matrix *M, Value *lower, Value *upper,
				     struct Bernoulli_data *data)
{
    unsigned dim = M->NbColumns-2;
    Vector *shadow;
    Value a, b;
    evalue **subs;
    const evalue *e = data->e;
    evalue *t;
    int i;

    value_init(a);
    value_init(b);
    subs = ALLOCN(evalue *, dim+1);
    for (i = 0; i < dim; ++i)
	subs[1+i] = evalue_var(1+i);
    shadow = Vector_Alloc(2 * (2+dim+1));
    if (value_one_p(lower[1])) {
	/* Replace i by i + l' when b = 1 */
	value_set_si(shadow->p[0], 1);
	Vector_Oppose(lower+2, shadow->p+1, dim+1);
	subs[0] = affine2evalue(shadow->p, shadow->p[0], dim+1);
	/* new lower
	 *		i >= 0
	 * new upper
	 *		(-a i + u') + a (-l') >= 0
	 */
	value_assign(shadow->p[2+dim+1+1], upper[1]);
	value_oppose(a, upper[1]);
	value_set_si(b, 1);
	Vector_Combine(upper+2, lower+2, shadow->p+2+dim+1+2,
		       b, a, dim+1);
	upper = shadow->p+2+dim+1;
	lower = shadow->p;
	value_set_si(lower[1], 1);
	Vector_Set(lower+2, 0, dim+1);
    } else {
	/* Replace i by i + u' when a = 1 */
	value_set_si(shadow->p[0], 1);
	Vector_Copy(upper+2, shadow->p+1, dim+1);
	subs[0] = affine2evalue(shadow->p, shadow->p[0], dim+1);
	/* new lower
	 *		(b i - l') + b u' >= 0
	 * new upper
	 *		-i >= 0
	 */
	value_assign(shadow->p[1], lower[1]);
	value_set_si(a, 1);
	value_assign(b, lower[1]);
	Vector_Combine(upper+2, lower+2, shadow->p+2,
		       b, a, dim+1);
	upper = shadow->p+2+dim+1;
	lower = shadow->p;
	value_set_si(upper[1], -1);
	Vector_Set(upper+2, 0, dim+1);
    }
    value_clear(a);
    value_clear(b);

    t = evalue_dup(data->e);
    evalue_substitute(t, subs);
    reduce_evalue(t);
    data->e = t;
    for (i = 0; i < dim+1; ++i)
	evalue_free(subs[i]);
    free(subs);

    Bernoulli_cb(M, lower, upper, data);

    evalue_free(t);
    data->e = e;
    Vector_Free(shadow);
}

static void Bernoulli_cb(Matrix *M, Value *lower, Value *upper, void *cb_data)
{
    struct Bernoulli_data *data = (struct Bernoulli_data *)cb_data;
    struct evalue_section_array *sections = data->sections;
    Matrix *M2;
    Polyhedron *T;
    const evalue *factor = NULL;
    evalue *linear = NULL;
    int constant = 0;
    Value tmp;
    unsigned dim = M->NbColumns-2;
    Vector *row;
    int exact = data->options->approx->method == BV_APPROX_NONE;
    int cases = exact ? 3 : 5;

    assert(lower);
    assert(upper);
    evalue_section_array_ensure(sections, sections->ns + cases);

    M2 = Matrix_Copy(M);
    T = Constraints2Polyhedron(M2, data->options->MaxRays);
    Matrix_Free(M2);

    POL_ENSURE_VERTICES(T);
    if (emptyQ(T)) {
	Polyhedron_Free(T);
	return;
    }

    constant = value_notzero_p(data->e->d) ||
		data->e->x.p->type != polynomial ||
		data->e->x.p->pos != 1;
    if (!constant && (value_one_p(lower[1]) || value_mone_p(upper[1]))) {
	int single_case;
	int lower_cst, upper_cst;

	lower_cst = First_Non_Zero(lower+2, dim) == -1;
	upper_cst = First_Non_Zero(upper+2, dim) == -1;
	single_case =
	    (lower_cst && value_negz_p(lower[2+dim])) ||
	    (upper_cst && value_negz_p(upper[2+dim])) ||
	    (lower_cst && upper_cst &&
	     value_posz_p(lower[2+dim]) && value_posz_p(upper[2+dim]));
	if (!single_case) {
	    transform_to_single_case(M, lower, upper, data);
	    Polyhedron_Free(T);
	    return;
	}
    }

    assert(lower != upper);

    row = Vector_Alloc(dim+1);
    value_init(tmp);
    if (value_notzero_p(data->e->d)) {
	factor = data->e;
	constant = 1;
    } else {
	if (data->e->x.p->type == polynomial && data->e->x.p->pos == 1)
	    factor = shifted_copy(&data->e->x.p->arr[0]);
	else {
	    factor = shifted_copy(data->e);
	    constant = 1;
	}
    }
    linear = linear_term(factor, lower, upper, row, tmp, exact);

    if (constant) {
	evalue_section_array_add(sections, T, linear);
	data->options->stats->bernoulli_sums++;
    } else {
	evalue *poly_u = NULL, *poly_l = NULL;
	Polyhedron *D;
	struct poly_list *faulhaber;
	assert(data->e->x.p->type == polynomial);
	assert(data->e->x.p->pos == 1);
	faulhaber = faulhaber_compute(data->e->x.p->size-1);
	/* lower is the constraint
	 *			 b i - l' >= 0		i >= l'/b = l
	 * upper is the constraint
	 *			-a i + u' >= 0		i <= u'/a = u
	 */
	M2 = Matrix_Alloc(3, 2+T->Dimension);
	value_set_si(M2->p[0][0], 1);
	value_set_si(M2->p[1][0], 1);
	value_set_si(M2->p[2][0], 1);
	/* Case 1:
	 *		1 <= l		l' - b >= 0
	 *		0 < l		l' - 1 >= 0	if exact
	 */
	if (exact)
	    bound_constraint(M2->p[0]+1, T->Dimension, lower+1, -1, 0, 1);
	else
	    bound_constraint(M2->p[0]+1, T->Dimension, lower+1, -1, -1, 0);
	D = AddConstraints(M2->p_Init, 1, T, data->options->MaxRays);
	POL_ENSURE_VERTICES(D);
	if (emptyQ2(D))
	    Polyhedron_Free(D);
	else {
	    evalue *extra;
	    poly_u = compute_poly_u(poly_u, upper, row, dim, tmp,
					faulhaber, data);
	    Vector_Oppose(lower+2, row->p, dim+1);
	    extra = power_sums(faulhaber, data->e, row, lower[1], 1, 0, exact);
	    eadd(poly_u, extra);
	    eadd(linear, extra);

	    evalue_section_array_add(sections, D, extra);
	    data->options->stats->bernoulli_sums++;
	}

	/* Case 2:
	 *		1 <= -u		-u' - a >= 0
	 *		0 < -u		-u' - 1 >= 0	if exact
	 */
	if (exact)
	    bound_constraint(M2->p[0]+1, T->Dimension, upper+1, -1, 0, 1);
	else
	    bound_constraint(M2->p[0]+1, T->Dimension, upper+1, -1, 1, 0);
	D = AddConstraints(M2->p_Init, 1, T, data->options->MaxRays);
	POL_ENSURE_VERTICES(D);
	if (emptyQ2(D))
	    Polyhedron_Free(D);
	else {
	    evalue *extra;
	    poly_l = compute_poly_l(poly_l, lower, row, dim, faulhaber, data);
	    Vector_Oppose(upper+2, row->p, dim+1);
	    value_oppose(tmp, upper[1]);
	    extra = power_sums(faulhaber, data->e, row, tmp, 1, 1, exact);
	    eadd(poly_l, extra);
	    eadd(linear, extra);

	    evalue_section_array_add(sections, D, extra);
	    data->options->stats->bernoulli_sums++;
	}

	/* Case 3:
	 *		u >= 0		u' >= 0
	 *		-l >= 0		-l' >= 0
	 */
	bound_constraint(M2->p[0]+1, T->Dimension, upper+1, 1, 0, 0);
	bound_constraint(M2->p[1]+1, T->Dimension, lower+1, 1, 0, 0);
	D = AddConstraints(M2->p_Init, 2, T, data->options->MaxRays);
	POL_ENSURE_VERTICES(D);
	if (emptyQ2(D))
	    Polyhedron_Free(D);
	else {
	    evalue *e;
	    poly_l = compute_poly_l(poly_l, lower, row, dim, faulhaber, data);
	    poly_u = compute_poly_u(poly_u, upper, row, dim, tmp,
					faulhaber, data);
	
	    e = ALLOC(evalue);
	    value_init(e->d);
	    evalue_copy(e, poly_u);
	    eadd(poly_l, e);
	    eadd(linear, e);
	    evalue_section_array_add(sections, D, e);
	    data->options->stats->bernoulli_sums++;
	}

	if (!exact) {
	    /* Case 4:
	     *		l < 1		-l' + b - 1 >= 0
	     *		0 < l		l' - 1 >= 0
	     *		u >= 1		u' - a >= 0
	     */
	    bound_constraint(M2->p[0]+1, T->Dimension, lower+1, 1, 1, 1);
	    bound_constraint(M2->p[1]+1, T->Dimension, lower+1, -1, 0, 1);
	    bound_constraint(M2->p[2]+1, T->Dimension, upper+1, 1, 1, 0);
	    D = AddConstraints(M2->p_Init, 3, T, data->options->MaxRays);
	    POL_ENSURE_VERTICES(D);
	    if (emptyQ2(D))
		Polyhedron_Free(D);
	    else {
		poly_u = compute_poly_u(poly_u, upper, row, dim, tmp,
					    faulhaber, data);
		eadd(linear, poly_u);
		evalue_section_array_add(sections, D, poly_u);
		poly_u = NULL;
		data->options->stats->bernoulli_sums++;
	    }

	    /* Case 5:
	     * 		-u < 1		u' + a - 1 >= 0
	     *		0 < -u		-u' - 1 >= 0
	     *		l <= -1		-l' - b >= 0
	     */
	    bound_constraint(M2->p[0]+1, T->Dimension, upper+1, 1, -1, 1);
	    bound_constraint(M2->p[1]+1, T->Dimension, upper+1, -1, 0, 1);
	    bound_constraint(M2->p[2]+1, T->Dimension, lower+1, 1, -1, 0);
	    D = AddConstraints(M2->p_Init, 3, T, data->options->MaxRays);
	    POL_ENSURE_VERTICES(D);
	    if (emptyQ2(D))
		Polyhedron_Free(D);
	    else {
		poly_l = compute_poly_l(poly_l, lower, row, dim,
					faulhaber, data);
		eadd(linear, poly_l);
		evalue_section_array_add(sections, D, poly_l);
		poly_l = NULL;
		data->options->stats->bernoulli_sums++;
	    }
	}

	Matrix_Free(M2);
	Polyhedron_Free(T);
	if (poly_l)
	    evalue_free(poly_l);
	if (poly_u)
	    evalue_free(poly_u);
	evalue_free(linear);
    }
    if (factor != data->e)
	evalue_free((evalue *)factor);
    value_clear(tmp);
    Vector_Free(row);
}

/*
 * Move the variable at position pos to the front by exchanging
 * that variable with the first variable.
 */
static void more_var_to_front(Polyhedron **P_p , evalue **E_p, int pos)
{
    Polyhedron *P = *P_p;
    evalue *E = *E_p;
    unsigned dim = P->Dimension;

    assert(pos != 0);

    P = Polyhedron_Copy(P);
    Polyhedron_ExchangeColumns(P, 1, 1+pos);
    *P_p = P;

    if (value_zero_p(E->d)) {
	int j;
	evalue **subs;

	subs = ALLOCN(evalue *, dim);
	for (j = 0; j < dim; ++j)
	    subs[j] = evalue_var(j);
	E = subs[0];
	subs[0] = subs[pos];
	subs[pos] = E;
	E = evalue_dup(*E_p);
	evalue_substitute(E, subs);
	for (j = 0; j < dim; ++j)
	    evalue_free(subs[j]);
	free(subs);
	*E_p = E;
    }
}

static int type_offset(enode *p)
{
   return p->type == fractional ? 1 :
	  p->type == flooring ? 1 : 0;
}

static void adjust_periods(evalue *e, unsigned nvar, Vector *periods)
{
    for (; value_zero_p(e->d); e = &e->x.p->arr[0]) {
	int pos;
	assert(e->x.p->type == polynomial);
	assert(e->x.p->size == 2);
	assert(value_notzero_p(e->x.p->arr[1].d));

	pos = e->x.p->pos - 1;
	if (pos >= nvar)
	    break;

	value_lcm(periods->p[pos], periods->p[pos], e->x.p->arr[1].d);
    }
}

static void fractional_periods_r(evalue *e, unsigned nvar, Vector *periods)
{
    int i;

    if (value_notzero_p(e->d))
	return;

    assert(e->x.p->type == polynomial || e->x.p->type == fractional);

    if (e->x.p->type == fractional)
	adjust_periods(&e->x.p->arr[0], nvar, periods);

    for (i = type_offset(e->x.p); i < e->x.p->size; ++i)
	fractional_periods_r(&e->x.p->arr[i], nvar, periods);
}

/*
 * For each of the nvar variables, compute the lcm of the
 * denominators of the coefficients of that variable in
 * any of the fractional parts.
 */
static Vector *fractional_periods(evalue *e, unsigned nvar)
{
    int i;
    Vector *periods = Vector_Alloc(nvar);

    for (i = 0; i < nvar; ++i)
	value_set_si(periods->p[i], 1);

    fractional_periods_r(e, nvar, periods);

    return periods;
}

/* Move "best" variable to sum over into the first position,
 * possibly changing *P_p and *E_p.
 *
 * If there are any fractional parts (period != NULL), then we
 * first look for a variable with the smallest lcm of denominators
 * inside a fractional part.  This denominator is assigned to period
 * and corresponds to the number of "splinters" we need to construct
 * at this level.
 *
 * Of those with this denominator (all if period == NULL or if there
 * are no fractional parts), we select the variable with the smallest
 * maximal coefficient, as this coefficient will become a denominator
 * in new fractional parts (for an exact computation), which may
 * lead to splintering in the next step.
 */
static void move_best_to_front(Polyhedron **P_p, evalue **E_p, unsigned nvar,
			       Value *period)
{
    Polyhedron *P = *P_p;
    evalue *E = *E_p;
    int i, j, best_i = -1;
    Vector *periods;
    Value best, max;

    assert(nvar >= 1);

    if (period) {
	periods = fractional_periods(E, nvar);
	value_assign(*period, periods->p[0]);
	for (i = 1; i < nvar; ++i)
	    if (value_lt(periods->p[i], *period))
		value_assign(*period, periods->p[i]);
    }

    value_init(best);
    value_init(max);

    for (i = 0; i < nvar; ++i) {
	if (period && value_ne(*period, periods->p[i]))
	    continue;

	value_set_si(max, 0);

	for (j = 0; j < P->NbConstraints; ++j) {
	    if (value_zero_p(P->Constraint[j][1+i]))
		continue;
	    if (First_Non_Zero(P->Constraint[j]+1, i) == -1 &&
		First_Non_Zero(P->Constraint[j]+1+i+1, nvar-i-1) == -1)
		continue;
	    if (value_abs_gt(P->Constraint[j][1+i], max))
		value_absolute(max, P->Constraint[j][1+i]);
	}

	if (best_i == -1 || value_lt(max, best)) {
	    value_assign(best, max);
	    best_i = i;
	}
    }

    value_clear(best);
    value_clear(max);

    if (period)
	Vector_Free(periods);

    if (best_i != 0)
	more_var_to_front(P_p, E_p, best_i);

    return;
}

static evalue *sum_over_polytope_base(Polyhedron *P, evalue *E, unsigned nvar,
				      struct evalue_section_array *sections,
				      struct barvinok_options *options)
{
    evalue *res;
    struct Bernoulli_data data;

    assert(P->NbEq == 0);

    sections->ns = 0;
    data.options = options;
    data.sections = sections;
    data.e = E;

    for_each_lower_upper_bound(P, Bernoulli_init, Bernoulli_cb, &data);

    res = evalue_from_section_array(sections->s, sections->ns);

    if (nvar > 1) {
	evalue *tmp = barvinok_summate(res, nvar-1, options);
	evalue_free(res);
	res = tmp;
    }

    return res;
}

/* Splinter P into period slices along the first variable x = period y + c,
 * 0 <= c < period, ensuring no fractional part contains the first variable,
 * and sum over all slices.
 */
static evalue *sum_over_polytope_slices(Polyhedron *P, evalue *E,
					unsigned nvar,
					Value period,
					struct evalue_section_array *sections,
					struct barvinok_options *options)
{
    evalue *sum = evalue_zero();
    evalue **subs;
    unsigned dim = P->Dimension;
    Matrix *T;
    Value i;
    Value one;
    int j;

    value_init(i);
    value_init(one);
    value_set_si(one, 1);

    subs = ALLOCN(evalue *, dim);

    T = Matrix_Alloc(dim+1, dim+1);
    value_assign(T->p[0][0], period);
    for (j = 1; j < dim+1; ++j)
	value_set_si(T->p[j][j], 1);

    for (j = 0; j < dim; ++j)
	subs[j] = evalue_var(j);
    evalue_mul(subs[0], period);

    for (value_set_si(i, 0); value_lt(i, period); value_increment(i, i)) {
	evalue *tmp;
	Polyhedron *S = DomainPreimage(P, T, options->MaxRays);
	evalue *e = evalue_dup(E);
	evalue_substitute(e, subs);
	reduce_evalue(e);

	if (S->NbEq)
	    tmp = barvinok_sum_over_polytope(S, e, nvar, sections, options);
	else
	    tmp = sum_over_polytope_base(S, e, nvar, sections, options);

	assert(tmp);
	eadd(tmp, sum);
	evalue_free(tmp);

	Domain_Free(S);
	evalue_free(e);

	value_increment(T->p[0][dim], T->p[0][dim]);
	evalue_add_constant(subs[0], one);
    }

    value_clear(i);
    value_clear(one);
    Matrix_Free(T);
    for (j = 0; j < dim; ++j)
	evalue_free(subs[j]);
    free(subs);

    reduce_evalue(sum);
    return sum;
}

evalue *bernoulli_summate(Polyhedron *P, evalue *E, unsigned nvar,
				 struct evalue_section_array *sections,
				 struct barvinok_options *options)
{
    Polyhedron *P_orig = P;
    evalue *E_orig = E;
    Value period;
    evalue *sum;
    int exact = options->approx->method == BV_APPROX_NONE;

    value_init(period);

    move_best_to_front(&P, &E, nvar, exact ? &period : NULL);
    if (exact && value_notone_p(period))
	sum = sum_over_polytope_slices(P, E, nvar, period, sections, options);
    else
	sum = sum_over_polytope_base(P, E, nvar, sections, options);

    if (P != P_orig)
	Polyhedron_Free(P);
    if (E != E_orig)
	evalue_free(E);

    value_clear(period);

    return sum;
}
