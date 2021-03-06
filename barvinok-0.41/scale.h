#include <barvinok/polylib.h>

struct barvinok_options;

#if defined(__cplusplus)
extern "C" {
#endif

Polyhedron *Polyhedron_Flate(Polyhedron *P, unsigned nparam, int inflate,
			     unsigned MaxRays);

evalue *scale_bound(Polyhedron *P, Polyhedron *C,
		    struct barvinok_options *options);
evalue *scale(Param_Polyhedron *PP, Polyhedron *P, Polyhedron *C,
	      struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
