/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 * Copyright 2014      Ecole Normale Superieure
 *
 * Use of this software is governed by the GNU GPLv2+ licenses
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 * and Ecole Normale Superieure, 45 rue d'Ulm, 75230 Paris, France
 */

#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/aff.h>
#include "isl_aff_polylib.h"

/* Fill in row "row" of "M" from "aff".
 * The input is assumed not to involve any integer divisions.
 *
 * The order of the coefficients in the rows of "M" is
 *
 *	input-coefficients parameter-coefficients constant-term denominator
 */
static Matrix *add_row(Matrix *M, int row, __isl_take isl_aff *aff)
{
	enum isl_dim_type types[] = { isl_dim_in, isl_dim_param };
	int i, j, k;
	isl_val *d, *v;

	if (!M || !aff)
		goto error;

	if (isl_aff_dim(aff, isl_dim_div) != 0)
		isl_die(isl_aff_get_ctx(aff), isl_error_unsupported,
			"cannot handle integer divisions", goto error);

	d = isl_aff_get_denominator_val(aff);
	aff = isl_aff_scale_val(aff, isl_val_copy(d));

	k = 0;
	for (i = 0; i < 2; ++i) {
		int n = isl_aff_dim(aff, types[i]);
		for (j = 0; j < n; ++j) {
			v = isl_aff_get_coefficient_val(aff, types[i], j);
			isl_val_get_num_gmp(v, M->p[row][k++]);
			isl_val_free(v);
		}
	}

	v = isl_aff_get_constant_val(aff);
	isl_val_get_num_gmp(v, M->p[row][k++]);
	isl_val_free(v);

	isl_val_get_num_gmp(d, M->p[row][k++]);
	isl_val_free(d);

	isl_aff_free(aff);

	return M;
error:
	isl_aff_free(aff);
	if (M)
		Matrix_Free(M);
	return NULL;
}

/* Convert the multi-affine expression "ma" to a PolyLib Matrix.
 * The input is assumed not to involve any integer divisions.
 *
 * The order of the coefficients in the rows of the Matrix is
 *
 *	input-coefficients parameter-coefficients constant-term denominator
 */
Matrix *isl_multi_aff_to_polylib(__isl_keep isl_multi_aff *ma)
{
	Matrix *M;
	unsigned nparam, n_in, n_out;
	int i;

	if (!ma)
		return NULL;

	nparam = isl_multi_aff_dim(ma, isl_dim_param);
	n_in = isl_multi_aff_dim(ma, isl_dim_in);
	n_out = isl_multi_aff_dim(ma, isl_dim_out);
	M = Matrix_Alloc(n_out, n_in + nparam + 1 + 1);
	for (i = 0; i < n_out; ++i)
		M = add_row(M, i, isl_multi_aff_get_aff(ma, i));

	return M;
}
