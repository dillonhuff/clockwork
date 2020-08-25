#include <barvinok/evalue.h>
#include "section_array.h"

struct barvinok_options;

#if defined(__cplusplus)
extern "C" {
#endif

evalue *box_summate(Polyhedron *P, evalue *E, unsigned nvar, unsigned MaxRays);
evalue *barvinok_summate_unweighted(Polyhedron *P, Polyhedron *C,
				    struct barvinok_options *options);
evalue *barvinok_sum_over_polytope(Polyhedron *P, evalue *E, unsigned nvar,
				     struct evalue_section_array *sections,
				     struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
