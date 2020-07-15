#include <math.h>

#define DD_LPType		ddf_LPType
#define DD_CreateLPData		ddf_CreateLPData
#define DD_LPObjectiveType	ddf_LPObjectiveType 
#define	DD_rowrange		ddf_rowrange
#define	DD_colrange		ddf_colrange
#define	DD_Rational		ddf_Rational
#define	DD_FALSE		ddf_FALSE
#define	DD_set_si		ddf_set_si
#define	DD_neg			ddf_neg
#define	DD_ErrorType		ddf_ErrorType
#define	DD_DualSimplex		ddf_DualSimplex
#define	DD_LPSolve		ddf_LPSolve
#define	DD_NoError		ddf_NoError
#define	DD_Optimal		ddf_Optimal
#define	DD_DualInconsistent	ddf_DualInconsistent
#define	DD_LPmin		ddf_LPmin
#define	DD_Inconsistent		ddf_Inconsistent
#define	DD_FreeLPData		ddf_FreeLPData
#define	DD_LPmax		ddf_LPmax
#define DD_int_sign(sign,obj,val)	do {					\
					    if (val[0] < -0.5)			\
						sign = -1;			\
					    else if (val[0] > 0.5)		\
						sign = 1;			\
					    else				\
						sign = 0;			\
					} while (0)

#define DD_set_z(a,b)	    	a[0] = VALUE_TO_DOUBLE(b)
#define DD_floor(a,b)		value_set_si(a,(int)floor(b[0]+ddf_almostzero))
#define DD_ceil(a,b)		value_set_si(a,(int)ceil(b[0]-ddf_almostzero))

#define	cdd_polyhedron_affine_sign  cddf_polyhedron_affine_sign
#define DD_rat_sign(sign,obj,val)  do {				    		\
					if (obj == DD_LPmin)			\
					    val[0] -= ddf_almostzero;		\
					else					\
					    val[0] += ddf_almostzero;		\
					sign = ddf_sgn(val);			\
				    } while (0)
#define cdd_constraints_opt	    cddf_constraints_opt

#include "polysign_cdd_template.cc"
