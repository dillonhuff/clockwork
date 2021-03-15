#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Matrix *Cone_Hilbert_Basis(Polyhedron *C, unsigned MaxRays);
Matrix *Cone_Hilbert_Integer_Hull(Polyhedron *C,
				  struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
