#include <assert.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/evalue.h>
#include "bernoulli.h"
#include "conversion.h"
#include "lattice_point.h"
#include "vertex_cone.h"

#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

/* Compares the position of the first non-zero element
 * in both vectors and the second non-zero element
 * if the position of the first non-zero element is the same.
 */
static int pos_cmp(const void *a, const void *b)
{
    int pa, pb;
    const Vector *va = *(const Vector **)a;
    const Vector *vb = *(const Vector **)b;

    pa = First_Non_Zero(va->p, va->Size);
    pb = First_Non_Zero(vb->p, vb->Size);

    if (pa == pb) {
	pa = First_Non_Zero(va->p+pa+1, va->Size-pa-1);
	pb = First_Non_Zero(vb->p+pa+1, vb->Size-pa-1);
    }

    return pa - pb;
}

vertex_cone::vertex_cone(unsigned dim) : dim(dim)
{
    E_vertex = new evalue *[dim];
    bernoulli_t = new evalue **[dim];

    assert(dim > 0);

    coeff = ALLOCN(Vector *, dim);
    for (int i = 0; i < dim; ++i)
	coeff[i] = Vector_Alloc(dim);

    Rays.NbRows = Rays.NbColumns = dim;
    Rays.p = ALLOCN(Value *, dim);

    coeff_power = new struct power **[dim];
    for (int i = 0; i < dim; ++i)
	coeff_power[i] = new struct power *[dim];
}

void vertex_cone::init(const mat_ZZ &rays, Param_Vertices *V,
			unsigned max_power)
{
    unsigned nparam = V->Vertex->NbColumns - 2;
    this->max_power = max_power;

    for (int i = 0; i < dim; ++i)
	zz2values(rays[i], coeff[i]->p);
    qsort(coeff, dim, sizeof(Vector *), pos_cmp);

    for (int i = 0; i < dim; ++i) {
	for (int j = 0; j < dim; ++j) {
	    if (value_notzero_p(coeff[i]->p[j]))
		coeff_power[i][j] = new struct power(coeff[i]->p[j], max_power);
	    else
		coeff_power[i][j] = NULL;
	}
    }

    for (int i = 0; i < dim; ++i)
	Rays.p[i] = coeff[i]->p;
    Matrix *T = Transpose(&Rays);
    Matrix *L = relative_coordinates(V, T);
    Matrix_Free(T);

    for (int i = 0; i < dim; ++i)
	E_vertex[i] = ceiling(L->p[i], V->Vertex->p[0][nparam+1], nparam, NULL);
    Matrix_Free(L);

    for (int j = 0; j < dim; ++j) {
	bernoulli_t[j] = new evalue *[max_power];
	for (int k = 0; k < max_power; ++k)
	    bernoulli_t[j][k] = NULL;
    }
}

/*
 * Returns b(n, E_vertex[i])
 */
const evalue *vertex_cone::get_bernoulli(int n, int i)
{
    assert(n > 0);
    if (!bernoulli_t[i][n-1]) {
	struct poly_list *bernoulli = bernoulli_compute(n);
	bernoulli_t[i][n-1] = evalue_polynomial(bernoulli->poly[n],
						E_vertex[i]);
    }
    return bernoulli_t[i][n-1];
}

void vertex_cone::clear()
{
    for (int i = 0; i < dim; ++i)
	if (E_vertex[i])
	    evalue_free(E_vertex[i]);

    for (int i = 0; i < dim; ++i) {
	for (int j = 0; j < max_power; ++j) {
	    if (bernoulli_t[i][j])
		evalue_free(bernoulli_t[i][j]);
	}
	delete [] bernoulli_t[i];
    }

    for (int i = 0; i < dim; ++i) {
	for (int j = 0; j < dim; ++j)
	    if (coeff_power[i][j])
		delete coeff_power[i][j];
    }
}
