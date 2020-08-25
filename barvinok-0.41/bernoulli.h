#include <barvinok/evalue.h>
#include "section_array.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

struct bernoulli_coef {
    Vector  *num;
    Vector  *den;
    Vector  *lcm;	/* lcm of this and previous denominators */
    int	    size;
    int	    n;		/* The number of Bernoulli coefficients */
};

struct poly_list {
    Vector  **poly;
    int	    size;
    int	    n;		/* The number of polynomials */
};

/*
 * Compute Bernoulli coefficients up to the nth.
 * The returned structure will contain at least n+1 coefficients (0..n).
 */
struct bernoulli_coef *bernoulli_coef_compute(int n);

/*
 * Compute Faulhaber polynomials up to the nth.
 * The returned structure will contain at least n+1 polynomials (0..n).
 */
struct poly_list *faulhaber_compute(int n);

/*
 * Compute Bernoulli polynomials up to the nth.
 * The returned structure will contain at least n+1 polynomials (0..n).
 */
struct poly_list *bernoulli_compute(int n);

evalue *bernoulli_summate(Polyhedron *P, evalue *E, unsigned nvar,
				 struct evalue_section_array *sections,
				 struct barvinok_options *options);

#if defined(__cplusplus)
}
#endif
