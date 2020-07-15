/*************************************************/
/*     verif_ehrhart.c                           */
/* program to compare effective number of points */
/* in a polytope with the corresponding          */
/* evaluation of the Ehrhart polynomial.         */
/* Parameters vary in range -RANGE to RANGE      */
/* (define below) by default.                    */
/* Can be overridden by specifying               */
/* -r<RANGE>, or -m<min> and -M<max>             */
/*                                               */
/* written by Vincent Loechner (c) 2000.         */
/*  loechner@icps.u-strasbg.fr                   */
/*************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <barvinok/evalue.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "verif_ehrhart.h"

#undef CS   /* for Solaris 10 */

struct check_poly_EP_data {
    struct check_poly_data   cp;
    Polyhedron		    *S;
    const evalue	    *EP;
    int	    	    	     exist;
};

static int cp_EP(const struct check_poly_data *data, int nparam, Value *z,
		 const struct verify_options *options)
{
    int k;
    int ok;
    Value c, tmp, one;
    int pa = options->barvinok->approx->approximation;
    struct check_poly_EP_data* EP_data = (struct check_poly_EP_data*) data;
    const evalue *EP = EP_data->EP;
    int exist = EP_data->exist;
    Polyhedron *S = EP_data->S;

    value_init(c);
    value_init(tmp);
    value_init(one);
    value_set_si(one, 1);
  
    /* Computes the ehrhart polynomial */
    if (!options->exact) {
	double d = compute_evalue(EP, z);
	if (pa == BV_APPROX_SIGN_LOWER)
	    d = ceil(d-0.1);
	else if (pa == BV_APPROX_SIGN_UPPER)
	    d = floor(d+0.1);
	value_set_double(c, d+.25);
    } else {
	evalue *res = evalue_eval(EP, z);
	if (pa == BV_APPROX_SIGN_LOWER)
	    mpz_cdiv_q(c, res->x.n, res->d);
	else if (pa == BV_APPROX_SIGN_UPPER)
	    mpz_fdiv_q(c, res->x.n, res->d);
	else
	    mpz_tdiv_q(c, res->x.n, res->d);
	evalue_free(res);
    }

    /* Manually count the number of points */
    count_points_e(1, S, exist, nparam, data->z, &tmp);

    if (pa == BV_APPROX_SIGN_APPROX)
	/* just accept everything */
	ok = 1;
    else if (pa == BV_APPROX_SIGN_LOWER)
	ok = value_le(c, tmp);
    else if (pa == BV_APPROX_SIGN_UPPER)
	ok = value_ge(c, tmp);
    else
	ok = value_eq(c, tmp);

    check_poly_print(ok, nparam, z, tmp, one, c, one,
		     "EP", "count", "EP eval", options);

    if (!ok) {
	print_evalue(stderr, EP, options->params);
	if (value_zero_p(EP->d) && EP->x.p->type == partition)
	    for (k = 0; k < EP->x.p->size/2; ++k) {
		Polyhedron *D = EVALUE_DOMAIN(EP->x.p->arr[2*k]);
		if (in_domain(D, z)) {
		    Print_Domain(stderr, D, options->params);
		    print_evalue(stderr, &EP->x.p->arr[2*k+1], options->params);
		}
	}
    }

    value_clear(c);
    value_clear(tmp);
    value_clear(one);

    return ok;
}

int check_poly_EP(Polyhedron *S, Polyhedron *CS, evalue *EP, int exist,
	       int nparam, int pos, Value *z, const struct verify_options *options)
{
    struct check_poly_EP_data data;
    data.cp.z = z;
    data.cp.check = cp_EP;
    data.S = S;
    data.EP = EP;
    data.exist = exist;
    return check_poly(CS, &data.cp, nparam, pos, z+S->Dimension-nparam+1, options);
}
