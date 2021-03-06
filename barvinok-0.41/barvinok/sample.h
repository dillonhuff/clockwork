#ifndef BARVINOK_SAMPLE_H
#define BARVINOK_SAMPLE_H

#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Vector *Polyhedron_Sample(Polyhedron *P, struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif

#endif
