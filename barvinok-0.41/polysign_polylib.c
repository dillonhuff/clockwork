#include <assert.h>
#include <barvinok/util.h>
#include <barvinok/options.h>
#include "polysign.h"

static enum order_sign interval_minmax(Polyhedron *I)
{
    int i;
    int min = 1;
    int max = -1;
    assert(I->Dimension == 1);
    POL_ENSURE_VERTICES(I);
    for (i = 0; i < I->NbRays; ++i) {
	if (value_pos_p(I->Ray[i][1]))
	    max = 1;
	else if (value_neg_p(I->Ray[i][1]))
	    min = -1;
	else {
	    if (max < 0)
		max = 0;
	    if (min > 0)
		min = 0;
	}
    }
    if (min > 0)
	return order_gt;
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

/* Returns the sign of the affine function specified by T on the polyhedron D */
enum order_sign PL_polyhedron_affine_sign(Polyhedron *D, Matrix *T,
					    struct barvinok_options *options)
{
    enum order_sign sign;
    Polyhedron *I = Polyhedron_Image(D, T, options->MaxRays);
    if (POL_ISSET(options->MaxRays, POL_INTEGER))
	I = DomainConstraintSimplify(I, options->MaxRays);
    if (emptyQ2(I)) {
	Polyhedron_Free(I);
	I = Polyhedron_Image(D, T, options->MaxRays);
    }
    sign = interval_minmax(I);
    Polyhedron_Free(I);
    return sign;
}

enum lp_result PL_constraints_opt(Matrix *C, Value *obj, Value denom,
				    enum lp_dir dir, Value *opt,
				    unsigned MaxRays)
{
    enum lp_result res;
    Polyhedron *P = Constraints2Polyhedron(C, MaxRays);
    res = PL_polyhedron_opt(P, obj, denom, dir, opt);
    Polyhedron_Free(P);
    return res;
}

enum lp_result PL_polyhedron_opt(Polyhedron *P, Value *obj, Value denom,
				enum lp_dir dir, Value *opt)
{
    int i;
    int first = 1;
    Value val, d;
    enum lp_result res = lp_empty;

    POL_ENSURE_VERTICES(P);
    if (emptyQ(P))
	return res;

    value_init(val);
    value_init(d);
    for (i = 0; i < P->NbRays; ++ i) {
	Inner_Product(P->Ray[i]+1, obj, P->Dimension+1, &val);
	if (value_zero_p(P->Ray[i][0]) && value_notzero_p(val)) {
	    res = lp_unbounded;
	    break;
	}
	if (value_zero_p(P->Ray[i][1+P->Dimension])) {
	    if ((dir == lp_min && value_neg_p(val)) ||
		(dir == lp_max && value_pos_p(val))) {
		res = lp_unbounded;
		break;
	    }
	} else {
	    res = lp_ok;
	    value_multiply(d, denom, P->Ray[i][1+P->Dimension]);
	    if (dir == lp_min)
		mpz_cdiv_q(val, val, d);
	    else
		mpz_fdiv_q(val, val, d);
	    if (first || (dir == lp_min ? value_lt(val, *opt) :
				          value_gt(val, *opt)))
		value_assign(*opt, val);
	    first = 0;
	}
    }
    value_clear(d);
    value_clear(val);

    return res;
}
