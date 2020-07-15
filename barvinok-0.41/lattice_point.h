#ifndef LATTICE_POINT_H
#define LATTICE_POINT_H

#include <barvinok/evalue.h>

#if defined(__cplusplus)
extern "C" {
#endif

evalue *fractional_part(Value *coef, Value denom, int nvar, Polyhedron *PD);
evalue *ceiling(Value *coef, Value denom, int nvar, Polyhedron *PD);
Matrix *relative_coordinates(Param_Vertices *V, Matrix *basis);

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)

#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>

using namespace NTL;

struct barvinok_options;

evalue *multi_monom(vec_ZZ& p);
int normal_mod(Value *coef, int len, Value *m);
void lattice_point_fixed(Value *vertex, Value *vertex_res,
			 Matrix *Rays, Matrix *Rays_res,
			 Value *point);
void lattice_points_fixed(Value *vertex, Value *vertex_res,
			  Matrix *Rays, Matrix *Rays_res, Matrix *points,
			  unsigned long det);
void lattice_point(Param_Vertices *V, const mat_ZZ& rays, vec_ZZ& num, 
		   evalue **E_vertex, barvinok_options *options);

/* This structure encodes the power of the term in a rational generating function.
 * 
 * Either E == NULL or constant = 0
 * If E != NULL, then the power is 	    E
 * If E == NULL, then the power is 	    constant
 */
struct term_info {
    evalue	  **E;
    vec_ZZ	    constant;
};

void lattice_point(Param_Vertices* V, const mat_ZZ& rays, vec_ZZ& lambda,
    term_info* term, unsigned long det,
    barvinok_options *options);

#endif

#endif
