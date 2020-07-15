#include <barvinok/evalue.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

evalue* Param_Polyhedron_Volume(Polyhedron *P, Polyhedron* C,
				struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
