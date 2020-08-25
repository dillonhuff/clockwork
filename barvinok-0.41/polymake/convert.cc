#include "convert.h"

namespace polymake { namespace polytope {

::Matrix *polymake_constraints2polylib(Matrix<Rational> &F)
{
    int r = F.rows();
    int c = F.cols();
    ::Matrix *M = Matrix_Alloc(r, c+1);
    for (int i = 0; i < r; ++i) {
	Integer LCM = denominator(F[i][0]);
	for (int j = 1; j < c; ++j)
	    LCM = lcm(LCM, denominator(F[i][j]));
	value_set_si(M->p[i][0], 1);
	F[i][0] *= LCM;
	value_assign(M->p[i][c], mpq_numref(F[i][0].get_rep()));
	for (int j = 1; j < c; ++j) {
	    F[i][j] *= LCM;
	    value_assign(M->p[i][j], mpq_numref(F[i][j].get_rep()));
	}
    }
    return M;
}

} }
