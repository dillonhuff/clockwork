#define DD_LPType		dd_LPType
#define DD_CreateLPData		dd_CreateLPData
#define DD_LPObjectiveType	dd_LPObjectiveType 
#define	DD_rowrange		dd_rowrange
#define	DD_colrange		dd_colrange
#define	DD_Rational		dd_Rational
#define	DD_FALSE		dd_FALSE
#define	DD_set_si		dd_set_si
#define	DD_neg			dd_neg
#define	DD_ErrorType		dd_ErrorType
#define	DD_DualSimplex		dd_DualSimplex
#define	DD_LPSolve		dd_LPSolve
#define	DD_NoError		dd_NoError
#define	DD_Optimal		dd_Optimal
#define	DD_DualInconsistent	dd_DualInconsistent
#define	DD_LPmin		dd_LPmin
#define	DD_Inconsistent		dd_Inconsistent
#define	DD_FreeLPData		dd_FreeLPData
#define	DD_LPmax		dd_LPmax
#define DD_int_sign(sign,obj,val)						\
	do {									\
	    if (obj == DD_LPmin) {						\
		if (mpq_sgn(val) > 0)						\
		    sign = 1;			    	   			\
		else if (mpz_cmpabs(mpq_numref(val), mpq_denref(val)) < 0)	\
		    sign = 0;							\
		else								\
		    sign = -1;							\
	    } else {			    					\
		if (mpz_cmp(mpq_numref(val), mpq_denref(val)) >= 0)	    	\
		    sign = 1;							\
		else if (mpq_sgn(val) >= 0)				    	\
		    sign = 0;							\
		else								\
		    sign = -1;							\
	    }			    						\
	} while (0)
#define DD_rat_sign(sign,obj,val)   sign = dd_sgn(val)

#define DD_set_z(a,b)	    	mpq_set_z(a,b)
#define DD_floor(a,b)		mpz_fdiv_q(a,mpq_numref(b),mpq_denref(b))
#define DD_ceil(a,b)		mpz_cdiv_q(a,mpq_numref(b),mpq_denref(b))

#include "polysign_cdd_template.cc"
