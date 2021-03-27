#include <isl/polynomial.h>
#include <isl/union_set.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

struct width_direction {
    Vector	*width;		/* The lattice width, a vector of length n+2.
				 * width[n] is the constant term
				 * width[n+1] is the denominator
				 */
    Vector	*dir;		/* The direction in which width is obtained */
    Polyhedron	*domain;	/* Chamber where this width is minimal */
};

struct width_direction_array {
    int n;			/* Number of elements (used) in wd array */
    int alloc;			/* Number of elements allocated in wd array */
    struct width_direction *wd;
};

evalue *Polyhedron_Lattice_Width(Polyhedron *P, Polyhedron *C,
				 struct barvinok_options *options);

struct width_direction_array *
Polyhedron_Lattice_Width_Directions(Polyhedron *P, Polyhedron *C,
				    struct barvinok_options *options);
void free_width_direction_array(struct width_direction_array *dirs);

__isl_give isl_pw_qpolynomial *isl_basic_set_lattice_width(
	__isl_take isl_basic_set *bset);
__isl_give isl_pw_qpolynomial *isl_set_lattice_width(__isl_take isl_set *set);
__isl_give isl_union_pw_qpolynomial *isl_union_set_lattice_width(
	__isl_take isl_union_set *uset);

#if defined(__cplusplus)
}
#endif
