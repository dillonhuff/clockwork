#include <barvinok/options.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

Param_Polyhedron *ISL_P2PP(Polyhedron *P, Polyhedron *C,
			  struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
