#include <assert.h>
#include <gmp.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/util.h>
#include "conversion.h"

#define SIZE(p) (((long *) (p))[1])
#define DATA(p) ((mp_limb_t *) (((long *) (p)) + 2))

/* Access the internal representation of a ZZ.
 * In newer versions of NTL (since 8.0.0), the internal representation
 * is wrapped inside a WrappedPtr, but it has an address-of operator
 * that returns the address of the actual internal representation.
 */
#define REP(z)	(*&(z).rep)

void value2zz(Value v, ZZ& z)
{
    int sa = v[0]._mp_size;
    int abs_sa = sa < 0 ? -sa : sa;

    _ntl_gsetlength(&z.rep, abs_sa);
    mp_limb_t * adata = DATA(REP(z));
    for (int i = 0; i < abs_sa; ++i)
	adata[i] = v[0]._mp_d[i];
    SIZE(REP(z)) = sa;
}

void zz2value(const ZZ& z, Value& v)
{
    if (!z.rep) {
	value_set_si(v, 0);
	return;
    }

    int sa = SIZE(REP(z));
    int abs_sa = sa < 0 ? -sa : sa;

    mp_limb_t * adata = DATA(REP(z));
    _mpz_realloc(v, abs_sa);
    for (int i = 0; i < abs_sa; ++i)
	v[0]._mp_d[i] = adata[i];
    v[0]._mp_size = sa;
}

void values2zz(Value *p, vec_ZZ& v, int len)
{
    v.SetLength(len);

    for (int i = 0; i < len; ++i) {
	value2zz(p[i], v[i]);
    }
}

/*
 */
void zz2values(const vec_ZZ& v, Value *p)
{
    for (int i = 0; i < v.length(); ++i)
	zz2value(v[i], p[i]);
}

/*
 * We just ignore the last column and row
 * If the final element is not equal to one
 * then the result will actually be a multiple of the input
 */
void matrix2zz(Matrix *M, mat_ZZ& m, unsigned nr, unsigned nc)
{
    m.SetDims(nr, nc);

    for (int i = 0; i < nr; ++i) {
//	assert(value_one_p(M->p[i][M->NbColumns - 1]));
	for (int j = 0; j < nc; ++j) {
	    value2zz(M->p[i][j], m[i][j]);
	}
    }
}

Matrix *zz2matrix(const mat_ZZ& mat)
{
    Matrix *M = Matrix_Alloc(mat.NumRows(), mat.NumCols());
    assert(M);

    for (int i = 0; i < mat.NumRows(); ++i)
	zz2values(mat[i], M->p[i]);
    return M;
}

Matrix *rays(Polyhedron *C)
{
    unsigned dim = C->NbRays - 1; /* don't count zero vertex */
    assert(C->NbRays - 1 == C->Dimension);

    Matrix *M = Matrix_Alloc(dim+1, dim+1);
    assert(M);

    int i, c;
    for (i = 0, c = 0; i <= dim && c < dim; ++i)
	if (value_zero_p(C->Ray[i][dim+1])) {
	    Vector_Copy(C->Ray[i] + 1, M->p[c], dim);
	    value_set_si(M->p[c++][dim], 0);
	}
    assert(c == dim);
    value_set_si(M->p[dim][dim], 1);

    return M;
}

Matrix *rays2(Polyhedron *C)
{
    unsigned dim = C->NbRays - 1; /* don't count zero vertex */
    assert(C->NbRays - 1 == C->Dimension);

    Matrix *M = Matrix_Alloc(dim, dim);
    assert(M);

    int i, c;
    for (i = 0, c = 0; i <= dim && c < dim; ++i)
	if (value_zero_p(C->Ray[i][dim+1]))
	    Vector_Copy(C->Ray[i] + 1, M->p[c++], dim);
    assert(c == dim);

    return M;
}

void rays(Polyhedron *C, mat_ZZ& rays)
{
    unsigned dim = C->NbRays - 1; /* don't count zero vertex */
    assert(C->NbRays - 1 == C->Dimension);
    rays.SetDims(dim, dim);

    int i, j;
    for (i = 0, j = 0; i < C->NbRays; ++i) {
	if (value_notzero_p(C->Ray[i][dim+1]))
	    continue;
	values2zz(C->Ray[i]+1, rays[j], dim);
	++j;
    }
}

void randomvector(Polyhedron *P, vec_ZZ& lambda, int nvar, int n_try)
{
    Value tmp;
    int max = 5 * 16;
    unsigned int dim = P->Dimension;
    value_init(tmp);

    for (int i = 0; i < P->NbRays; ++i) {
	for (int j = 1; j <= dim; ++j) {
	    value_absolute(tmp, P->Ray[i][j]);
	    int t = VALUE_TO_LONG(tmp) * 16;
	    if (t > max)
		max = t;
	}
    }
    for (int i = 0; i < P->NbConstraints; ++i) {
	for (int j = 1; j <= dim; ++j) {
	    value_absolute(tmp, P->Constraint[i][j]);
	    int t = VALUE_TO_LONG(tmp) * 16;
	    if (t > max)
		max = t;
	}
    }
    value_clear(tmp);

    max += max << n_try;

    lambda.SetLength(nvar);
    for (int k = 0; k < nvar; ++k) {
	int r = random_int(max*dim)+2;
	int v = (2*(r%2)-1) * (max/2*dim + (r >> 1));
	lambda[k] = v;
    }
}
