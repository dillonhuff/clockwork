/*
 * Sum polynomial over integer points in polytope using local
 * Euler-Maclaurin formula by Berline and Vergne.
 */

#include <assert.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "bernoulli.h"
#include "binomial.h"
#include "conversion.h"
#include "decomposer.h"
#include "euler.h"
#include "lattice_point.h"
#include "param_util.h"
#include "power.h"
#include "reduce_domain.h"

/* Compute total degree in first nvar variables */
static unsigned total_degree(const evalue *e, unsigned nvar)
{
    int i;
    unsigned max_degree;

    if (value_notzero_p(e->d))
	return 0;
    assert(e->x.p->type == polynomial);
    if (e->x.p->pos-1 >= nvar)
	return 0;

    max_degree = total_degree(&e->x.p->arr[0], nvar);
    for (i = 1; i < e->x.p->size; ++i) {
	unsigned degree = i + total_degree(&e->x.p->arr[i], nvar);
	if (degree > max_degree)
	    max_degree = degree;
    }
    return max_degree;
}

/*
 * Computes the coefficients of
 *
 *	\mu(-t + R_+)(\xi) = \sum_{n=0)^\infty -b(n+1, t)/(n+1)! \xi^n
 *
 * where b(n, t) is the Bernoulli polynomial of degree n in t
 * and t(p) is an expression (a fractional part) of the parameters p
 * such that 0 <= t(p) < 1 for all values of the parameters.
 * The coefficients are computed on demand up to (and including)
 * the maximal degree max_degree.
 */
struct mu_1d {
    unsigned max_degree;
    evalue **coefficients;
    const evalue *t;

    mu_1d(unsigned max_degree, evalue *t) : max_degree(max_degree), t(t) {
	coefficients = new evalue *[max_degree+1];
	for (int i = 0; i < max_degree+1; ++i)
	    coefficients[i] = NULL;
    }
    ~mu_1d() {
	for (int i = 0; i < max_degree+1; ++i)
	    if (coefficients[i])
		evalue_free(coefficients[i]);
	delete [] coefficients;
    }
    void compute_coefficient(unsigned n);
    const evalue *coefficient(unsigned n) {
	if (!coefficients[n])
	    compute_coefficient(n);
	return coefficients[n];
    }
};

void mu_1d::compute_coefficient(unsigned n)
{
    struct poly_list *bernoulli = bernoulli_compute(n+1);
    evalue *c = evalue_polynomial(bernoulli->poly[n+1], t);
    evalue_negate(c);
    evalue_div(c, *factorial(n+1));

    coefficients[n] = c;
}

/*
 * Computes the coefficients of
 *
 *	\mu(a)(y) = \sum_{n_1} \sum_{n_2} c_{n_1,n_2} y^{n_1} y^{n_2}
 *
 * with c_{n1,n2} given by
 *
 *	b(n1+1,t1)/(n1+1)! b(n2+1,t2)/(n2+1)!
 *		- b(n1+n2+2,t2)/(n1+n2+2)! (-c1)^{n1+1}
 *		- b(n1+n2+2,t1)/(n1+n2+2)! (-c2)^{n2+1}
 *
 * where b(n, t) is the Bernoulli polynomial of degree n in t,
 * t1(p) and t2(p) are expressions (fractional parts) of the parameters p
 * such that 0 <= t1(p), t2(p) < 1 for all values of the parameters
 * and c1 = cn/c1d and c2 = cn/c2d.
 * The coefficients are computed on demand up to (and including)
 * the maximal degree (n1,n2) = (max_degree,max_degree).
 * 
 * bernoulli_t[i][j] contains b(j+1, t_i)/(j+1)!
 */
struct mu_2d {
    unsigned max_degree;
    evalue ***coefficients;
    /* bernoulli_t[i][n] stores b(n+1, t_i)/(n+1)! */
    evalue **bernoulli_t[2];
    /* stores the powers of -cn */
    struct power *power_cn;
    struct power *power_c1d;
    struct power *power_c2d;
    const evalue *t[2];

    mu_2d(unsigned max_degree, evalue *t1, evalue *t2,
	  Value cn, Value c1d, Value c2d) : max_degree(max_degree) {
	t[0] = t1;
	t[1] = t2;
	coefficients = new evalue **[max_degree+1];
	for (int i = 0; i < max_degree+1; ++i) {
	    coefficients[i] = new evalue *[max_degree+1];
	    for (int j = 0; j < max_degree+1; ++j)
		coefficients[i][j] = NULL;
	}
	for (int i = 0; i < 2; ++i) {
	    bernoulli_t[i] = new evalue *[max_degree+2];
	    for (int j = 0; j < max_degree+2; ++j)
		bernoulli_t[i][j] = NULL;
	}
	value_oppose(cn, cn);
	power_cn = new struct power(cn, max_degree+1);
	value_oppose(cn, cn);
	power_c1d = new struct power(c1d, max_degree+1);
	power_c2d = new struct power(c2d, max_degree+1);
    }
    ~mu_2d() {
	for (int i = 0; i < max_degree+1; ++i) {
	    for (int j = 0; j < max_degree+1; ++j)
		if (coefficients[i][j])
		    evalue_free(coefficients[i][j]);
	    delete [] coefficients[i];
	}
	delete [] coefficients;
	for (int i = 0; i < 2; ++i)
	    for (int j = 0; j < max_degree+2; ++j)
		if (bernoulli_t[i][j])
		    evalue_free(bernoulli_t[i][j]);
	for (int i = 0; i < 2; ++i)
	    delete [] bernoulli_t[i];
	delete power_cn;
	delete power_c1d;
	delete power_c2d;
    }
    const evalue *get_bernoulli(int n, int i);

    void compute_coefficient(unsigned n1, unsigned n2);
    const evalue *coefficient(unsigned n1, unsigned n2) {
	if (!coefficients[n1][n2])
	    compute_coefficient(n1, n2);
	return coefficients[n1][n2];
    }
};

/*
 * Returns b(n, t_i)/n!
 */
const evalue *mu_2d::get_bernoulli(int n, int i)
{
    if (!bernoulli_t[i][n-1]) {
	struct poly_list *bernoulli = bernoulli_compute(n);
	bernoulli_t[i][n-1] = evalue_polynomial(bernoulli->poly[n], t[i]);
	evalue_div(bernoulli_t[i][n-1], *factorial(n));
    }
    return bernoulli_t[i][n-1];
}

void mu_2d::compute_coefficient(unsigned n1, unsigned n2)
{
    evalue *c = evalue_dup(get_bernoulli(n1+1, 0));
    emul(get_bernoulli(n2+1, 1), c);

    if (value_notzero_p(*(*power_cn)[1])) {
	evalue *t;
	Value neg_power;

	value_init(neg_power);

	t = evalue_dup(get_bernoulli(n1+n2+2, 1));
	value_multiply(neg_power,
		       *(*power_cn)[n1+1], *binomial(n1+n2+1, n1+1));
	value_oppose(neg_power, neg_power);
	evalue_mul_div(t, neg_power, *(*power_c1d)[n1+1]);
	eadd(t, c);
	evalue_free(t);

	t = evalue_dup(get_bernoulli(n1+n2+2, 0));
	value_multiply(neg_power,
		       *(*power_cn)[n2+1], *binomial(n1+n2+1, n2+1));
	value_oppose(neg_power, neg_power);
	evalue_mul_div(t, neg_power, *(*power_c2d)[n2+1]);
	eadd(t, c);
	evalue_free(t);

	value_clear(neg_power);
    }

    coefficients[n1][n2] = c;
}

/* Later: avoid recomputation of mu of faces that appear in
 * more than one domain.
 */
struct summator_2d : public signed_cone_consumer, public vertex_decomposer {
    const evalue *polynomial;
    Value *inner;
    unsigned nparam;

    /* substitutions to use when result is 0-dimensional (only parameters) */
    evalue **subs_0d;
    /* substitutions to use when result is 1-dimensional */
    evalue **subs_1d;
    evalue *sum;

    summator_2d(evalue *e, Param_Polyhedron *PP, Value *inner,
		unsigned nparam) :
		vertex_decomposer(PP, *this), polynomial(e),
		inner(inner), nparam(nparam) {
	sum = evalue_zero();

	subs_0d = new evalue *[2+nparam];
	subs_1d = new evalue *[2+nparam];
	subs_0d[0] = NULL;
	subs_0d[1] = NULL;
	subs_1d[0] = NULL;
	subs_1d[1] = NULL;
	for (int i = 0; i < nparam; ++i) {
	    subs_0d[2+i] = evalue_var(i);
	    subs_1d[2+i] = evalue_var(1+i);
	}
    }
    ~summator_2d() {
	for (int i = 0; i < nparam; ++i) {
	    evalue_free(subs_0d[2+i]);
	    evalue_free(subs_1d[2+i]);
	}
	delete [] subs_0d;
	delete [] subs_1d;
    }
    evalue *summate_over_pdomain(Param_Polyhedron *PP, unsigned *facets,
				    Param_Domain *PD,
				    struct barvinok_options *options);
    void handle_facet(Param_Polyhedron *PP, Param_Domain *FD, Value *normal);
    void integrate(Param_Polyhedron *PP, unsigned *facets, Param_Domain *PD);
    virtual void handle(const signed_cone& sc, barvinok_options *options);
};

/* Replaces poly by its derivative along variable var */
static void evalue_derive(evalue *poly, int var)
{
    if (value_notzero_p(poly->d)) {
	value_set_si(poly->x.n, 0);
	value_set_si(poly->d, 1);
	return;
    }
    assert(poly->x.p->type == polynomial);
    if (poly->x.p->pos-1 > var) {
	free_evalue_refs(poly);
	value_init(poly->d);
	evalue_set_si(poly, 0, 1);
	return;
    }

    if (poly->x.p->pos-1 < var) {
	for (int i = 0; i < poly->x.p->size; ++i)
	    evalue_derive(&poly->x.p->arr[i], var);
	reduce_evalue(poly);
	return;
    }

    assert(poly->x.p->size >= 1);
    enode *p = poly->x.p;
    free_evalue_refs(&p->arr[0]);
    if (p->size == 1) {
	free(p);
	evalue_set_si(poly, 0, 1);
	return;
    }
    if (p->size == 2) {
	value_clear(poly->d);
	*poly = p->arr[1];
	free(p);
	return;
    }

    p->size--;
    Value factor;
    value_init(factor);
    for (int i = 0; i < p->size; ++i) {
	value_set_si(factor, i+1);
	p->arr[i] = p->arr[i+1];
	evalue_mul(&p->arr[i], factor);
    }
    value_clear(factor);
}

/* Check whether e is constant with respect to variable var */
static int evalue_is_constant(evalue *e, int var)
{
    int i;

    if (value_notzero_p(e->d))
	return 1;
    if (e->x.p->type == polynomial && e->x.p->pos-1 == var)
	return 0;
    assert(e->x.p->type == polynomial ||
	   e->x.p->type == fractional ||
	   e->x.p->type == flooring);
    for (i = 0; i < e->x.p->size; ++i)
	if (!evalue_is_constant(&e->x.p->arr[i], var))
	    return 0;
    return 1;
}

/* Replaces poly by its anti-derivative with constant 0 along variable var */
static void evalue_anti_derive(evalue *poly, int var)
{
    enode *p;

    if (value_zero_p(poly->d) &&
	    poly->x.p->type == polynomial && poly->x.p->pos-1 < var) {
	for (int i = 0; i < poly->x.p->size; ++i)
	    evalue_anti_derive(&poly->x.p->arr[i], var);
	reduce_evalue(poly);
	return;
    }

    if (evalue_is_constant(poly, var)) {
	p = new_enode(polynomial, 2, 1+var);
	evalue_set_si(&p->arr[0], 0, 1);
	value_clear(p->arr[1].d);
	p->arr[1] = *poly;
	value_init(poly->d);
	poly->x.p = p;
	return;
    }
    assert(poly->x.p->type == polynomial);

    p = new_enode(polynomial, poly->x.p->size+1, 1+var);
    evalue_set_si(&p->arr[0], 0, 1);
    for (int i = 0; i < poly->x.p->size; ++i) {
	value_clear(p->arr[1+i].d);
	p->arr[1+i] = poly->x.p->arr[i];
	value_set_si(poly->d, 1+i);
	evalue_div(&p->arr[1+i], poly->d);
    }
    free(poly->x.p);
    poly->x.p = p;
    value_set_si(poly->d, 0);
}

/* Computes offsets in the basis given by the rays of the cone
 * to the integer point in the fundamental parallelepiped of
 * the cone.
 * The resulting evalues contain only the parameters as variables.
 */
evalue **offsets_to_integer_point(Matrix *Rays, Matrix *vertex)
{
    unsigned nparam = vertex->NbColumns-2;
    evalue **t = new evalue *[2];

    if (value_one_p(vertex->p[0][nparam+1])) {
	t[0] = evalue_zero();
	t[1] = evalue_zero();
    } else {
	Matrix *R2 = Matrix_Copy(Rays);
	Matrix_Transposition(R2);
	Matrix *inv = Matrix_Alloc(Rays->NbColumns, Rays->NbRows);
	int ok = Matrix_Inverse(R2, inv);
	assert(ok);
	Matrix_Free(R2);

	/* We want the fractional part of the negative relative coordinates */
	Vector_Oppose(inv->p[0], inv->p[0], inv->NbColumns);
	Vector_Oppose(inv->p[1], inv->p[1], inv->NbColumns);

	Matrix *neg_rel = Matrix_Alloc(2, nparam+1);
	vertex->NbColumns--;
	Matrix_Product(inv, vertex, neg_rel);
	Matrix_Free(inv);
	vertex->NbColumns++;
	t[0] = fractional_part(neg_rel->p[0], vertex->p[0][nparam+1],
			       nparam, NULL);
	t[1] = fractional_part(neg_rel->p[1], vertex->p[0][nparam+1],
			       nparam, NULL);
	Matrix_Free(neg_rel);
    }

    return t;
}

/*
 * Called from decompose_at_vertex.
 *
 * Handles a cone in the signed decomposition of the supporting
 * cone of a vertex.  The cone is assumed to be unimodular.
 */
void summator_2d::handle(const signed_cone& sc, barvinok_options *options)
{
    evalue **t;
    unsigned degree = total_degree(polynomial, 2);

    subs_0d[0] = affine2evalue(V->Vertex->p[0],
			       V->Vertex->p[0][nparam+1], nparam);
    subs_0d[1] = affine2evalue(V->Vertex->p[1],
			       V->Vertex->p[1][nparam+1], nparam);

    assert(sc.det == 1);

    assert(V->Vertex->NbRows > 0);
    Param_Vertex_Common_Denominator(V);

    Matrix *Rays = zz2matrix(sc.rays);

    t = offsets_to_integer_point(Rays, V->Vertex);

    Vector *c = Vector_Alloc(3);
    Inner_Product(Rays->p[0], Rays->p[1], 2, &c->p[0]);
    Inner_Product(Rays->p[0], Rays->p[0], 2, &c->p[1]);
    Inner_Product(Rays->p[1], Rays->p[1], 2, &c->p[2]);

    mu_2d mu(degree, t[0], t[1], c->p[0], c->p[1], c->p[2]);
    Vector_Free(c);

    struct power power_r00(Rays->p[0][0], degree);
    struct power power_r01(Rays->p[0][1], degree);
    struct power power_r10(Rays->p[1][0], degree);
    struct power power_r11(Rays->p[1][1], degree);

    Value factor, tmp1, tmp2;
    value_init(factor);
    value_init(tmp1);
    value_init(tmp2);
    evalue *res = evalue_zero();
    evalue *dx1 = evalue_dup(polynomial);
    for (int i = 0; !EVALUE_IS_ZERO(*dx1); ++i) {
	evalue *dx2 = evalue_dup(dx1);
	for (int j = 0; !EVALUE_IS_ZERO(*dx2); ++j) {
	    evalue *cij = evalue_zero();
	    for (int n1 = 0; n1 <= i+j; ++n1) {
		int n2 = i+j-n1;
		value_set_si(factor, 0);
		for (int k = max(0, i-n2); k <= i && k <= n1; ++k) {
		    int l = i-k;
		    value_multiply(tmp1, *power_r00[k], *power_r01[n1-k]);
		    value_multiply(tmp1, tmp1, *power_r10[l]);
		    value_multiply(tmp1, tmp1, *power_r11[n2-l]);
		    value_multiply(tmp1, tmp1, *binomial(n1, k));
		    value_multiply(tmp1, tmp1, *binomial(n2, l));
		    value_addto(factor, factor, tmp1);
		}
		if (value_zero_p(factor))
		    continue;

		evalue *c = evalue_dup(mu.coefficient(n1, n2));
		evalue_mul(c, factor);
		eadd(c, cij);
		evalue_free(c);
	    }
	    evalue *d = evalue_dup(dx2);
	    evalue_substitute(d, subs_0d);
	    emul(cij, d);
	    evalue_free(cij);
	    eadd(d, res);
	    evalue_free(d);
	    evalue_derive(dx2, 1);
	}
	evalue_free(dx2);
	evalue_derive(dx1, 0);
    }
    evalue_free(dx1);
    for (int i = 0; i < 2; ++i) {
	evalue_free(subs_0d[i]);
	subs_0d[i] = NULL;
	evalue_free(t[i]);
    }
    delete [] t;
    value_clear(factor);
    value_clear(tmp1);
    value_clear(tmp2);
    Matrix_Free(Rays);

    if (sc.sign < 0)
	evalue_negate(res);
    eadd(res, sum);
    evalue_free(res);
}

evalue *summator_2d::summate_over_pdomain(Param_Polyhedron *PP,
					unsigned *facets, Param_Domain *PD,
					struct barvinok_options *options)
{
    Param_Vertices *V;
    int i, ix;
    unsigned bx;

    assert(PP->V->Vertex->NbRows == 2);

    FORALL_PVertex_in_ParamPolyhedron(V, PD, PP) // _i internal counter
	decompose_at_vertex(V, _i, options);
    END_FORALL_PVertex_in_ParamPolyhedron;

    Vector *normal = Vector_Alloc(2);
    for (i = 0, ix = 0, bx = MSB; i < PP->Constraints->NbRows; ++i) {
	Param_Domain *FD;

	if (!(facets[ix] & bx)) {
	    NEXT(ix, bx);
	    continue;
	}

	Vector_Copy(PP->Constraints->p[i]+1, normal->p, 2);
	if (value_zero_p(normal->p[0]) && value_zero_p(normal->p[1]))
	    continue;

	FD = Param_Polyhedron_Facet(PP, PD, PP->Constraints->p[i]);
	Vector_Normalize(normal->p, 2);
	handle_facet(PP, FD, normal->p);
	Param_Domain_Free(FD);
	NEXT(ix, bx);
    }
    Vector_Free(normal);

    integrate(PP, facets, PD);

    return sum;
}

void summator_2d::handle_facet(Param_Polyhedron *PP, Param_Domain *FD,
			       Value *normal)
{
    Param_Vertices *V;
    int nbV = 0;
    Param_Vertices *vertex[2];
    Value det;
    unsigned degree = total_degree(polynomial, 2);

    FORALL_PVertex_in_ParamPolyhedron(V, FD, PP)
	vertex[nbV++] = V;
    END_FORALL_PVertex_in_ParamPolyhedron;

    assert(nbV == 2);

    /* We can take either vertex[0] or vertex[1];
     * the result should be the same
     */
    Param_Vertex_Common_Denominator(vertex[0]);

    /* The extra variable in front is the coordinate along the facet. */
    Vector *coef_normal = Vector_Alloc(1 + nparam + 2);
    Vector_Combine(vertex[0]->Vertex->p[0], vertex[0]->Vertex->p[1],
		   coef_normal->p+1, normal[0], normal[1], nparam+1);
    value_assign(coef_normal->p[1+nparam+1], vertex[0]->Vertex->p[0][nparam+1]);
    Vector_Normalize(coef_normal->p, coef_normal->Size);

    Vector *base = Vector_Alloc(2);
    value_oppose(base->p[0], normal[1]);
    value_assign(base->p[1], normal[0]);

    value_init(det);
    Inner_Product(normal, normal, 2, &det);

    Vector *s = Vector_Alloc(1+nparam+2);
    value_multiply(s->p[1+nparam+1], coef_normal->p[1+nparam+1], det);
    value_multiply(s->p[0], base->p[0], s->p[1+nparam+1]);
    Vector_Scale(coef_normal->p+1, s->p+1, normal[0], nparam+1);
    subs_1d[0] = affine2evalue(s->p, s->p[1+nparam+1], 1+nparam);
    value_multiply(s->p[0], base->p[1], s->p[1+nparam+1]);
    Vector_Scale(coef_normal->p+1, s->p+1, normal[1], nparam+1);
    subs_1d[1] = affine2evalue(s->p, s->p[1+nparam+1], 1+nparam);
    Vector_Free(s);

    evalue *t;
    if (value_one_p(coef_normal->p[coef_normal->Size-1]))
	t = evalue_zero();
    else {
	Vector_Oppose(coef_normal->p+1, coef_normal->p+1, nparam+1);
	t = fractional_part(coef_normal->p,
			    coef_normal->p[coef_normal->Size-1],
			    1+nparam, NULL);
    }
    Vector_Free(coef_normal);

    mu_1d mu(degree, t);

    struct power power_normal0(normal[0], degree);
    struct power power_normal1(normal[1], degree);
    struct power power_det(det, degree);

    Value(factor);
    value_init(factor);
    evalue *res = evalue_zero();
    evalue *dx1 = evalue_dup(polynomial);
    for (int i = 0; !EVALUE_IS_ZERO(*dx1); ++i) {
	evalue *dx2 = evalue_dup(dx1);
	for (int j = 0; !EVALUE_IS_ZERO(*dx2); ++j) {
	    value_multiply(factor, *power_normal0[i], *power_normal1[j]);
	    if (value_notzero_p(factor)) {
		value_multiply(factor, factor, *binomial(i+j, i));

		evalue *c = evalue_dup(mu.coefficient(i+j));
		evalue_mul_div(c, factor, *power_det[i+j]);

		evalue *d = evalue_dup(dx2);
		evalue_substitute(d, subs_1d);
		emul(c, d);
		evalue_free(c);
		eadd(d, res);
		evalue_free(d);
	    }
	    evalue_derive(dx2, 1);
	}
	evalue_free(dx2);
	evalue_derive(dx1, 0);
    }
    evalue_free(dx1);
    evalue_free(t);
    for (int i = 0; i < 2; ++i) {
	evalue_free(subs_1d[i]);
	subs_1d[i] = NULL;
    }
    value_clear(factor);
    evalue_anti_derive(res, 0);

    Matrix *z = Matrix_Alloc(2, nparam+2);
    Vector *fixed_z = Vector_Alloc(2);
    for (int i = 0; i < 2; ++i) {
	Vector_Combine(vertex[i]->Vertex->p[0], vertex[i]->Vertex->p[1],
		       z->p[i], base->p[0], base->p[1], nparam+1);
	value_multiply(z->p[i][nparam+1],
		       det, vertex[i]->Vertex->p[0][nparam+1]);
	Inner_Product(z->p[i], inner, nparam+1, &fixed_z->p[i]);
    }
    Vector_Free(base);
    /* Put on a common denominator */
    value_multiply(fixed_z->p[0], fixed_z->p[0], z->p[1][nparam+1]);
    value_multiply(fixed_z->p[1], fixed_z->p[1], z->p[0][nparam+1]);
    /* Make sure z->p[0] is smaller than z->p[1] (for an internal
     * point of the chamber and hence for all parameter values in
     * the chamber), to ensure we integrate in the right direction.
     */
    if (value_lt(fixed_z->p[1], fixed_z->p[0]))
	Vector_Exchange(z->p[0], z->p[1], nparam+2);
    Vector_Free(fixed_z);
    value_clear(det);

    subs_0d[1] = affine2evalue(z->p[1], z->p[1][nparam+1], nparam);
    evalue *up = evalue_dup(res);
    evalue_substitute(up, subs_0d+1);
    evalue_free(subs_0d[1]);

    subs_0d[1] = affine2evalue(z->p[0], z->p[0][nparam+1], nparam);
    evalue_substitute(res, subs_0d+1);
    evalue_negate(res);
    eadd(up, res);
    evalue_free(subs_0d[1]);
    subs_0d[1] = NULL;
    evalue_free(up);

    Matrix_Free(z);

    eadd(res, sum);
    evalue_free(res);
}

/* Integrate the polynomial over the whole polygon using
 * the Green-Stokes theorem.
 */
void summator_2d::integrate(Param_Polyhedron *PP, unsigned *facets,
				Param_Domain *PD)
{
    Value tmp;
    evalue *res = evalue_zero();
    int i, ix;
    unsigned bx;

    evalue *I = evalue_dup(polynomial);
    evalue_anti_derive(I, 0);

    value_init(tmp);
    Vector *normal = Vector_Alloc(2);
    Vector *dir = Vector_Alloc(2);
    Matrix *v0v1 = Matrix_Alloc(2, nparam+2);
    Vector *f_v0v1 = Vector_Alloc(2);
    Vector *s = Vector_Alloc(1+nparam+2);
    for (i = 0, ix = 0, bx = MSB; i < PP->Constraints->NbRows; ++i) {
	Param_Domain *FD;
	Param_Vertices *V;
	int nbV = 0;
	Param_Vertices *vertex[2];

	if (!(facets[ix] & bx)) {
	    NEXT(ix, bx);
	    continue;
	}

	Vector_Copy(PP->Constraints->p[i]+1, normal->p, 2);

	if (value_zero_p(normal->p[0]))
	    continue;

	Vector_Normalize(normal->p, 2);
	value_assign(dir->p[0], normal->p[1]);
	value_oppose(dir->p[1], normal->p[0]);

	FD = Param_Polyhedron_Facet(PP, PD, PP->Constraints->p[i]);

	FORALL_PVertex_in_ParamPolyhedron(V, FD, PP)
	    vertex[nbV++] = V;
	END_FORALL_PVertex_in_ParamPolyhedron;

	assert(nbV == 2);

	Param_Vertex_Common_Denominator(vertex[0]);
	Param_Vertex_Common_Denominator(vertex[1]);

	value_oppose(tmp, vertex[1]->Vertex->p[0][nparam+1]);
	for (int i = 0; i < 2; ++i)
	    Vector_Combine(vertex[1]->Vertex->p[i],
			   vertex[0]->Vertex->p[i],
			   v0v1->p[i],
			   vertex[0]->Vertex->p[0][nparam+1], tmp, nparam+1);
	value_multiply(v0v1->p[0][nparam+1],
		       vertex[0]->Vertex->p[0][nparam+1],
		       vertex[1]->Vertex->p[0][nparam+1]);
	value_assign(v0v1->p[1][nparam+1], v0v1->p[0][nparam+1]);

	/* Order vertices to ensure we integrate in the right
	 * direction, i.e., with the polytope "on the left".
	 */
	for (int i = 0; i < 2; ++i)
	    Inner_Product(v0v1->p[i], inner, nparam+1, &f_v0v1->p[i]);

	Inner_Product(dir->p, f_v0v1->p, 2, &tmp);
	if (value_neg_p(tmp)) {
	    Param_Vertices *PV = vertex[0];
	    vertex[0] = vertex[1];
	    vertex[1] = PV;
	    for (int i = 0; i < 2; ++i)
		Vector_Oppose(v0v1->p[i], v0v1->p[i], nparam+1);
	}
	value_oppose(tmp, normal->p[0]);
	if (value_neg_p(tmp)) {
	    value_oppose(tmp, tmp);
	    Vector_Oppose(v0v1->p[1], v0v1->p[1], nparam+1);
	}
	value_multiply(tmp, tmp, v0v1->p[1][nparam+1]);
	evalue *top = affine2evalue(v0v1->p[1], tmp, nparam);

	value_multiply(s->p[0], normal->p[1], vertex[0]->Vertex->p[0][nparam+1]);
	Vector_Copy(vertex[0]->Vertex->p[0], s->p+1, nparam+2);
	subs_1d[0] = affine2evalue(s->p, s->p[1+nparam+1], 1+nparam);
	value_multiply(s->p[0], normal->p[0], vertex[0]->Vertex->p[0][nparam+1]);
	value_oppose(s->p[0], s->p[0]);
	Vector_Copy(vertex[0]->Vertex->p[1], s->p+1, nparam+2);
	subs_1d[1] = affine2evalue(s->p, s->p[1+nparam+1], 1+nparam);

	evalue *d = evalue_dup(I);
	evalue_substitute(d, subs_1d);
	evalue_anti_derive(d, 0);

	evalue_free(subs_1d[0]);
	evalue_free(subs_1d[1]);

	subs_0d[1] = top;
	evalue_substitute(d, subs_0d+1);
	evalue_mul(d, dir->p[1]);
	evalue_free(subs_0d[1]);

	eadd(d, res);
	evalue_free(d);

	Param_Domain_Free(FD);
	NEXT(ix, bx);
    }
    Vector_Free(s);
    Vector_Free(f_v0v1);
    Matrix_Free(v0v1);
    Vector_Free(normal);
    Vector_Free(dir);
    value_clear(tmp);
    evalue_free(I);

    eadd(res, sum);
    evalue_free(res);
}

evalue *summate_over_1d_pdomain(evalue *e,
				Param_Polyhedron *PP, Param_Domain *PD,
				Value *inner,
				struct barvinok_options *options)
{
    Param_Vertices *V;
    int nbV = 0;
    Param_Vertices *vertex[2];
    unsigned nparam = PP->V->Vertex->NbColumns-2;
    evalue **subs_0d = new evalue *[1+nparam];
    evalue *a[2];
    evalue *t[2];
    unsigned degree = total_degree(e, 1);

    for (int i = 0; i < nparam; ++i)
	subs_0d[1+i] = evalue_var(i);

    FORALL_PVertex_in_ParamPolyhedron(V, PD, PP)
	vertex[nbV++] = V;
    END_FORALL_PVertex_in_ParamPolyhedron;
    assert(nbV == 2);

    Vector *fixed = Vector_Alloc(2);
    for (int i = 0; i < 2; ++i) {
	Inner_Product(vertex[i]->Vertex->p[0], inner, nparam+1, &fixed->p[i]);
	value_multiply(fixed->p[i],
		       fixed->p[i], vertex[1-i]->Vertex->p[0][nparam+1]);
    }
    if (value_lt(fixed->p[1], fixed->p[0])) {
	V = vertex[0];
	vertex[0] = vertex[1];
	vertex[1] = V;
    }
    Vector_Free(fixed);

    Vector *coef = Vector_Alloc(nparam+1);
    for (int i = 0; i < 2; ++i)
    	a[i] = affine2evalue(vertex[i]->Vertex->p[0],
			     vertex[i]->Vertex->p[0][nparam+1], nparam);
    if (value_one_p(vertex[0]->Vertex->p[0][nparam+1]))
	t[0] = evalue_zero();
    else {
	Vector_Oppose(vertex[0]->Vertex->p[0], coef->p, nparam+1);
	t[0] = fractional_part(coef->p, vertex[0]->Vertex->p[0][nparam+1],
			       nparam, NULL);
    }
    if (value_one_p(vertex[1]->Vertex->p[0][nparam+1]))
	t[1] = evalue_zero();
    else {
	Vector_Copy(vertex[1]->Vertex->p[0], coef->p, nparam+1);
	t[1] = fractional_part(coef->p, vertex[1]->Vertex->p[0][nparam+1],
			       nparam, NULL);
    }
    Vector_Free(coef);

    evalue *I = evalue_dup(e);
    evalue_anti_derive(I, 0);
    evalue *up = evalue_dup(I);
    subs_0d[0] = a[1];
    evalue_substitute(up, subs_0d);

    subs_0d[0] = a[0];
    evalue_substitute(I, subs_0d);
    evalue_negate(I);
    eadd(up, I);
    evalue_free(up);

    evalue *res = I;

    mu_1d mu0(degree, t[0]);
    mu_1d mu1(degree, t[1]);

    evalue *dx = evalue_dup(e);
    for (int n = 0; !EVALUE_IS_ZERO(*dx); ++n) {
	evalue *d;

	d = evalue_dup(dx);
	subs_0d[0] = a[0];
	evalue_substitute(d, subs_0d);
	emul(mu0.coefficient(n), d);
	eadd(d, res);
	evalue_free(d);

	d = evalue_dup(dx);
	subs_0d[0] = a[1];
	evalue_substitute(d, subs_0d);
	emul(mu1.coefficient(n), d);
	if (n % 2)
	    evalue_negate(d);
	eadd(d, res);
	evalue_free(d);

	evalue_derive(dx, 0);
    }
    evalue_free(dx);

    for (int i = 0; i < nparam; ++i)
	evalue_free(subs_0d[1+i]);
    delete [] subs_0d;

    for (int i = 0; i < 2; ++i) {
	evalue_free(a[i]);
	evalue_free(t[i]);
    }

    return res;
}

#define INT_BITS (sizeof(unsigned) * 8)

static unsigned *active_constraints(Param_Polyhedron *PP, Param_Domain *D)
{
    int len = (PP->Constraints->NbRows+INT_BITS-1)/INT_BITS;
    unsigned *facets = (unsigned *)calloc(len, sizeof(unsigned));
    Param_Vertices *V;

    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	if (!V->Facets)
	    Param_Vertex_Set_Facets(PP, V);
	for (int i = 0; i < len; ++i)
	    facets[i] |= V->Facets[i];
    END_FORALL_PVertex_in_ParamPolyhedron;

    return facets;
}

evalue *euler_summate(Polyhedron *P, evalue *e, unsigned nvar,
				   struct barvinok_options *options)
{
    Polyhedron *U;
    Param_Polyhedron *PP;
    evalue *res;
    int nd = -1;
    unsigned MaxRays;
    struct evalue_section *s;
    Param_Domain *PD;

    assert(nvar <= 2);

    MaxRays = options->MaxRays;
    POL_UNSET(options->MaxRays, POL_INTEGER);

    U = Universe_Polyhedron(P->Dimension - nvar);
    PP = Polyhedron2Param_Polyhedron(P, U, options);

    for (nd = 0, PD = PP->D; PD; ++nd, PD = PD->next);
    s = ALLOCN(struct evalue_section, nd);

    Polyhedron *TC = true_context(P, U, MaxRays);
    FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, PD, rVD)
	unsigned *facets;

	facets = active_constraints(PP, PD);

	Vector *inner = inner_point(rVD);
	s[i].D = rVD;

	if (nvar == 1) {
	    s[i].E = summate_over_1d_pdomain(e, PP, PD, inner->p+1, options);
	} else if (nvar == 2) {
	    summator_2d s2d(e, PP, inner->p+1, rVD->Dimension);

	    s[i].E = s2d.summate_over_pdomain(PP, facets, PD, options);

	}
	Vector_Free(inner);
	free(facets);
    END_FORALL_REDUCED_DOMAIN
    Polyhedron_Free(TC);
    Polyhedron_Free(U);
    Param_Polyhedron_Free(PP);

    options->MaxRays = MaxRays;

    res = evalue_from_section_array(s, nd);
    free(s);

    return res;
}
