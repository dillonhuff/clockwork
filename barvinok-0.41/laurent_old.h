#include <barvinok/evalue.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

evalue *laurent_summate_old(Polyhedron *P, evalue *e, unsigned nvar,
				   struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
