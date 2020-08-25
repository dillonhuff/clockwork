#ifndef BARVINOK_BASIS_REDUCTION_H
#define BARVINOK_BASIS_REDUCTION_H

#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Matrix *Polyhedron_Reduced_Basis(Polyhedron *P,
					struct barvinok_options *options);

Matrix *glpk_Polyhedron_Reduced_Basis(Polyhedron *P,
					struct barvinok_options *options);
Matrix *cdd_Polyhedron_Reduced_Basis(Polyhedron *P,
					struct barvinok_options *options);
Matrix *pip_Polyhedron_Reduced_Basis(Polyhedron *P,
					struct barvinok_options *options);
Matrix *pip_dual_Polyhedron_Reduced_Basis(Polyhedron *P,
					struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif

#endif
