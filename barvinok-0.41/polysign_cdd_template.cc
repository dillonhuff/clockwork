#include <assert.h>
#define GMPRATIONAL
#include <setoper.h>
#include <cdd.h>
#include <barvinok/util.h>
#include <barvinok/options.h>
#include "polysign.h"
#include "initcdd.h"

#define EMPTY_DOMAIN	-2

static DD_LPType *solve_lp(DD_LPObjectiveType obj, Matrix *C,
			   Value *f)
{
    unsigned dim = C->NbColumns - 2;
    DD_LPType *lp;
    DD_rowrange irev = C->NbRows;
    DD_rowrange rows, cols;
    unsigned NbEq = 0;

    for (int i = 0; i < C->NbRows; ++i)
	if (value_zero_p(C->p[i][0]))
	    NbEq++;

    rows = irev + NbEq + 1;
    cols = 1 + dim;
    lp = DD_CreateLPData(obj, DD_Rational, rows, cols);
    lp->Homogeneous = DD_FALSE;
    lp->objective = obj;

    for (DD_rowrange j = 0; j < C->NbRows; ++j) {
	for (DD_colrange k = 0; k < dim; ++k)
	    DD_set_z(lp->A[j][1+k], C->p[j][1+k]);
	DD_set_z(lp->A[j][0], C->p[j][1+dim]);
	if (value_zero_p(C->p[j][0])) {
	    set_addelem(lp->equalityset, j+1);
	    for (DD_colrange k = 0; k < dim; ++k)
		DD_neg(lp->A[irev][1+k], lp->A[j][1+k]);
	    DD_neg(lp->A[irev][0], lp->A[j][0]);
	    ++irev;
	}
    }
    /* objective function */
    for (DD_colrange k = 0; k < dim; ++k)
	DD_set_z(lp->A[rows-1][1+k], f[k]);
    DD_set_z(lp->A[rows-1][0], f[dim]); 

    DD_ErrorType err = DD_NoError;
    DD_LPSolve(lp, DD_DualSimplex, &err);
    assert(err == DD_NoError);

    return lp;
}

static lp_result constraints_affine_minmax(DD_LPObjectiveType obj, Matrix *C,
					  Value *f, Value denom, Value *opt)
{
    lp_result res = lp_ok;
    DD_LPType *lp = solve_lp(obj, C, f);
    assert(value_one_p(denom));

    switch(lp->LPS) {
    case DD_Optimal:
	if (obj == DD_LPmin)
	    DD_ceil(*opt, lp->optvalue);
	else
	    DD_floor(*opt, lp->optvalue);
	break;
    case DD_DualInconsistent:
	res = lp_unbounded;
	break;
    case DD_Inconsistent:
	res = lp_empty;
	break;
    default:
	assert(0);
    }
    DD_FreeLPData(lp);
    return res;
}

static int constraints_affine_minmax_sign(DD_LPObjectiveType obj, Matrix *C,
					 Matrix *T, bool rational)
{
    unsigned dim = C->NbColumns-2;
    assert(dim == T->NbColumns-1);
    assert(T->NbRows == 2);
    DD_LPType *lp = solve_lp(obj, C, T->p[0]);

    int sign;
    if (lp->LPS == DD_Optimal) {
	if (rational)
	    DD_rat_sign(sign, obj, lp->optvalue);
	else
	    /* The objective function has integer coefficients,
	     * so the optimal should be an integer (over the integer points)
	     */
	    DD_int_sign(sign, obj, lp->optvalue);
    } else if (lp->LPS == DD_DualInconsistent) {
	if (obj == DD_LPmin)
	    sign = -1;
	else
	    sign = 1;
    } else if (lp->LPS == DD_Inconsistent) {
	sign = EMPTY_DOMAIN;
    } else
	assert(0);

    DD_FreeLPData(lp);
    return sign;
}

enum order_sign cdd_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    Matrix M;

    if (emptyQ2(D))
	return order_undefined;

    INIT_CDD;
    bool rational = !POL_ISSET(options->MaxRays, POL_INTEGER);
    Polyhedron_Matrix_View(D, &M, D->NbConstraints);
    int min = constraints_affine_minmax_sign(DD_LPmin, &M, T, rational);
    if (min == EMPTY_DOMAIN)
	return order_undefined;
    if (min > 0)
	return order_gt;
    int max = constraints_affine_minmax_sign(DD_LPmax, &M, T, rational);
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

enum lp_result cdd_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt)
{
    DD_LPObjectiveType cdd_dir = dir == lp_min ? DD_LPmin : DD_LPmax;

    INIT_CDD;
    return constraints_affine_minmax(cdd_dir, C, obj, denom, opt);
}
