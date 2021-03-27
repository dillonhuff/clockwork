#include <assert.h>
#include <NTL/mat_ZZ.h>
#include <NTL/vec_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/options.h>
#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include "config.h"
#include "conversion.h"
#include "lattice_point.h"
#include "param_util.h"

using std::cerr;
using std::endl;

#define ALLOC(type) (type*)malloc(sizeof(type))

/* returns an evalue that corresponds to
 *
 * c/(*den) x_param
 */
static evalue *term(int param, ZZ& c, Value *den = NULL)
{
    evalue *EP = new evalue();
    value_init(EP->d);
    value_set_si(EP->d,0);
    EP->x.p = new_enode(polynomial, 2, param + 1);
    evalue_set_si(&EP->x.p->arr[0], 0, 1);
    value_init(EP->x.p->arr[1].x.n);
    if (den == NULL)
	value_set_si(EP->x.p->arr[1].d, 1);
    else
	value_assign(EP->x.p->arr[1].d, *den);
    zz2value(c, EP->x.p->arr[1].x.n);
    return EP;
}

/* returns an evalue that corresponds to
 *
 *   sum_i p[i] * x_i
 */
evalue *multi_monom(vec_ZZ& p)
{
    evalue *X = ALLOC(evalue);
    value_init(X->d);
    value_init(X->x.n);
    unsigned nparam = p.length()-1;
    zz2value(p[nparam], X->x.n);
    value_set_si(X->d, 1);
    for (int i = 0; i < nparam; ++i) {
	if (p[i] == 0)
	    continue;
	evalue *T = term(i, p[i]);
	eadd(T, X); 
	free_evalue_refs(T); 
	delete T;
    }
    return X;
}

/*
 * Check whether mapping polyhedron P on the affine combination
 * num yields a range that has a fixed quotient on integer
 * division by d
 * If zero is true, then we are only interested in the quotient
 * for the cases where the remainder is zero.
 * Returns NULL if false and a newly allocated value if true.
 */
static Value *fixed_quotient(Polyhedron *P, vec_ZZ& num, Value d, bool zero)
{
    Value* ret = NULL;
    int len = num.length();
    Matrix *T = Matrix_Alloc(2, len);
    zz2values(num, T->p[0]);
    value_set_si(T->p[1][len-1], 1);
    Polyhedron *I = Polyhedron_Image(P, T, P->NbConstraints);
    Matrix_Free(T);

    int i;
    for (i = 0; i < I->NbRays; ++i)
	if (value_zero_p(I->Ray[i][2])) {
	    Polyhedron_Free(I);
	    return NULL;
	}

    Value min, max;
    value_init(min);
    value_init(max);
    int bounded = line_minmax(I, &min, &max);
    assert(bounded);

    if (zero)
	mpz_cdiv_q(min, min, d);
    else
	mpz_fdiv_q(min, min, d);
    mpz_fdiv_q(max, max, d);

    if (value_eq(min, max)) {
	ret = ALLOC(Value);
	value_init(*ret);
	value_assign(*ret, min);
    } 
    value_clear(min);
    value_clear(max);
    return ret;
}

/*
 * Normalize linear expression coef modulo m
 * Removes common factor and reduces coefficients
 * Returns index of first non-zero coefficient or len
 */
int normal_mod(Value *coef, int len, Value *m)
{
    Value gcd;
    value_init(gcd);

    Vector_Gcd(coef, len, &gcd);
    value_gcd(gcd, gcd, *m);
    Vector_AntiScale(coef, coef, gcd, len);

    value_division(*m, *m, gcd);
    value_clear(gcd);

    if (value_one_p(*m))
	return len;

    int j;
    for (j = 0; j < len; ++j)
	mpz_fdiv_r(coef[j], coef[j], *m);
    for (j = 0; j < len; ++j)
	if (value_notzero_p(coef[j]))
	    break;

    return j;
}

static bool mod_needed(Polyhedron *PD, vec_ZZ& num, Value d, evalue *E)
{
    Value *q = fixed_quotient(PD, num, d, false);

    if (!q)
	return true;

    value_oppose(*q, *q);
    evalue EV;
    value_init(EV.d);
    value_set_si(EV.d, 1);
    value_init(EV.x.n);
    value_multiply(EV.x.n, *q, d);
    eadd(&EV, E);
    free_evalue_refs(&EV); 
    value_clear(*q);
    free(q);
    return false;
}

/* Computes the fractional part of the affine expression specified
 * by coef (of length nvar+1) and the denominator denom.
 * If PD is not NULL, then it specifies additional constraints
 * on the variables that may be used to simplify the resulting
 * fractional part expression.
 *
 * Modifies coef argument !
 */
evalue *fractional_part(Value *coef, Value denom, int nvar, Polyhedron *PD)
{
    Value m;
    value_init(m);
    evalue *EP = evalue_zero();
    int sign = 1;

    value_assign(m, denom);
    int j = normal_mod(coef, nvar+1, &m);

    if (j == nvar+1) {
	value_clear(m);
	return EP;
    }

    vec_ZZ num;
    values2zz(coef, num, nvar+1);

    ZZ g;
    value2zz(m, g);

    evalue tmp;
    value_init(tmp.d);
    evalue_set_si(&tmp, 0, 1);

    int p = j;
    if (g % 2 == 0)
	while (j < nvar && (num[j] == g/2 || num[j] == 0))
	    ++j;
    if ((j < nvar && num[j] > g/2) || (j == nvar && num[j] >= (g+1)/2)) {
	for (int k = j; k < nvar; ++k)
	    if (num[k] != 0)
		num[k] = g - num[k];
	num[nvar] = g - 1 - num[nvar];
	value_assign(tmp.d, m);
	ZZ t = sign*(g-1);
	zz2value(t, tmp.x.n);
	eadd(&tmp, EP);
	sign = -sign;
    }

    if (p >= nvar) {
	ZZ t = num[nvar] * sign;
	zz2value(t, tmp.x.n);
	value_assign(tmp.d, m);
	eadd(&tmp, EP);
    } else {
	evalue *E = multi_monom(num);
	evalue EV;
	value_init(EV.d);

	if (PD && !mod_needed(PD, num, m, E)) {
	    value_init(EV.x.n);
	    value_set_si(EV.x.n, sign);
	    value_assign(EV.d, m);
	    emul(&EV, E);
	    eadd(E, EP);
	} else {
	    value_init(EV.x.n);
	    value_set_si(EV.x.n, 1);
	    value_assign(EV.d, m);
	    emul(&EV, E);
	    value_clear(EV.x.n);
	    value_set_si(EV.d, 0);
	    EV.x.p = new_enode(fractional, 3, -1);
	    evalue_copy(&EV.x.p->arr[0], E);
	    evalue_set_si(&EV.x.p->arr[1], 0, 1);
	    value_init(EV.x.p->arr[2].x.n);
	    value_set_si(EV.x.p->arr[2].x.n, sign);
	    value_set_si(EV.x.p->arr[2].d, 1);

	    eadd(&EV, EP);
	}

	free_evalue_refs(&EV); 
	evalue_free(E); 
    }

    free_evalue_refs(&tmp); 

    value_clear(m);

    return EP;
}

/* Computes the ceil of the affine expression specified
 * by coef (of length nvar+1) and the denominator denom.
 * If PD is not NULL, then it specifies additional constraints
 * on the variables that may be used to simplify the resulting
 * ceil expression.
 *
 * Modifies coef argument !
 */
evalue *ceiling(Value *coef, Value denom, int nvar, Polyhedron *PD)
{
    evalue *EP, *f;
    EP = affine2evalue(coef, denom, nvar);
    Vector_Oppose(coef, coef, nvar+1);
    f = fractional_part(coef, denom, nvar, PD);
    eadd(f, EP);
    evalue_free(f);
    return EP;
}

static evalue *ceil(Value *coef, int len, Value d,
		    barvinok_options *options)
{
    evalue *c;

    Vector_Oppose(coef, coef, len);
    c = fractional_part(coef, d, len-1, NULL);
    if (options->lookup_table)
	evalue_mod2table(c, len-1);
    return c;
}

void lattice_point_fixed(Value *vertex, Value *vertex_res,
			 Matrix *Rays, Matrix *Rays_res,
			 Value *point)
{
    unsigned dim = Rays->NbRows;
    if (value_one_p(vertex[dim]))
	Vector_Copy(vertex_res, point, Rays_res->NbColumns);
    else {
	Matrix *R2 = Matrix_Copy(Rays);
	Matrix *inv = Matrix_Alloc(Rays->NbRows, Rays->NbColumns);
	int ok = Matrix_Inverse(R2, inv);
	assert(ok);
	Matrix_Free(R2);
	Vector *lambda = Vector_Alloc(dim);
	Vector_Matrix_Product(vertex, inv, lambda->p);
	Matrix_Free(inv);
	for (int j = 0; j < dim; ++j)
	    mpz_cdiv_q(lambda->p[j], lambda->p[j], vertex[dim]);
	Vector_Matrix_Product(lambda->p, Rays_res, point);
	Vector_Free(lambda);
    }
}

static Matrix *Matrix_AddRowColumn(Matrix *M)
{
    Matrix *M2 = Matrix_Alloc(M->NbRows+1, M->NbColumns+1);
    for (int i = 0; i < M->NbRows; ++i)
	Vector_Copy(M->p[i], M2->p[i], M->NbColumns);
    value_set_si(M2->p[M->NbRows][M->NbColumns], 1);
    return M2;
}

#define FORALL_COSETS(det,D,i,k)					\
    do {								\
	Vector *k = Vector_Alloc(D->NbRows+1);				\
	value_set_si(k->p[D->NbRows], 1);				\
	for (unsigned long i = 0; i < det; ++i) {			\
	    if (i)							\
		for (int j = D->NbRows-1; j >= 0; --j) {		\
		    value_increment(k->p[j], k->p[j]);			\
		    if (value_eq(k->p[j], D->p[j][j]))			\
			value_set_si(k->p[j], 0);		    	\
		    else						\
			break;						\
		}							\
	    {
#define END_FORALL_COSETS						\
	    }						    		\
	}								\
	Vector_Free(k);						    	\
    } while(0);

/* Compute the lattice points in the vertex cone at "values" with rays "rays".
 * The lattice points are returned in "vertex".
 *
 * Rays has the generators as rows and so does W.
 * We first compute { m-v, u_i^* } with m = k W, where k runs through
 * the cosets.
 * We compute
 * [k 1] [ d1*W  0 ] [  U'  0 ] = [k 1] T2
 *       [ -v   d1 ] [  0  d2 ]
 * where d1 and d2 are the denominators of v and U^{-1}=U'/d2.
 * Then  lambda = { k } (componentwise)
 * We compute x - floor(x) = {x} = { a/b } as fdiv_r(a,b)/b
 * For open rays/facets, we need values in (0,1] rather than [0,1),
 * so we compute {{x}} = x - ceil(x-1) = a/b - ceil((a-b)/b)
 *		       = (a - b cdiv_q(a-b,b) - b + b)/b
 *		       = (cdiv_r(a,b)+b)/b
 * Finally, we compute v + lambda * U
 * The denominator of lambda can be d1*d2, that of lambda2 = lambda*U
 * can be at most d1, since it is integer if v = 0.
 * The denominator of v + lambda2 is 1.
 *
 * The _res variants of the input variables may have been multiplied with
 * a (list of) nonorthogonal vector(s) and may therefore have fewer columns
 * than their original counterparts.
 */
void lattice_points_fixed(Value *vertex, Value *vertex_res,
			  Matrix *Rays, Matrix *Rays_res, Matrix *points,
			  unsigned long det)
{
    unsigned dim = Rays->NbRows;
    if (det == 1) {
	lattice_point_fixed(vertex, vertex_res, Rays, Rays_res,
			    points->p[0]);
	return;
    }
    Matrix *U, *W, *D;
    Smith(Rays, &U, &W, &D);
    Matrix_Free(U);

    /* Sanity check */
    unsigned long det2 = 1;
    for (int i = 0 ; i < D->NbRows; ++i)
	det2 *= mpz_get_ui(D->p[i][i]);
    assert(det == det2);

    Matrix *T = Matrix_Alloc(W->NbRows+1, W->NbColumns+1);
    for (int i = 0; i < W->NbRows; ++i)
	Vector_Scale(W->p[i], T->p[i], vertex[dim], W->NbColumns);
    Matrix_Free(W);
    Vector_Oppose(vertex, T->p[dim], dim);
    value_assign(T->p[dim][dim], vertex[dim]);

    Matrix *R2 = Matrix_AddRowColumn(Rays);
    Matrix *inv = Matrix_Alloc(R2->NbRows, R2->NbColumns);
    int ok = Matrix_Inverse(R2, inv);
    assert(ok);
    Matrix_Free(R2);

    Matrix *T2 = Matrix_Alloc(dim+1, dim+1);
    Matrix_Product(T, inv, T2);
    Matrix_Free(T);

    Vector *lambda = Vector_Alloc(dim+1);
    Vector *lambda2 = Vector_Alloc(Rays_res->NbColumns);
    FORALL_COSETS(det, D, i, k)
	Vector_Matrix_Product(k->p, T2, lambda->p);
	for (int j = 0; j < dim; ++j)
	    mpz_fdiv_r(lambda->p[j], lambda->p[j], lambda->p[dim]);
	Vector_Matrix_Product(lambda->p, Rays_res, lambda2->p);
	for (int j = 0; j < lambda2->Size; ++j)
	    assert(mpz_divisible_p(lambda2->p[j], inv->p[dim][dim]));
	Vector_AntiScale(lambda2->p, lambda2->p, inv->p[dim][dim], lambda2->Size);
	Vector_Add(lambda2->p, vertex_res, lambda2->p, lambda2->Size);
	for (int j = 0; j < lambda2->Size; ++j)
	    assert(mpz_divisible_p(lambda2->p[j], vertex[dim]));
	Vector_AntiScale(lambda2->p, points->p[i], vertex[dim], lambda2->Size);
    END_FORALL_COSETS
    Vector_Free(lambda);
    Vector_Free(lambda2);
    Matrix_Free(D);
    Matrix_Free(inv);

    Matrix_Free(T2);
}

/* Returns the power of (t+1) in the term of a rational generating function,
 * i.e., the scalar product of the actual lattice point and lambda.
 * The lattice point is the unique lattice point in the fundamental parallelepiped
 * of the unimodular cone i shifted to the parametric vertex W/lcm.
 *
 * The rows of W refer to the coordinates of the vertex
 * The first nparam columns are the coefficients of the parameters
 * and the final column is the constant term.
 * lcm is the common denominator of all coefficients.
 */
static evalue **lattice_point_fractional(const mat_ZZ& rays, vec_ZZ& lambda,
					 Matrix *V,
					 unsigned long det)
{
    unsigned nparam = V->NbColumns-2;
    evalue **E = new evalue *[det];

    Matrix* Rays = zz2matrix(rays);
    Matrix *T = Transpose(Rays);
    Matrix *T2 = Matrix_Copy(T);
    Matrix *inv = Matrix_Alloc(T2->NbRows, T2->NbColumns);
    int ok = Matrix_Inverse(T2, inv);
    assert(ok);
    Matrix_Free(T2);
    mat_ZZ vertex;
    matrix2zz(V, vertex, V->NbRows, V->NbColumns-1);

    vec_ZZ num;
    num = lambda * vertex;

    evalue *EP = multi_monom(num);

    evalue_div(EP, V->p[0][nparam+1]);

    Matrix *L = Matrix_Alloc(inv->NbRows, V->NbColumns);
    Matrix_Product(inv, V, L);

    mat_ZZ RT;
    matrix2zz(T, RT, T->NbRows, T->NbColumns);
    Matrix_Free(T);

    vec_ZZ p = lambda * RT;

    Value tmp;
    value_init(tmp);

    if (det == 1) {
	for (int i = 0; i < L->NbRows; ++i) {
	    evalue *f;
	    Vector_Oppose(L->p[i], L->p[i], nparam+1);
	    f = fractional_part(L->p[i], V->p[i][nparam+1], nparam, NULL);
	    zz2value(p[i], tmp);
	    evalue_mul(f, tmp);
	    eadd(f, EP);
	    evalue_free(f);
	}
	E[0] = EP;
    } else {
	for (int i = 0; i < L->NbRows; ++i)
	    value_assign(L->p[i][nparam+1], V->p[i][nparam+1]);

	Value denom;
	value_init(denom);
	mpz_set_ui(denom, det);
	value_multiply(denom, L->p[0][nparam+1], denom);

	Matrix *U, *W, *D;
	Smith(Rays, &U, &W, &D);
	Matrix_Free(U);

	/* Sanity check */
	unsigned long det2 = 1;
	for (int i = 0 ; i < D->NbRows; ++i)
	    det2 *= mpz_get_ui(D->p[i][i]);
	assert(det == det2);

	Matrix_Transposition(inv);
	Matrix *T2 = Matrix_Alloc(W->NbRows, inv->NbColumns);
	Matrix_Product(W, inv, T2);
	Matrix_Free(W);

	unsigned dim = D->NbRows;
	Vector *lambda = Vector_Alloc(dim);

	Vector *row = Vector_Alloc(nparam+1);
	FORALL_COSETS(det, D, i, k)
	    Vector_Matrix_Product(k->p, T2, lambda->p);
	    E[i] = ALLOC(evalue);
	    value_init(E[i]->d);
	    evalue_copy(E[i], EP);
	    for (int j = 0; j < L->NbRows; ++j) {
		evalue *f;
		Vector_Oppose(L->p[j], row->p, nparam+1);
		value_addmul(row->p[nparam], L->p[j][nparam+1], lambda->p[j]);
		f = fractional_part(row->p, denom, nparam, NULL);
		zz2value(p[j], tmp);
		evalue_mul(f, tmp);
		eadd(f, E[i]);
		evalue_free(f);
	    }
	END_FORALL_COSETS
	Vector_Free(row);

	Vector_Free(lambda);
	Matrix_Free(T2);
	Matrix_Free(D);

	value_clear(denom);
	evalue_free(EP);
    }
    value_clear(tmp);

    Matrix_Free(Rays);
    Matrix_Free(L);
    Matrix_Free(inv);

    return E;
}

static evalue **lattice_point(const mat_ZZ& rays, vec_ZZ& lambda,
			      Param_Vertices *V,
			      unsigned long det,
			      barvinok_options *options)
{
    evalue **lp = lattice_point_fractional(rays, lambda, V->Vertex, det);
    if (options->lookup_table) {
	for (int i = 0; i < det; ++i)
	    evalue_mod2table(lp[i], V->Vertex->NbColumns-2);
    }
    return lp;
}

Matrix *relative_coordinates(Param_Vertices *V, Matrix *basis)
{
    Matrix *T = Matrix_Copy(basis);
    Matrix *inv = Matrix_Alloc(T->NbRows, T->NbColumns);
    int ok = Matrix_Inverse(T, inv);
    assert(ok);
    Matrix_Free(T);

    Param_Vertex_Common_Denominator(V);
    /* temporarily ignore (common) denominator */
    V->Vertex->NbColumns--;
    Matrix *L = Matrix_Alloc(inv->NbRows, V->Vertex->NbColumns);
    Matrix_Product(inv, V->Vertex, L);
    V->Vertex->NbColumns++;
    Matrix_Free(inv);

    return L;
}

/* returns the unique lattice point in the fundamental parallelepiped
 * of the unimodular cone C shifted to the parametric vertex V.
 *
 * The return values num and E_vertex are such that
 * coordinate i of this lattice point is equal to
 *
 *	    num[i] + E_vertex[i]
 */
void lattice_point(Param_Vertices *V, const mat_ZZ& rays, vec_ZZ& num, 
		   evalue **E_vertex, barvinok_options *options)
{
    unsigned nparam = V->Vertex->NbColumns - 2;
    unsigned dim = rays.NumCols();

    /* It doesn't really make sense to call lattice_point when dim == 0,
     * but apparently it happens from indicator_constructor in lexmin.
     */
    if (!dim)
	return;

    vec_ZZ vertex;
    vertex.SetLength(nparam+1);

    assert(V->Vertex->NbRows > 0);
    Param_Vertex_Common_Denominator(V);

    if (value_notone_p(V->Vertex->p[0][nparam+1])) {
	Matrix* Rays = zz2matrix(rays);
	Matrix *T = Transpose(Rays);
	Matrix_Free(Rays);
	Matrix *L = relative_coordinates(V, T);

	evalue f;
	value_init(f.d);
	value_init(f.x.n);

	evalue **remainders = new evalue *[dim];
	for (int i = 0; i < dim; ++i)
	    remainders[i] = ceil(L->p[i], nparam+1, V->Vertex->p[0][nparam+1],
				 options);
	Matrix_Free(L);


	for (int i = 0; i < V->Vertex->NbRows; ++i) {
	    values2zz(V->Vertex->p[i], vertex, nparam+1);
	    E_vertex[i] = multi_monom(vertex);
	    num[i] = 0;

	    value_set_si(f.x.n, 1);
	    value_assign(f.d, V->Vertex->p[0][nparam+1]);

	    emul(&f, E_vertex[i]);

	    for (int j = 0; j < dim; ++j) {
		if (value_zero_p(T->p[i][j]))
		    continue;
		evalue cp;
		value_init(cp.d);
		evalue_copy(&cp, remainders[j]);
		if (value_notone_p(T->p[i][j])) {
		    value_set_si(f.d, 1);
		    value_assign(f.x.n, T->p[i][j]);
		    emul(&f, &cp);
		}
		eadd(&cp, E_vertex[i]);
		free_evalue_refs(&cp);
	    }
	}
	for (int i = 0; i < dim; ++i)
	    evalue_free(remainders[i]); 
	delete [] remainders;

	free_evalue_refs(&f); 

	Matrix_Free(T);
	return;
    }

    for (int i = 0; i < V->Vertex->NbRows; ++i) {
	/* fixed value */
	if (First_Non_Zero(V->Vertex->p[i], nparam) == -1) {
	    E_vertex[i] = 0;
	    value2zz(V->Vertex->p[i][nparam], num[i]);
	} else {
	    values2zz(V->Vertex->p[i], vertex, nparam+1);
	    E_vertex[i] = multi_monom(vertex);
	    num[i] = 0;
	}
    }
}

static int lattice_point_fixed(Param_Vertices* V, const mat_ZZ& rays,
    vec_ZZ& lambda, term_info* term, unsigned long det)
{
    unsigned nparam = V->Vertex->NbColumns - 2;
    unsigned dim = rays.NumCols();

    for (int i = 0; i < dim; ++i)
	if (First_Non_Zero(V->Vertex->p[i], nparam) != -1)
	    return 0;

    Vector *fixed = Vector_Alloc(dim+1);
    for (int i = 0; i < dim; ++i)
	value_assign(fixed->p[i], V->Vertex->p[i][nparam]);
    value_assign(fixed->p[dim], V->Vertex->p[0][nparam+1]);

    mat_ZZ vertex;
    Matrix *points = Matrix_Alloc(det, dim);
    Matrix* Rays = zz2matrix(rays);
    lattice_points_fixed(fixed->p, fixed->p, Rays, Rays, points, det);
    Matrix_Free(Rays);
    matrix2zz(points, vertex, points->NbRows, points->NbColumns);
    Matrix_Free(points);
    term->E = NULL;
    term->constant = vertex * lambda;
    Vector_Free(fixed);

    return 1;
}

/* Returns the power of (t+1) in the term of a rational generating function,
 * i.e., the scalar product of the actual lattice point and lambda.
 * The lattice point is the unique lattice point in the fundamental parallelepiped
 * of the unimodular cone i shifted to the parametric vertex V.
 *
 * The result is returned in term.
 */
void lattice_point(Param_Vertices* V, const mat_ZZ& rays, vec_ZZ& lambda,
    term_info* term, unsigned long det,
    barvinok_options *options)
{
    unsigned nparam = V->Vertex->NbColumns - 2;
    mat_ZZ vertex;
    vertex.SetDims(V->Vertex->NbRows, nparam+1);

    Param_Vertex_Common_Denominator(V);

    if (lattice_point_fixed(V, rays, lambda, term, det))
	return;

    if (det != 1 || value_notone_p(V->Vertex->p[0][nparam+1])) {
	term->E = lattice_point(rays, lambda, V, det, options);
	return;
    }
    for (int i = 0; i < V->Vertex->NbRows; ++i) {
	assert(value_one_p(V->Vertex->p[i][nparam+1]));  // for now
	values2zz(V->Vertex->p[i], vertex[i], nparam+1);
    }

    vec_ZZ num;
    num = lambda * vertex;

    int nn = 0;
    for (int j = 0; j < nparam; ++j)
	if (num[j] != 0)
	    ++nn;
    if (nn >= 1) {
	term->E = new evalue *[1];
	term->E[0] = multi_monom(num);
    } else {
	term->E = NULL;
	term->constant.SetLength(1);
	term->constant[0] = num[nparam];
    }
}
