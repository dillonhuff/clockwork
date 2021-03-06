#ifndef EVALUE_H
#define EVALUE_H

#include <isl/polynomial.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

#define polynomial new_polynomial
#define periodic new_periodic
#define evector new_evector
#define enode_type new_enode_type
#define enode_node new_enode_node
#define _enumeration _new_enumeration
#define Enumeration _new_Enumeration
#define enode _new_enode
#define _enode _new__enode
#define evalue _new_evalue
#define _evalue _new__evalue
#define eadd _new_eadd
#define ecopy _new_ecopy
#define new_enode _new_new_enode
#define free_evalue_refs _new_free_evalue_refs
#define print_evalue _new_print_evalue
#define print_enode _new_print_enode
#define reduce_evalue _new_reduce
#define compute_evalue _new_compute_evalue
#define compute_poly _new_compute_poly
#define in_domain _new_in_domain
#define Enumeration_Free _new_Enumeration_Free
#define evalue_div _new_evalue_div

typedef enum { polynomial, periodic, evector, fractional, relation, 
               partition, flooring } enode_type;

typedef struct _evalue {
  Value d;              /* denominator */
  union {
    Value n;            /* numerator (if denominator > 0) */
    struct _enode *p;	/* pointer   (if denominator == 0) */
    Polyhedron *D;	/* domain    (if denominator == -1) */
  } x;
} evalue;

__isl_give isl_qpolynomial *isl_qpolynomial_from_evalue(
	__isl_take isl_space *dim, const evalue *e);
__isl_give isl_pw_qpolynomial *isl_pw_qpolynomial_from_evalue(
	__isl_take isl_space *dim, const evalue *e);
evalue *isl_qpolynomial_to_evalue(__isl_keep isl_qpolynomial *qp);
evalue *isl_pw_qpolynomial_to_evalue(__isl_keep isl_pw_qpolynomial *pwqp);

#define EVALUE_DOMAIN(ev)   	((ev).x.D)
#define EVALUE_SET_DOMAIN(ev, D)		\
    do {					\
	value_set_si((ev).d, -1);		\
	EVALUE_DOMAIN(ev) = D;		    	\
    } while(0)
#define EVALUE_IS_DOMAIN(ev)	(value_mone_p((ev).d))

#define EVALUE_IS_ZERO(ev)	(value_pos_p((ev).d) && value_zero_p((ev).x.n))
#define EVALUE_IS_ONE(ev)	(value_one_p((ev).d) && value_one_p((ev).x.n))

#define EVALUE_IS_NAN(ev)	(value_cmp_si((ev).d, -2) == 0)

typedef struct _enode {
  enode_type type;      /* polynomial or periodic or evector */
  int size;             /* number of attached pointers */
  int pos;	        /* parameter position */
  evalue arr[1];        /* array of rational/pointer */
} enode;

typedef struct _enumeration {
  
  Polyhedron *ValidityDomain;    /* contraints on the parameters     */
  evalue EP;                     /* dimension = combined space       */
  struct _enumeration *next;     /* Ehrhart Polynomial, corresponding
	                            to parameter values inside the
                                    domain ValidityDomain below      */
} Enumeration;


void evalue_set_si(evalue *ev, int n, int d);
void evalue_set(evalue *ev, Value n, Value d);
void evalue_copy(evalue *dst, const evalue *src);
evalue *evalue_dup(const evalue *e);
evalue *evalue_zero();
evalue *evalue_nan();
evalue *evalue_var(int var);
void evalue_free(evalue *e);
enode *new_enode(enode_type type,int size,int pos);
enode *ecopy(enode *e);
int eequal(const evalue *e1, const evalue *e2);
void free_evalue_refs(evalue *e);
void print_evalue(FILE *DST, const evalue *e, const char **pname);
void print_enode(FILE *DST, enode *p, const char **pname);
void reduce_evalue (evalue *e);
void reduce_evalue_in_domain(evalue *e, Polyhedron *D);
void aep_evalue(evalue *e, int *ref);
void addeliminatedparams_evalue(evalue *e,Matrix *CT);
void addeliminatedparams_enum(evalue *e, Matrix *CT, Polyhedron *CEq,
			      unsigned MaxRays, unsigned nparam);
void eadd(const evalue *e1, evalue *res);
void emul(const evalue *e1, evalue *res);
void emask(evalue *mask, evalue *res);
int in_domain(Polyhedron *P, Value *list_args);
double compute_evalue(const evalue *e, Value *list_args);
Value *compute_poly(Enumeration *en,Value *list_args);
evalue *evalue_eval(const evalue *e, Value *values);
void evalue_mod2table(evalue *ev, int nparam);
void evalue_mod2relation(evalue *e);
void evalue_combine(evalue *e);
void evalue_range_reduction(evalue *e);
int evalue_range_reduction_in_domain(evalue *e, Polyhedron *D);
size_t evalue_size(evalue *e);
size_t domain_size(Polyhedron *D);
Enumeration* partition2enumeration(evalue *EP);
void evalue_frac2floor(evalue *e);
int evalue_floor2frac(evalue *e);
int evalue_frac2floor_in_domain(evalue *e, Polyhedron *D);
void evalue_frac2floor2(evalue *e, int shift);
int evalue_frac2floor_in_domain3(evalue *e, Polyhedron *D, int shift);
void evalue_frac2polynomial(evalue *e, int sign, unsigned MaxRays);
evalue *esum(evalue *E, int nvar);
evalue *evalue_sum(evalue *E, int nvar, unsigned MaxRays);
void eor(evalue *e1, evalue *res);
void evalue_denom(const evalue *e, Value *d);
void evalue_div(evalue *e, Value n);
void evalue_mul(evalue *e, Value n);
void evalue_mul_div(evalue *e, Value n, Value d);
void evalue_negate(evalue *e);
void evalue_add_constant(evalue *e, const Value cst);
void evalue_split_domains_into_orthants(evalue *e, unsigned MaxRays);
void evalue_extract_affine(const evalue *e, Value *coeff, Value *cst, Value *d);
evalue *affine2evalue(Value *coeff, Value denom, int nvar);
void evalue_substitute(evalue *e, evalue **subs);
void evalue_backsubstitute(evalue *e, Matrix *CP, unsigned MaxRays);
evalue *evalue_polynomial(Vector *c, const evalue* X);
void evalue_shift_variables(evalue *e, int first, int n);
void evalue_reorder_terms(evalue *e);

struct evalue_section {
    Polyhedron *D;
    evalue *E;
};

evalue *evalue_from_section_array(struct evalue_section *s, int n);

#if defined(__cplusplus)
}
#endif

#endif
