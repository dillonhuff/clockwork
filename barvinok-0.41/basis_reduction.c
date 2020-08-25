#include <assert.h>
#include <isl/options.h>
#include <isl/ctx.h>
#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/mat.h>
#include <isl_set_polylib.h>
#include <barvinok/basis_reduction.h>
#include <barvinok/options.h>
#include "config.h"

#ifndef HAVE_LIBGLPK
Matrix *glpk_Polyhedron_Reduced_Basis(Polyhedron *P,
				     struct barvinok_options *options)
{
    assert(0);
}
#endif

#ifndef HAVE_LIBCDDGMP
Matrix *cdd_Polyhedron_Reduced_Basis(Polyhedron *P,
				     struct barvinok_options *options)
{
    assert(0);
}
#endif

Matrix *isl_Polyhedron_Reduced_Basis(Polyhedron *P,
				     struct barvinok_options *options)
{
	int i, j;
	isl_val *v;
	isl_ctx *ctx;
	isl_space *dim;
	int nvar = P->Dimension;
	isl_basic_set *bset;
	isl_mat *basis;
	Matrix *M;

	ctx = isl_ctx_alloc();
	assert(ctx);

	isl_options_set_gbr_only_first(ctx, options->gbr_only_first);

	dim = isl_space_set_alloc(ctx, 0, nvar);
	bset = isl_basic_set_new_from_polylib(P, dim);

	basis = isl_basic_set_reduced_basis(bset);
	isl_basic_set_free(bset);

	M = Matrix_Alloc(nvar, nvar);

	for (i = 0; i < nvar; ++i)
		for (j = 0; j < nvar; ++j) {
			v = isl_mat_get_element_val(basis, 1 + i, 1 + j);
			isl_val_get_num_gmp(v, M->p[i][j]);
			isl_val_free(v);
		}

	isl_mat_free(basis);

	isl_ctx_free(ctx);

	return M;
}

Matrix *Polyhedron_Reduced_Basis(Polyhedron *P, struct barvinok_options *options)
{
    if (options->gbr_lp_solver == BV_GBR_GLPK)
	return glpk_Polyhedron_Reduced_Basis(P, options);
    else if (options->gbr_lp_solver == BV_GBR_CDD)
	return cdd_Polyhedron_Reduced_Basis(P, options);
    else if (options->gbr_lp_solver == BV_GBR_ISL)
	return isl_Polyhedron_Reduced_Basis(P, options);
    else
	assert(0);
}
