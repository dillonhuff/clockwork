/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU GPLv2 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl/map.h>
#include <isl/constraint.h>
#include "isl_set_polylib.h"
#include "isl_map_polylib.h"

struct isl_basic_set *isl_basic_set_new_from_polylib(Polyhedron *P,
			struct isl_space *dim)
{
	isl_ctx *ctx;

	if (!dim)
		return NULL;
	ctx = isl_space_get_ctx(dim);
	isl_assert(ctx, isl_space_dim(dim, isl_dim_in) == 0, return NULL);

	return (struct isl_basic_set *)
		isl_basic_map_new_from_polylib(P, dim);
}

/* Return the number of equality constraints in the polyhedron description "P".
 * The equality constraints have a zero in the first column.
 * They also appear before the inequality constraints, but this code
 * does not rely on this order.
 */
static int polyhedron_n_eq(Polyhedron *P)
{
	int i, n = 0;

	for (i = 0; i < P->NbConstraints; ++i)
		if (value_zero_p(P->Constraint[i][0]))
			++n;

	return n;
}

/* Set the row "row" of "dst" to the values in array "src".
 */
static __isl_give isl_mat *set_row(__isl_take isl_mat *dst, int row,
	Value *src)
{
	int i, n;
	isl_ctx *ctx;

	ctx = isl_mat_get_ctx(dst);
	n = isl_mat_cols(dst);
	for (i = 0; i < n; ++i) {
		isl_val *v;

		v = isl_val_int_from_gmp(ctx, src[i]);
		dst = isl_mat_set_element_val(dst, row, i, v);
	}

	return dst;
}

/* Extract the "n_eq" equality constraints from "P", dropping the column
 * that identifies equality constraints.
 */
static __isl_give isl_mat *extract_equalities(isl_ctx *ctx, Polyhedron *P,
	int n_eq)
{
	int i, j;
	isl_mat *eq;

	eq = isl_mat_alloc(ctx, n_eq, P->Dimension + 1);
	for (i = 0, j = 0; i < P->NbConstraints; ++i) {
		if (!value_zero_p(P->Constraint[i][0]))
			continue;
		eq = set_row(eq, j++, P->Constraint[i] + 1);
	}

	return eq;
}

/* Extract the "n_ineq" inequality constraints from "P", dropping the column
 * that identifies equality constraints.
 */
static __isl_give isl_mat *extract_inequalities(isl_ctx *ctx, Polyhedron *P,
	int n_ineq)
{
	int i, j;
	isl_mat *ineq;

	ineq = isl_mat_alloc(ctx, n_ineq, P->Dimension + 1);
	for (i = 0, j = 0; i < P->NbConstraints; ++i) {
		if (value_zero_p(P->Constraint[i][0]))
			continue;
		ineq = set_row(ineq, j++, P->Constraint[i] + 1);
	}

	return ineq;
}

__isl_give isl_basic_map *isl_basic_map_new_from_polylib(Polyhedron *P,
	__isl_take isl_space *space)
{
	isl_ctx *ctx;
	isl_mat *eq, *ineq;
	unsigned n_eq, n_ineq;

	if (!space)
		return NULL;

	ctx = isl_space_get_ctx(space);
	isl_assert(ctx, P, goto error);
	isl_assert(ctx, P->Dimension >= isl_space_dim(space, isl_dim_all),
		    goto error);

	n_eq = polyhedron_n_eq(P);
	n_ineq = P->NbConstraints - n_eq;
	eq = extract_equalities(ctx, P, n_eq);
	ineq = extract_inequalities(ctx, P, n_ineq);

	return isl_basic_map_from_constraint_matrices(space, eq, ineq,
	    isl_dim_in, isl_dim_out, isl_dim_div, isl_dim_param, isl_dim_cst);
error:
	isl_space_free(space);
	return NULL;
}

struct isl_set *isl_set_new_from_polylib(Polyhedron *D, struct isl_space *dim)
{
	isl_ctx *ctx;
	struct isl_set *set = NULL;
	Polyhedron *P;

	if (!dim)
		return NULL;
	ctx = isl_space_get_ctx(dim);
	isl_assert(ctx, isl_space_dim(dim, isl_dim_in) == 0, return NULL);

	set = isl_set_empty(isl_space_copy(dim));
	if (!set)
		goto error;

	for (P = D; P; P = P->next)
		set = isl_set_union_disjoint(set,
		    isl_set_from_basic_set(
		    isl_basic_set_new_from_polylib(P, isl_space_copy(dim))));
	isl_space_free(dim);
	return set;
error:
	isl_space_free(dim);
	return NULL;
}

/* Store the elements of "c" in the rows of "M" starting at "pos",
 * adding an extra initial column identifying equality constraints.
 * In particular, add 0 if "eq" is set and 1 otherwise.
 */
static Matrix *add_constraints(Matrix *M, __isl_keep isl_mat *c, int eq,
	int pos)
{
	int i, j, n;

	if (!M)
		return NULL;

	n = isl_mat_rows(c);
	for (i = 0; i < n; ++i) {
		if (eq)
			value_set_si(M->p[pos + i][0], 0);
		else
			value_set_si(M->p[pos + i][0], 1);

		for (j = 0; 1 + j < M->NbColumns; ++j) {
			isl_val *v;
			v = isl_mat_get_element_val(c, i, j);
			isl_val_get_num_gmp(v, M->p[pos + i][1 + j]);
			isl_val_free(v);
			if (!v)
				goto error;
		}
	}

	return M;
error:
	Matrix_Free(M);
	return NULL;
}

Polyhedron *isl_basic_map_to_polylib(__isl_keep isl_basic_map *bmap)
{
	Matrix *M;
	Polyhedron *P;
	unsigned max_rays;
	isl_mat *eq, *ineq;
	int n_eq, n_ineq;
	int n_col;

	if (!bmap)
		return NULL;

	if (isl_basic_map_is_rational(bmap))
		max_rays = POL_NO_DUAL;
	else
		max_rays = POL_NO_DUAL | POL_INTEGER;

	ineq = isl_basic_map_inequalities_matrix(bmap,
	    isl_dim_in, isl_dim_out, isl_dim_div, isl_dim_param, isl_dim_cst);
	eq = isl_basic_map_equalities_matrix(bmap,
	    isl_dim_in, isl_dim_out, isl_dim_div, isl_dim_param, isl_dim_cst);
	n_eq = isl_mat_rows(eq);
	n_ineq = isl_mat_rows(ineq);
	n_col = isl_mat_cols(eq);

	M = NULL;
	if (n_eq >= 0 && n_ineq >= 0 && n_col >= 0) {
		M = Matrix_Alloc(n_eq + n_ineq, 1 + n_col);
		M = add_constraints(M, eq, 1, 0);
		M = add_constraints(M, ineq, 0, n_eq);
	}

	isl_mat_free(ineq);
	isl_mat_free(eq);

	if (!M)
		return NULL;

	P = Constraints2Polyhedron(M, max_rays);
	Matrix_Free(M);

	return P;
}

static isl_stat add_basic_map(__isl_take isl_basic_map *bmap, void *user)
{
	Polyhedron ***next = user;

	**next = isl_basic_map_to_polylib(bmap);
	*next = &(**next)->next;

	isl_basic_map_free(bmap);
	return isl_stat_ok;
}

Polyhedron *isl_map_to_polylib(struct isl_map *map)
{
	Polyhedron *R = NULL;
	Polyhedron **next = &R;

	if (!map)
		return NULL;

	if (isl_map_foreach_basic_map(map, &add_basic_map, &next) < 0)
		goto error;

	return R ? R : Empty_Polyhedron(isl_map_dim(map, isl_dim_all));
error:
	Domain_Free(R);
	return NULL;
}

Polyhedron *isl_basic_set_to_polylib(__isl_keep isl_basic_set *bset)
{
	return isl_basic_map_to_polylib((struct isl_basic_map *)bset);
}

Polyhedron *isl_set_to_polylib(__isl_keep isl_set *set)
{
	return isl_map_to_polylib((struct isl_map *)set);
}
