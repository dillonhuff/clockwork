#include <assert.h>
#include <isl/mat.h>
#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/aff.h>
#include <isl/lp.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include "polysign.h"

static __isl_give isl_mat *extract_equalities(isl_ctx *ctx, Matrix *M)
{
	int i, j;
	int n;
	isl_val *v;
	isl_mat *eq;

	n = 0;
	for (i = 0; i < M->NbRows; ++i)
		if (value_zero_p(M->p[i][0]))
			++n;

	eq = isl_mat_alloc(ctx, n, M->NbColumns - 1);
	for (i = 0; i < M->NbRows; ++i) {
		if (!value_zero_p(M->p[i][0]))
			continue;
		for (j = 0; j < M->NbColumns - 1; ++j) {
			v = isl_val_int_from_gmp(ctx, M->p[i][1 + j]);
			eq = isl_mat_set_element_val(eq, i, j, v);
		}
	}

	return eq;
}

static __isl_give isl_mat *extract_inequalities(isl_ctx *ctx, Matrix *M)
{
	int i, j;
	int n;
	isl_val *v;
	isl_mat *ineq;

	n = 0;
	for (i = 0; i < M->NbRows; ++i)
		if (!value_zero_p(M->p[i][0]))
			++n;

	ineq = isl_mat_alloc(ctx, n, M->NbColumns - 1);
	for (i = 0; i < M->NbRows; ++i) {
		if (value_zero_p(M->p[i][0]))
			continue;
		for (j = 0; j < M->NbColumns - 1; ++j) {
			v = isl_val_int_from_gmp(ctx, M->p[i][1 + j]);
			ineq = isl_mat_set_element_val(ineq, i, j, v);
		}
	}

	return ineq;
}

enum order_sign isl_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
	int i;
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim;
	isl_local_space *ls;
	isl_aff *aff;
	isl_basic_set *bset;
	isl_val *min, *max = NULL;
	isl_val *v;
	enum order_sign sign = order_undefined;

	assert(D->Dimension == T->NbColumns - 1);

	dim = isl_space_set_alloc(ctx, 0, D->Dimension);
	ls = isl_local_space_from_space(isl_space_copy(dim));
	bset = isl_basic_set_new_from_polylib(D, dim);
	aff = isl_aff_zero_on_domain(ls);
	for (i = 0; i < D->Dimension; ++i) {
		v = isl_val_int_from_gmp(ctx, T->p[0][i]);
		aff = isl_aff_set_coefficient_val(aff, isl_dim_in, i, v);
	}
	v = isl_val_int_from_gmp(ctx, T->p[0][D->Dimension]);
	aff = isl_aff_set_constant_val(aff, v);
	v = isl_val_int_from_gmp(ctx, T->p[1][D->Dimension]);
	aff = isl_aff_scale_down_val(aff, v);

	min = isl_basic_set_min_lp_val(bset, aff);
	min = isl_val_ceil(min);
	assert(min);

	if (isl_val_is_nan(min))
		sign = order_undefined;
	else if (isl_val_is_pos(min))
		sign = order_gt;
	else {
		max = isl_basic_set_max_lp_val(bset, aff);
		max = isl_val_floor(max);
		assert(max);

		if (isl_val_is_neg(max))
			sign = order_lt;
		else if (isl_val_is_zero(min) && isl_val_is_zero(max))
			sign = order_eq;
		else if (isl_val_is_zero(min))
			sign = order_ge;
		else if (isl_val_is_zero(max))
			sign = order_le;
		else
			sign = order_unknown;
	}

	isl_basic_set_free(bset);
	isl_aff_free(aff);
	isl_val_free(min);
	isl_val_free(max);
	isl_ctx_free(ctx);

	return sign;
}

static enum lp_result isl_lp_result2lp_result(enum isl_lp_result res)
{
	switch (res) {
	case isl_lp_ok:
		return lp_ok;
	case isl_lp_unbounded:
		return lp_unbounded;
	case isl_lp_empty:
		return lp_empty;
	default:
		assert(0);
	}
}

enum lp_result isl_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
	int i;
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim;
	isl_local_space *ls;
	isl_mat *eq, *ineq;
	isl_basic_set *bset;
	isl_aff *aff;
	isl_val *v;
	enum isl_lp_result res;
	int max = dir == lp_max;

	eq = extract_equalities(ctx, C);
	ineq = extract_inequalities(ctx, C);
	dim = isl_space_set_alloc(ctx, 0, C->NbColumns - 2);
	ls = isl_local_space_from_space(isl_space_copy(dim));
	bset = isl_basic_set_from_constraint_matrices(dim, eq, ineq,
			isl_dim_set, isl_dim_div, isl_dim_param, isl_dim_cst);
	aff = isl_aff_zero_on_domain(ls);
	for (i = 0; i < C->NbColumns - 2; ++i) {
		v = isl_val_int_from_gmp(ctx, obj[i]);
		aff = isl_aff_set_coefficient_val(aff, isl_dim_in, i, v);
	}
	v = isl_val_int_from_gmp(ctx, obj[C->NbColumns - 2]);
	aff = isl_aff_set_constant_val(aff, v);
	v = isl_val_int_from_gmp(ctx, denom);
	aff = isl_aff_scale_down_val(aff, v);

	if (max)
		v = isl_val_floor(isl_basic_set_max_lp_val(bset, aff));
	else
		v = isl_val_ceil(isl_basic_set_min_lp_val(bset, aff));
	if (!v)
		res = isl_lp_error;
	else if (isl_val_is_nan(v))
		res = isl_lp_empty;
	else if (!isl_val_is_rat(v))
		res = isl_lp_unbounded;
	else {
		res = isl_lp_ok;
		isl_val_get_num_gmp(v, *opt);
	}

	isl_val_free(v);
	isl_aff_free(aff);
	isl_basic_set_free(bset);
	isl_ctx_free(ctx);

	return isl_lp_result2lp_result(res);
}
