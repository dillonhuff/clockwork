#if defined(__cplusplus)
extern "C" {
#endif

#include <barvinok/evalue.h>
#include "verify.h"

int check_poly_EP(Polyhedron *S, Polyhedron *CS, evalue *EP, int exist,
	       int nparam, int pos, Value *z,
	       const struct verify_options *options);

#if defined(__cplusplus)
}
#endif
