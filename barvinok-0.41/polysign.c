#include <assert.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "polysign.h"
#include "config.h"

#ifndef HAVE_LIBGLPK
enum order_sign glpk_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    assert(0);
}

enum lp_result glpk_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
    assert(0);
}
#endif

#ifndef HAVE_LIBCDDGMP
enum order_sign cdd_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    assert(0);
}

enum order_sign cddf_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    assert(0);
}

enum lp_result cdd_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
    assert(0);
}

enum lp_result cddf_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
    assert(0);
}
#endif

enum order_sign polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    if (options->lp_solver == BV_LP_POLYLIB)
	return PL_polyhedron_affine_sign(D, T, options);
    else if (options->lp_solver == BV_LP_GLPK)
	return glpk_polyhedron_affine_sign(D, T, options);
    else if (options->lp_solver == BV_LP_CDD)
	return cdd_polyhedron_affine_sign(D, T, options);
    else if (options->lp_solver == BV_LP_CDDF)
	return cddf_polyhedron_affine_sign(D, T, options);
    else if (options->lp_solver == BV_LP_ISL)
	return isl_polyhedron_affine_sign(D, T, options);
    else
	assert(0);
}

/*
 * Optimize (minimize or maximize depending on dir) the affine
 * objective function obj (of length dimension+1), with denominator
 * denom over the polyhedron specified by the constraints C.
 * The result is returned in opt.
 */
enum lp_result constraints_opt(Matrix *C, Value *obj, Value denom,
				enum lp_dir dir, Value *opt,
				struct barvinok_options *options)
{
    if (options->lp_solver == BV_LP_POLYLIB)
	return PL_constraints_opt(C, obj, denom, dir, opt, options->MaxRays);
    else if (options->lp_solver == BV_LP_GLPK)
	return glpk_constraints_opt(C, obj, denom, dir, opt);
    else if (options->lp_solver == BV_LP_CDD)
	return cdd_constraints_opt(C, obj, denom, dir, opt);
    else if (options->lp_solver == BV_LP_CDDF)
	return cddf_constraints_opt(C, obj, denom, dir, opt);
    else if (options->lp_solver == BV_LP_ISL)
	return isl_constraints_opt(C, obj, denom, dir, opt);
    else
	assert(0);
}

/*
 * Optimize (minimize or maximize depending on dir) the affine
 * objective function obj (of length dimension+1), with denominator
 * denom over the polyhedron specified by P.
 * The result is returned in opt.
 */
enum lp_result polyhedron_opt(Polyhedron *P, Value *obj, Value denom,
				enum lp_dir dir, Value *opt,
				struct barvinok_options *options)
{
    if (options->lp_solver == BV_LP_POLYLIB)
	return PL_polyhedron_opt(P, obj, denom, dir, opt);
    else {
	Matrix M;
	Polyhedron_Matrix_View(P, &M, P->NbConstraints);
	return constraints_opt(&M, obj, denom, dir, opt, options);
    }
}
