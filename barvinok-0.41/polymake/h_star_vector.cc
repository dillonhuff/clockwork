#include <assert.h>
#include <gmp.h>
#include <cstdlib>
#include <Rational.h>
#include <Poly.h>
#include <Matrix.h>
#include <Vector.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "convert.h"

#define MAXRAYS	    0

namespace polymake { namespace polytope {

/* 
 * The h^*-vector and the Ehrhart polynomial f(t) of a lattice polytope are
 * related through
 *
 *		f(t) = \sum_{i=0}^d h^*_i { t+d-i \choose d }
 *
 * I.e.,
 *		c = M h^*
 *
 * with c and h^* column vectors,
 *	    	f(t) = \sum_{i=0}^d c_i t^i,
 * and column i of M the coefficients of the polynomial { t+d-i \choose d }
 *
 * Since it is actually easier for us to compute the Ehrhart polynomial,
 * we compute the h^*-vector from this Ehrhart polynomial as 
 *
 *		h^* = M^{-1} c
 *
 * All coefficients are ordered from index 0 to d.
 */ 
void h_star_vector(Poly& p)
{
    Matrix<Rational> F = p.give("FACETS | INEQUALITIES");
    ::Matrix *M = polymake_constraints2polylib(F);
    Polyhedron *A = Constraints2Polyhedron(M, 0);
    Matrix_Free(M);
    for (unsigned i = 0; i < A->NbRays; ++i) {
	if (value_zero_p(A->Ray[i][0]) || value_zero_p(A->Ray[i][1+A->Dimension])) {
	    Polyhedron_Free(A);
	    throw std::runtime_error("polyhedron must be bounded");
	}
	if (value_notone_p(A->Ray[i][1+A->Dimension])) {
	    Polyhedron_Free(A);
	    throw std::runtime_error("polytope must have integer vertices");
	}
    }
    Polyhedron *C = Cone_over_Polyhedron(A);
    Polyhedron_Free(A);
    Polyhedron *U = Universe_Polyhedron(1);
    evalue *EP = barvinok_enumerate_ev(C, U, MAXRAYS);
    Polyhedron_Free(C);
    Polyhedron_Free(U);

    assert(value_zero_p(EP->d));
    assert(EP->x.p->type == partition);
    assert(EP->x.p->size == 2);
    evalue *poly = &EP->x.p->arr[1];
    if (value_notzero_p(poly->d)) {
	assert(value_one_p(poly->d));
	p.take("H_STAR_VECTOR") << Integer(poly->x.n);
    } else {
	assert(poly->x.p->type == polynomial);
	int d = poly->x.p->size - 1;
	::Matrix *M = Matrix_Alloc(d+2, d+2);
	::Vector *V = Vector_Alloc(d+2);
	::Vector *h = Vector_Alloc(d+2);

	Value one;
	value_init(one);
	value_set_si(one, 1);
	Value k;
	value_init(k);
	for (int i = 0; i <= d; ++i) {
	    Vector_Set(V->p, 0, d+2);
	    value_set_si(V->p[d], 1);
	    for (int j = d; j > 0; --j) {
		value_set_si(k, j-i);
		Vector_Combine(V->p + j-1, V->p + j, V->p + j-1, k, one, d-j+2); 
	    }
	    for (int j = 0; j <= d; ++j)
		value_assign(M->p[j][i], V->p[d-j]);
	}
	value_clear(one);
	value_clear(k);

	Factorial(d, &M->p[d+1][d+1]);
	::Matrix *inv = Matrix_Alloc(d+2, d+2);
	int ok = Matrix_Inverse(M, inv);
	Matrix_Free(M);
	assert(ok);
	for (int i = 0; i <= d; ++i) {
	    assert(value_one_p(poly->x.p->arr[i].d));
	    value_assign(V->p[i], poly->x.p->arr[i].x.n);
	}
	value_set_si(V->p[d+1], 1);
	Matrix_Vector_Product(inv, V->p, h->p);
	Vector_Free(V);
	Matrix_Free(inv);
	assert(value_one_p(h->p[d+1]));

	Vector<Integer> h_star(d+1);
	for (int i = 0; i <= d; ++i)
	    h_star[i] = Integer(h->p[i]);
	Vector_Free(h);
	p.take("H_STAR_VECTOR") << h_star;
    }
    evalue_free(EP);
}

} }

using namespace polymake;

int main(int argc, const char *argv[])
{
    if (argc != 2) {
	return 1;
    }
    try {
	Poly p(argv[1], ios::in | ios::out);
	polytope::h_star_vector(p);
    } catch (const std::exception& e) {
	cerr << e.what() << endl;
	return 1;
   }
    return 0;
}
