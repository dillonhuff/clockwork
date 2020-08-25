#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Matrix *Cone_Integer_Hull(Polyhedron *C, Matrix *candidates,
			  int n_candidates, struct barvinok_options *options);
Matrix *Polyhedron_Integer_Hull(Polyhedron *P,
				struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
