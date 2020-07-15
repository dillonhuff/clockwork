#include <vector>
#include <assert.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include <omega.h>
#include "omega_interface/convert.h"
#include "normalization.h"
#include "count.h"
#include "config.h"

#include <iostream>
using namespace std;

#define ALLOC(t,p) p = (t*)malloc(sizeof(*p))

#ifdef USE_PARKER

#include "parker/count_solutions.h"

/*
 * Use parker's method to compute the number of integer points in D.
 * Since this method assumes all variables are non-negative,
 * we have to transform the input polytope first.
 */
evalue *barvinok_enumerate_parker(Polyhedron *D,
					unsigned nvar, unsigned nparam,
					unsigned MaxRays)
{
    Polyhedron *R;
    evalue *res;

    if (nparam != 0) {
	fprintf(stderr, "parker method doesn't support parameters\n");
	return NULL;
    }
    R = skew_to_positive_orthant(D, nvar, MaxRays);
    Relation r = Domain2relation(R, nvar, 0, NULL);
    Polyhedron_Free(R);
    double d = count_solutions(r);
    ALLOC(evalue, res);
    value_init(res->d);
    value_set_si(res->d, 0);
    res->x.p = new_enode(::partition, 2, 0);
    EVALUE_SET_DOMAIN(res->x.p->arr[0], Universe_Polyhedron(0));
    value_set_si(res->x.p->arr[1].d, 1);
    value_init(res->x.p->arr[1].x.n);
    value_set_double(res->x.p->arr[1].x.n, d);
    return res;
}

#else

evalue *barvinok_enumerate_parker(Polyhedron *D,
					unsigned nvar, unsigned nparam,
					unsigned MaxRays)
{
    fprintf(stderr, "support for parker method not compiled in\n");
    return NULL;
}

#endif
