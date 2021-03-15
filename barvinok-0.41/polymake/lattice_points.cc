#include <gmp.h>
#include <cstdlib>
#include <Rational.h>
#include <Poly.h>
#include <Matrix.h>
#include <barvinok/barvinok.h>
#include "convert.h"

namespace polymake { namespace polytope {

void lattice_points(Poly& p)
{
    Value cb;
    Matrix<Rational> F = p.give("FACETS | INEQUALITIES");
    ::Matrix *M = polymake_constraints2polylib(F);
    Polyhedron *A = Constraints2Polyhedron(M, 0);
    Matrix_Free(M);
    value_init(cb);
    barvinok_count(A, &cb, 0);
    Polyhedron_Free(A);
    Integer count(cb);
    value_clear(cb);
    p.take("LATTICE_POINTS") << count;
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
	polytope::lattice_points(p);
    } catch (const std::exception& e) {
	cerr << e.what() << endl;
	return 1;
   }
    return 0;
}
