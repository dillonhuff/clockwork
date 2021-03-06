#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

enum order_sign { order_lt, order_le, order_eq, order_ge, order_gt, order_unknown,
		  order_undefined };

/* Returns the sign of the affine function specified by T on the polyhedron D */
enum order_sign glpk_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);
enum order_sign polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);
enum order_sign PL_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);
enum order_sign cdd_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);
enum order_sign cddf_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);
enum order_sign isl_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options);

enum lp_result { lp_ok = 0, lp_unbounded, lp_empty };
enum lp_dir { lp_min, lp_max };

enum lp_result constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt,
				struct barvinok_options *options);
enum lp_result glpk_constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt);
enum lp_result PL_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt,
				    unsigned MaxRays);
enum lp_result cdd_constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt);
enum lp_result cddf_constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt);
enum lp_result isl_constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt);

enum lp_result polyhedron_opt(Polyhedron *P, Value *obj, Value denom,
				enum lp_dir dir, Value *opt,
				struct barvinok_options *options);
enum lp_result PL_polyhedron_opt(Polyhedron *P, Value *obj, Value denom,
				enum lp_dir dir, Value *opt);

#if defined(__cplusplus)
}
#endif
