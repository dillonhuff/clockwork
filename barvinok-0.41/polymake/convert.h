#include <gmp.h>
#include <cstdlib>
#include <Rational.h>
#include <Poly.h>
#include <Matrix.h>
#include <barvinok/polylib.h>

namespace polymake { namespace polytope {

::Matrix *polymake_constraints2polylib(Matrix<Rational> &F);

} }
