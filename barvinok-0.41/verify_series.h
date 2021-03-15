#include <barvinok/evalue.h>
#include "skewed_genfun.h"
#include "verify.h"

int check_poly_gf(Polyhedron *S, Polyhedron *CS, skewed_gen_fun *gf,
		    int exist, int nparam, int pos, Value *z,
		    const struct verify_options *options);
