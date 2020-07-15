#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

int remove_all_equalities(Polyhedron **P, Polyhedron **C, Matrix **CPP, Matrix **CVP,
			  unsigned nparam, unsigned MaxRays);

#if defined(__cplusplus)
}
#endif
