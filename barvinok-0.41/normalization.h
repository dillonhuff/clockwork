#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

Matrix *standard_constraints(Matrix *C, unsigned nparam, int *rows_p,
			     Matrix **T);
Polyhedron *skew_to_positive_orthant(Polyhedron *D, unsigned nvar,
					unsigned MaxRays);

#if defined(__cplusplus)
}
#endif
