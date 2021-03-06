#include <assert.h>
#include <math.h>
#include <glpk.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "polysign.h"

#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

#define EMPTY_DOMAIN	-2

static glp_prob *solve_lp(int dir, Matrix *C, Value *f, Value denom)
{
    glp_prob *lp;
    glp_smcp parm;
    int *ind;
    double *val;
    int j, k, l;
    unsigned dim = C->NbColumns-2;

    ind = ALLOCN(int, 1+dim);
    val = ALLOCN(double, 1+dim);
    lp = glp_create_prob();
    glp_set_obj_dir(lp, dir);
    glp_add_rows(lp, C->NbRows);
    glp_add_cols(lp, dim);

    for (j = 0; j < C->NbRows; ++j) {
	int type = value_zero_p(C->p[j][0]) ? GLP_FX : GLP_LO;
	for (k = 0, l = 0; k < dim; ++k) {
	    if (value_zero_p(C->p[j][1+k]))
		continue;
	    ind[1+l] = 1+k;
	    val[1+l] = VALUE_TO_DOUBLE(C->p[j][1+k]);
	    ++l;
	}
	glp_set_mat_row(lp, 1+j, l, ind, val);
	glp_set_row_bnds(lp, 1+j, type,
			 -VALUE_TO_DOUBLE(C->p[j][1+dim]), 0);
    }
    for (k = 0, l = 0; k < dim; ++k) {
	glp_set_col_bnds(lp, 1+k, GLP_FR, 0, 0);
    }
    free(ind);
    free(val);

    /* objective function */
    for (j = 0; j < dim; ++j)
	glp_set_obj_coef(lp, 1+j, VALUE_TO_DOUBLE(f[j]) /
				    VALUE_TO_DOUBLE(denom));
    glp_set_obj_coef(lp, 0, VALUE_TO_DOUBLE(f[dim]) /
				VALUE_TO_DOUBLE(denom));

    glp_adv_basis(lp, 0);
    glp_init_smcp(&parm);
    parm.msg_lev = GLP_MSG_OFF;
    glp_simplex(lp, &parm);

    return lp;
}

static enum lp_result constraints_affine_minmax(int dir, Matrix *C,
					      Value *f, Value denom, Value *opt)
{
    enum lp_result res = lp_ok;
    glp_prob *lp = solve_lp(dir, C, f, denom);

    switch (glp_get_status(lp)) {
    case GLP_OPT:
	if (dir == GLP_MIN)
	    value_set_si(*opt, (int)ceil(glp_get_obj_val(lp)-1e-10));
	else
	    value_set_si(*opt, (int)floor(glp_get_obj_val(lp)+1e-10));
	break;
    case GLP_UNBND:
	res = lp_unbounded;
	break;
    case GLP_NOFEAS:
	res = lp_empty;
	break;
    default:
	assert(0);
    }
    glp_delete_prob(lp);
    return res;
}

static int constraints_affine_minmax_sign(int dir, Matrix *C, Matrix *T,
					 int rational)
{
    glp_prob *lp;
    int sign;
    double opt;
    unsigned dim = C->NbColumns-2;
    assert(dim == T->NbColumns-1);
    assert(T->NbRows == 2);

    lp = solve_lp(dir, C, T->p[0], T->p[1][dim]);
    switch (glp_get_status(lp)) {
    case GLP_OPT:
	opt = glp_get_obj_val(lp);
	if (rational) {
	    sign = opt < 0 ? -1 : opt > 0 ? 1 : 0;
	} else {
	    if (opt < -0.5/VALUE_TO_DOUBLE(T->p[1][dim]))
		sign = -1;
	    else if (opt > 0.5/VALUE_TO_DOUBLE(T->p[1][dim]))
		sign = 1;
	    else
		sign = 0;
	}
	break;
    case GLP_UNBND:
	if (dir == GLP_MIN)
	    sign = -1;
	else
	    sign = 1;
	break;
    case GLP_NOFEAS:
	sign = EMPTY_DOMAIN;
	break;
    default:
	assert(0);
    }
    glp_delete_prob(lp);
    return sign;
}

enum order_sign glpk_polyhedron_affine_sign_0D(Polyhedron *D, Matrix *T)
{

	int sgn;

	POL_ENSURE_VERTICES(D);

	if (emptyQ(D))
		return order_undefined;

	sgn = value_sign(T->p[0][0]);

	return sgn < 0 ? order_lt : sgn == 0 ? order_eq : order_gt;
}

enum order_sign glpk_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    int rational = !POL_ISSET(options->MaxRays, POL_INTEGER);
    Matrix M;

    if (emptyQ2(D))
	return order_undefined;

    if (D->Dimension == 0)
	return glpk_polyhedron_affine_sign_0D(D, T);

    Polyhedron_Matrix_View(D, &M, D->NbConstraints);
    int min = constraints_affine_minmax_sign(GLP_MIN, &M, T, rational);
    if (min == EMPTY_DOMAIN)
	return order_undefined;
    if (min > 0)
	return order_gt;
    int max = constraints_affine_minmax_sign(GLP_MAX, &M, T, rational);
    assert(max != EMPTY_DOMAIN);
    if (max < 0)
	return order_lt;
    if (min == max)
	return order_eq;
    if (max == 0)
	return order_le;
    if (min == 0)
	return order_ge;
    return order_unknown;
}

enum lp_result glpk_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
    int glpk_dir = dir == lp_min ? GLP_MIN : GLP_MAX;
    return constraints_affine_minmax(glpk_dir, C, obj, denom, opt);
}
