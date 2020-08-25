#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Vector *Polyhedron_Integer_Minimum(Polyhedron *P, Value *obj,
				    Value min, Value max,
				    Matrix *misses, int *n_misses,
				    struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
