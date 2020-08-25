#include <NTL/mat_ZZ.h>
#include <barvinok/evalue.h>
#include "power.h"

using namespace NTL;

/* Represents the vertex and the rays of a vertex cone */
struct vertex_cone {
    unsigned dim;
    /* The coefficients of the rays, ordered according
     * to the first non-zero coefficient.
     */
    Vector **coeff;
    Matrix Rays;

    /* The powers of the coefficients of the rays */
    struct power ***coeff_power;

    /* The coordinates of the integer point in the fundamental
     * parallelepiped, in the basis formed by the rays of
     * the vertex cone.
     */
    evalue **E_vertex;
    unsigned max_power;
    /* Bernoulli polynomials corresponding to each E_vertex */
    evalue ***bernoulli_t;

    vertex_cone(unsigned dim);
    void init(const mat_ZZ &rays, Param_Vertices *V, unsigned max_power);
    void clear();

    const evalue *get_bernoulli(int n, int i);

    ~vertex_cone() {
	for (int i = 0; i < dim; ++i)
	    Vector_Free(coeff[i]);
	free(coeff);
	delete [] E_vertex;
	free(Rays.p);
	for (int i = 0; i < dim; ++i)
	    delete [] coeff_power[i];
	delete [] coeff_power;
	delete [] bernoulli_t;
    }
};
