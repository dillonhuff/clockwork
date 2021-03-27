#include <assert.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/util.h>
#include "counter.h"
#include "lattice_point.h"

/* Computes the integer points in the fundamental parallelepiped and
 * passes them along (in num) to the counter specific (i.e., specialization
 * specific) add_lattice_points.
 */
void counter_base::handle(const mat_ZZ& rays, Value *V, const QQ& c,
			  unsigned long det, barvinok_options *options)
{
    Matrix* Rays = zz2matrix(rays);

    assert(c.d == 1);
    assert(c.n == 1 || c.n == -1);
    int sign = to_int(c.n);

    Matrix_Vector_Product(Rays, lambda->p, den->p_Init);
    for (int k = 0; k < dim; ++k)
	if (value_zero_p(den->p_Init[k])) {
	    Matrix_Free(Rays);
	    throw Orthogonal;
	}
    Inner_Product(lambda->p, V, dim, &tmp);
    lattice_points_fixed(V, &tmp, Rays, den, num, det);
    num->NbRows = det;
    Matrix_Free(Rays);

    if (dim % 2)
	sign = -sign;

    add_lattice_points(sign);
}

static void add_falling_powers(dpoly& n, Value degree)
{
    value_increment(n.coeff->p[0], n.coeff->p[0]);
    if (n.coeff->Size == 1)
	return;

    int min = n.coeff->Size-1;
    if (value_posz_p(degree) && value_cmp_si(degree, min) < 0)
	min = VALUE_TO_INT(degree);

    Value tmp;
    value_init(tmp);
    value_assign(tmp, degree);
    value_addto(n.coeff->p[1], n.coeff->p[1], tmp);
    for (int i = 2; i <= min; ++i) {
	value_decrement(degree, degree);
	value_multiply(tmp, tmp, degree);
	mpz_divexact_ui(tmp, tmp, i);
	value_addto(n.coeff->p[i], n.coeff->p[i], tmp);
    }
    value_clear(tmp);
}

void counter::add_lattice_points(int sign)
{
    dpoly d(dim);
    for (int k = 0; k < num->NbRows; ++k)
	add_falling_powers(d, num->p_Init[k]);
    dpoly n(dim, den->p_Init[0], 1);
    for (int k = 1; k < dim; ++k) {
	dpoly fact(dim, den->p_Init[k], 1);
	n *= fact;
    }
    d.div(n, count, sign);
}




void tcounter::setup_todd(unsigned dim)
{
    value_set_si(todd.coeff->p[0], 1);

    dpoly d(dim);
    value_set_si(d.coeff->p[dim], 1);
    for (int i = dim-1; i >= 0; --i)
	mpz_mul_ui(d.coeff->p[i], d.coeff->p[i+1], i+2);

    todd_denom = todd.div(d);
    /* shift denominators up -> divide by (dim+1)! */
    for (int i = todd.coeff->Size-1; i >= 1; --i)
	value_assign(todd_denom->p[i], todd_denom->p[i-1]);
    value_set_si(todd_denom->p[0], 1);
}

void tcounter::adapt_todd(dpoly& t, const Value c)
{
    if (t.coeff->Size <= 1)
	return;
    value_assign(tmp, c);
    value_multiply(t.coeff->p[1], t.coeff->p[1], tmp);
    for (int i = 2; i < t.coeff->Size; ++i) {
	value_multiply(tmp, tmp, c);
	value_multiply(t.coeff->p[i], t.coeff->p[i], tmp);
    }
}

void tcounter::add_powers(dpoly& n, const Value c)
{
    value_increment(n.coeff->p[0], n.coeff->p[0]);
    if (n.coeff->Size == 1)
	return;
    value_assign(tmp, c);
    value_addto(n.coeff->p[1], n.coeff->p[1], tmp);
    for (int i = 2; i < n.coeff->Size; ++i) {
	value_multiply(tmp, tmp, c);
	value_addto(n.coeff->p[i], n.coeff->p[i], tmp);
    }
}

void tcounter::add_lattice_points(int sign)
{
    dpoly t(todd);
    value_assign(denom, den->p_Init[0]);
    adapt_todd(t, den->p_Init[0]);
    for (int k = 1; k < dim; ++k) {
	dpoly fact(todd);
	value_multiply(denom, denom, den->p_Init[k]);
	adapt_todd(fact, den->p_Init[k]);
	t *= fact;
    }

    dpoly n(dim);
    for (int k = 0; k < num->NbRows; ++k)
	add_powers(n, num->p_Init[k]);

    for (int i = 0; i < n.coeff->Size; ++i)
	value_multiply(n.coeff->p[i], n.coeff->p[i], todd_denom->p[i]);
    value_multiply(denom, denom, todd_denom->p[todd_denom->Size-1]);

    value_set_si(tmp, 1);
    for (int i = 2; i < n.coeff->Size; ++i) {
	mpz_mul_ui(tmp, tmp, i);
	mpz_divexact(n.coeff->p[i], n.coeff->p[i], tmp);
    }

    value_multiply(tmp, t.coeff->p[0], n.coeff->p[n.coeff->Size-1]);
    for (int i = 1; i < n.coeff->Size; ++i)
	value_addmul(tmp, t.coeff->p[i], n.coeff->p[n.coeff->Size-1-i]);

    value_assign(mpq_numref(tcount), tmp);
    value_assign(mpq_denref(tcount), denom);
    mpq_canonicalize(tcount);
    if (sign == -1)
	mpq_sub(count, count, tcount);
    else
	mpq_add(count, count, tcount);
}


/*
 * Set lambda to a random vector that has a positive inner product
 * with all the rays of the context { x | A x + b >= 0 }.
 *
 * To do so, we take d rows A' from the constraint matrix A.
 * For every ray, we have
 *		A' r >= 0
 * We compute a random positive row vector x' and set x = x' A'.
 * We then have, for each ray r,
 *		x r = x' A' r >= 0
 * Although we can take any d rows from A, we choose linearly
 * independent rows from A to avoid the elements of the transformed
 * random vector to have simple linear relations, which would
 * increase the risk of the vector being orthogonal to one of
 * powers in the denominator of one of the terms in the generating
 * function.
 */
void infinite_counter::init(Polyhedron *context, int n_try)
{
    Matrix *M, *H, *Q, *U;
    mat_ZZ A;

    randomvector(context, lambda, context->Dimension, n_try);

    M = Matrix_Alloc(context->NbConstraints, context->Dimension);
    for (int i = 0; i < context->NbConstraints; ++i)
	Vector_Copy(context->Constraint[i]+1, M->p[i], context->Dimension);
    left_hermite(M, &H, &Q, &U);
    Matrix_Free(Q);
    Matrix_Free(U);

    for (int col = 0, row = 0; col < H->NbColumns; ++col, ++row) {
	for (; row < H->NbRows; ++row)
	    if (value_notzero_p(H->p[row][col]))
		break;
	assert(row < H->NbRows);
	Vector_Copy(M->p[row], M->p[col], M->NbColumns);
    }
    matrix2zz(M, A, context->Dimension, context->Dimension);
    Matrix_Free(H);
    Matrix_Free(M);

    for (int i = 0; i < lambda.length(); ++i)
	lambda[i] = abs(lambda[i]);
    lambda = lambda * A;
}

static ZZ LCM(const ZZ& a, const ZZ& b)
{
    return a * b / GCD(a, b);
}

/* Normalize the powers in the denominator to be positive
 * and return -1 is the sign has to be changed.
 */
static int normalized_sign(vec_ZZ& num, vec_ZZ& den)
{
    int change = 0;

    for (int j = 0; j < den.length(); ++j) {
	if (den[j] > 0)
	    change ^= 1;
	else {
	    den[j] = abs(den[j]);
	    for (int k = 0; k < num.length(); ++k)
		num[k] += den[j];
	}
    }
    return change ? -1 : 1;
}

void infinite_counter::reduce(const vec_QQ& c, const mat_ZZ& num,
			      const mat_ZZ& den_f)
{
    mpq_t factor;
    mpq_init(factor);
    unsigned len = den_f.NumRows();

    ZZ lcm = c[0].d;
    for (int i = 1; i < c.length(); ++i)
	lcm = LCM(lcm, c[i].d);

    vec_ZZ coeff;
    coeff.SetLength(c.length());
    for (int i = 0; i < c.length(); ++i)
	coeff[i] = c[i].n * lcm/c[i].d;

    if (len == 0) {
	for (int i = 0; i < c.length(); ++i) {
	    zz2value(coeff[i], tz);
	    value_addto(mpq_numref(factor), mpq_numref(factor), tz);
	}
	zz2value(lcm, tz);
	value_assign(mpq_denref(factor), tz);
	mpq_add(count[0], count[0], factor);
	mpq_clear(factor);
	return;
    }

    vec_ZZ num_s = num * lambda;
    vec_ZZ den_s = den_f * lambda;
    for (int i = 0; i < den_s.length(); ++i)
	assert(den_s[i] != 0);
    int sign = normalized_sign(num_s, den_s);
    if (sign < 0)
	coeff = -coeff;

    dpoly n(len);
    zz2value(num_s[0], tz);
    add_falling_powers(n, tz);
    zz2value(coeff[0], tz);
    n *= tz;
    for (int i = 1; i < c.length(); ++i) {
	dpoly t(len);
	zz2value(num_s[i], tz);
	add_falling_powers(t, tz);
	zz2value(coeff[i], tz);
	t *= tz;
	n += t;
    }
    zz2value(den_s[0], tz);
    dpoly d(len, tz, 1);
    for (int i = 1; i < len; ++i) {
	zz2value(den_s[i], tz);
	dpoly fact(len, tz, 1);
	d *= fact;
    }
    value_set_si(mpq_numref(factor), 1);
    zz2value(lcm, tz);
    value_assign(mpq_denref(factor), tz);
    n.div(d, count, factor);

    mpq_clear(factor);
}
