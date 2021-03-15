#include <barvinok/barvinok.h>
#include <omega.h>

evalue *barvinok_enumerate_parker(Polyhedron *D,
					unsigned nvar, unsigned nparam,
					unsigned MaxRays);
