#include <assert.h>
#include <barvinok/options.h>
#include <barvinok/sample.h>
#include <barvinok/util.h>
#include "hilbert.h"
#include "hull.h"
#include "ilp.h"
#include "polysign.h"
#include "remove_equalities.h"
#include "config.h"

#ifndef USE_ZSOLVE
Matrix *Cone_Hilbert_Integer_Hull(Polyhedron *C,
				  struct barvinok_options *options)
{
    assert(0);
}
#endif

struct integer_hull {
    Polyhedron	*P;	/* Original polyhedron or cone */
    Polyhedron  *init;  /* Initial (under)approximation of integer hull */

    Matrix 	*F;	/* Set of already computed facets */
    int		n_F;	/* The number of computed facets  */

    /* Computes a lower bound for the objective function obj over
     * the integer hull, possibly exploiting the already computed
     * facets of the integer hull given in hull->F.
     */
    void (*set_lower_bound)(struct integer_hull *hull, Value *obj,
			    Value *lower, struct barvinok_options *options);
};

static int matrix_add(Matrix *M, int n, Value *v)
{
    if (n >= M->NbRows)
	Matrix_Extend(M, 3*(M->NbRows+10)/2);
    Vector_Copy(v, M->p[n], M->NbColumns);
    return n+1;
}

/* Select "best" constraint from P over which to optimize,
 * where P is the current approximation of the integer hull
 * and where a constraint is better if the difference between
 * the value at the constraint and the lower bound (based on
 * the original polytope (the linear relaxation) is smaller.
 */
static int select_best(struct integer_hull *hull,
		       Polyhedron *P,
		       Value *min, Value *max,
		       struct barvinok_options *options)
{
    int i, j;
    Vector *lower = Vector_Alloc(P->NbConstraints);
    Vector *upper = Vector_Alloc(P->NbConstraints);
    Vector *distances = Vector_Alloc(P->NbConstraints);
    int i_min;
    int non_zero = 0;

    i_min = -1;
    for (i = 0; i < P->NbConstraints; ++i) {
	if (First_Non_Zero(P->Constraint[i]+1, P->Dimension) == -1)
	    continue;
	for (j = 0; j < hull->n_F; ++j)
	    if (Vector_Equal(hull->F->p[j]+1, P->Constraint[i]+1, P->Dimension))
		break;
	if (j < hull->n_F)
	    continue;
	hull->set_lower_bound(hull, P->Constraint[i]+1, &lower->p[i], options);
	value_oppose(upper->p[i], P->Constraint[i][1+P->Dimension]);
	value_subtract(distances->p[i], upper->p[i], lower->p[i]);
	if (value_zero_p(distances->p[i]))
	    continue;
	if (i_min == -1 || value_lt(distances->p[i], distances->p[i_min]))
	    i_min = i;
	non_zero++;
    }

    if (i_min != -1) {
	value_decrement(*max, upper->p[i_min]);
	value_assign(*min, lower->p[i_min]);
    }

    Vector_Free(lower);
    Vector_Free(upper);
    Vector_Free(distances);

    return i_min;
}

/* Return the (integer) vertices of P */
static Matrix *Polyhedron_Vertices(Polyhedron *P)
{
    int i, j;
    Matrix *M = Matrix_Alloc(P->NbRays, P->Dimension+1);

    for (i = 0, j = 0; i < P->NbRays; ++i) {
	if (value_zero_p(P->Ray[i][1+P->Dimension]))
	    continue;
	assert(value_one_p(P->Ray[i][1+P->Dimension]));
	value_set_si(M->p[j][P->Dimension], 1);
	Vector_Copy(P->Ray[i]+1, M->p[j++], P->Dimension);
    }
    M->NbRows = j;

    return M;
}

/* Set INCLUDE_KNOWN_FACETS_IN_LP to 1 to compute a lower bound for
 * the minimal value wrt a facet based on the facets that have
 * already been determined to be facets of the integer hull,
 * rather than simply setting the lower bound to 0 or 1.
 * This does not appear to be profitable, probably because
 * the lower bound is recomputed every time we optimize
 * wrt a facet.  If we were to cache the lower bounds for
 * facets that do not change when a new vertex is added,
 * this may still turn out to be useful.
 */
#define INCLUDE_KNOWN_FACETS_IN_LP	0
/* Set INCLUDE_KNOWN_FACETS_IN_ILP to 1 to take into account the
 * facets that have already been determined to be facets
 * of the integer hull while optimizing wrt some other
 * facet.  The idea is that the polytope over which to
 * optimize could be flatter.  However, in practice, adding
 * these constraints seems to slow down the computation
 * (on at least one example).
 */
#define INCLUDE_KNOWN_FACETS_IN_ILP	0

Polyhedron *add_facets(Polyhedron *P, Matrix *facets, int n,
			struct barvinok_options *options)
{
    int i;
    Polyhedron *R;
    Matrix *M;

    M = Matrix_Alloc(P->NbConstraints + n, facets->NbColumns);
    for (i = 0; i < n; ++i)
	Vector_Copy(facets->p[i], M->p[i], facets->NbColumns);
    for (i = 0; i < P->NbConstraints; ++i)
	Vector_Copy(P->Constraint[i], M->p[n + i], M->NbColumns);
    R = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    return R;
}

/* Add optimal and suboptimal points found by Polyhedron_Integer_Minimum
 * to Q, replacing (and destroying) the old Q.
 * rays is a temporary array for use in AddRays that can be reused
 * over multiple calls and that is extended as needed.
 */
Polyhedron *add_points(Polyhedron *Q, Vector *opt, Matrix *subopt,
			int n_subopt, Matrix *rays,
			struct barvinok_options *options)
{
    int i;
    Polyhedron *R;

    if (1 + n_subopt > rays->NbRows) {
	int n = rays->NbRows;
	Matrix_Extend(rays, 1+n_subopt);
	for (i = n; i < rays->NbRows; ++i) {
	    value_set_si(rays->p[i][0], 1);
	    value_set_si(rays->p[i][1+Q->Dimension], 1);
	}
    }

    Vector_Copy(opt->p, rays->p[0]+1, Q->Dimension);
    for (i = 0; i < n_subopt; ++i)
	Vector_Copy(subopt->p[i], rays->p[1+i]+1, Q->Dimension);

    R = AddRays(rays->p[0], 1+n_subopt, Q, options->MaxRays);
    Polyhedron_Free(Q);

    return R;
}

/* Extends an initial approximation hull->init of the integer hull
 * of hull->P using generalized basis reduction.
 * In particular, it considers each facet of the current
 * approximation add optimizes in the direction of the normal,
 * adding the optimal point to the approximation as well as
 * all other points that may have been found along the way,
 * until no facet yields any more new points.
 * Returns a list of the vertices of this integer hull.
 */
static Matrix *gbr_hull_extend(struct integer_hull *hull,
				struct barvinok_options *options)
{
    Value min, max;
    Polyhedron *Q = hull->init;
    Matrix *rays = Matrix_Alloc(1, 2+Q->Dimension);
    Matrix *candidates;
    int n_candidates = 0;
    Matrix *vertices;
    int i_min;

    hull->F= Matrix_Alloc(Q->NbConstraints, 2+Q->Dimension);
    hull->n_F = 0;

    candidates = Matrix_Alloc(0, Q->Dimension);

    value_init(min);
    value_init(max);

    value_set_si(rays->p[0][0], 1);
    value_set_si(rays->p[0][1+Q->Dimension], 1);

    while ((i_min = select_best(hull, Q, &min, &max, options)) != -1) {
	Polyhedron *R;
	Vector *opt;

	if (INCLUDE_KNOWN_FACETS_IN_ILP)
	    R = add_facets(hull->P, hull->F, hull->n_F, options);
	else
	    R = hull->P;

	n_candidates = 0;
	opt = Polyhedron_Integer_Minimum(R, Q->Constraint[i_min]+1,
					 min, max, candidates, &n_candidates,
					 options);
	candidates->NbRows = n_candidates;
	if (INCLUDE_KNOWN_FACETS_IN_ILP)
	    Polyhedron_Free(R);

	hull->n_F = matrix_add(hull->F, hull->n_F, Q->Constraint[i_min]);

	if (!opt)
	    continue;

	Inner_Product(hull->F->p[hull->n_F-1]+1, opt->p, Q->Dimension,
		      &hull->F->p[hull->n_F-1][1+Q->Dimension]);
	value_oppose(hull->F->p[hull->n_F-1][1+Q->Dimension],
		     hull->F->p[hull->n_F-1][1+Q->Dimension]);

	Q = add_points(Q, opt, candidates, n_candidates, rays, options);

	Vector_Free(opt);
    }

    vertices = Polyhedron_Vertices(Q);

    Polyhedron_Free(Q);
    hull->init = NULL;

    value_clear(min);
    value_clear(max);

    Matrix_Free(rays);
    Matrix_Free(hull->F);
    hull->F = NULL;
    Matrix_Free(candidates);

    return vertices;
}

/* Returns the Minkowski sum of the cone and the polytope
 * that is the convex hull of its (integer) extremal rays.
 */
static Polyhedron *truncate_cone(Polyhedron *C,
				 struct barvinok_options *options)
{
    int i;
    Matrix *V;
    Polyhedron *P;

    V = Matrix_Alloc(2*C->NbRays, 2+C->Dimension);
    for (i = 0; i < C->NbRays; ++i) {
	if (value_notzero_p(C->Ray[i][1+C->Dimension]))
	    continue;
	Vector_Copy(C->Ray[i], V->p[C->NbRays+i], 1+C->Dimension+1);
	Vector_Copy(C->Ray[i], V->p[i], 1+C->Dimension);
	value_set_si(V->p[i][1+C->Dimension], 1);
    }
    P = Rays2Polyhedron(V, options->MaxRays);
    Matrix_Free(V);
    return P;
}

/* Frees original list and transformation matrix CV */
static Matrix *transform_list_of_vertices(Matrix *list, Matrix *CV)
{
    Matrix *T, *M;
    T = Transpose(CV);
    M = Matrix_Alloc(list->NbRows, T->NbColumns);
    Matrix_Product(list, T, M);
    Matrix_Free(list);
    Matrix_Free(CV);
    Matrix_Free(T);

    return M;
}

/* Set the lower bound for optimizing along the normal of a facet
 * in case of computing the integer hull of a truncated cone
 * (i.e., a cone with the origin removed).
 * In particular, if the constraint is one bounding the original
 * cone, then the lower bound is zero; if it is a new constraint,
 * then the lower bound is one.
 * A more accurate bound can be obtained by looking at the
 * already computed facets of the integer hull.
 */
static void set_to_one(struct integer_hull *hull, Value *obj,
		       Value *lower, struct barvinok_options *options)
{
    if (INCLUDE_KNOWN_FACETS_IN_LP) {
	int i;
	enum lp_result res;
	Value one;

	if (hull->F->NbRows < hull->n_F+hull->P->NbConstraints)
	    Matrix_Extend(hull->F, hull->n_F+hull->P->NbConstraints);
	for (i = 0; i < hull->P->NbConstraints; ++i)
	    Vector_Copy(hull->P->Constraint[i], hull->F->p[hull->n_F+i],
			hull->F->NbColumns);

	value_init(one);
	value_set_si(one, 1);

	res = constraints_opt(hull->F, obj, one, lp_min, lower, options);
	value_subtract(*lower, *lower, obj[hull->P->Dimension]);
	assert(res == lp_ok);

	if (value_notzero_p(*lower))
	    return;
    }

    if (value_zero_p(obj[hull->P->Dimension]))
	value_set_si(*lower, 0);
    else
	value_set_si(*lower, 1);
}

/* Add to Q those points that the calling function already knows about,
 * replacing (and destroying) the original Q.
 */
static Polyhedron *add_known_points(Polyhedron *Q,
					Matrix *c, int n_c, unsigned MaxRays)
{
    Polyhedron *R;

    R = AddRays(c->p[0], n_c, Q, MaxRays);
    Polyhedron_Free(Q);
    return R;
}

/* Computes the integer hull of the (truncated) cone C
 * using generalized basis reduction, where c contains a list
 * of vertices that are known to be part of this integer hull.
 */
static Matrix *gbr_cone_hull(Polyhedron *C, Matrix *c, int n_c,
				struct barvinok_options *options)
{
    Matrix *vertices;
    Matrix *CV = NULL;
    struct integer_hull hull;

    POL_ENSURE_VERTICES(C);
    remove_all_equalities(&C, NULL, NULL, &CV, 0, options->MaxRays);

    POL_ENSURE_VERTICES(C);

    hull.P = C;
    hull.init = truncate_cone(C, options);
    hull.set_lower_bound = set_to_one;
    if (!CV && c && n_c)
	hull.init = add_known_points(hull.init, c, n_c, options->MaxRays);
    vertices = gbr_hull_extend(&hull, options);

    if (CV) {
	vertices = transform_list_of_vertices(vertices, CV);
	Polyhedron_Free(C);
    }

    return vertices;
}

/* Computes the integer hull of the cone C with the origin removed. */
Matrix *Cone_Integer_Hull(Polyhedron *C, Matrix *candidates,
			  int n_candidates, struct barvinok_options *options)
{
    switch(options->integer_hull) {
    case BV_HULL_GBR:
	return gbr_cone_hull(C, candidates, n_candidates, options);
    case BV_HULL_HILBERT:
	return Cone_Hilbert_Integer_Hull(C, options);
    default:
	assert(0);
    }
}

/* Computes initial full-dimensional approximation of the integer hull of P,
 * or discovers an implicit equality of P.
 * We start off with the integer vertices of P itself, if any.
 * If there are no such vertices (available), then we simply
 * take an arbitrary integer point in the polytope.
 * Then we keep optimizing over normals of equalities in the description
 * of the current approximation, until we find an equality that holds
 * for the entire integer hull of P or until we have obtained a
 * full-dimensional approximation.
 */
static Polyhedron *internal_polytope(Polyhedron *P,
				     struct barvinok_options *options)
{
    int i, j;
    Polyhedron *init;
    Matrix *vertices = Matrix_Alloc(P->NbRays, P->Dimension+2);

    for (i = 0, j = 0; i < P->NbRays; ++i) {
	if (value_notone_p(P->Ray[i][1+P->Dimension]))
	    continue;
	Vector_Copy(P->Ray[i], vertices->p[j++], 2+P->Dimension);
    }
    vertices->NbRows = j;
    if (!j) {
	Vector *sample = Polyhedron_Sample(P, options);
	if (sample) {
	    value_set_si(vertices->p[0][1], 1);
	    Vector_Copy(sample->p, vertices->p[0]+1, P->Dimension+1);
	    Vector_Free(sample);
	    vertices->NbRows = 1;
	}
    }
    init = Rays2Polyhedron(vertices, options->MaxRays);
    Matrix_Free(vertices);

    while (!emptyQ(init) && init->NbEq) {
	Vector *sample;
	Vector *v = Vector_Alloc(init->Dimension+2);
	Polyhedron *Q;

	value_set_si(v->p[0], 1);
	Vector_Copy(init->Constraint[0]+1, v->p+1, init->Dimension+1);
	value_decrement(v->p[1+init->Dimension],v->p[1+init->Dimension]);

	Q = AddConstraints(v->p, 1, P, options->MaxRays);
	sample = Polyhedron_Sample(Q, options);
	Polyhedron_Free(Q);
	if (!sample) {
	    Vector_Oppose(init->Constraint[0]+1, v->p+1, init->Dimension+1);
	    value_decrement(v->p[1+init->Dimension],v->p[1+init->Dimension]);

	    Q = AddConstraints(v->p, 1, P, options->MaxRays);
	    sample = Polyhedron_Sample(Q, options);
	    Polyhedron_Free(Q);
	}
	if (!sample) {
	    P = AddConstraints(init->Constraint[0], 1, P, options->MaxRays);
	    Polyhedron_Free(init);
	    Vector_Free(v);
	    return P;
	}
	assert(sample);

	Vector_Copy(sample->p, v->p+1, init->Dimension+1);
	Q = AddRays(v->p, 1, init, options->MaxRays);
	Polyhedron_Free(init);
	init = Q;

	Vector_Free(sample);
	Vector_Free(v);
    }

    return init;
}

/* Set the lower bound for optimizing along the normal of a facet
 * in case of computing the integer hull of a polyhedron.
 * Although obj contains the full affine objective function,
 * the calling function expect a lower bound on the linear part only.
 * We therefore need to subtract the constant from the computed
 * optimum of the linear relaxation.
 */
static void set_lower(struct integer_hull *hull, Value *obj,
		      Value *lower, struct barvinok_options *options)
{
    enum lp_result res;
    Value one;

    value_init(one);
    value_set_si(one, 1);

    res = polyhedron_opt(hull->P, obj, one, lp_min, lower, options);
    value_subtract(*lower, *lower, obj[hull->P->Dimension]);
    assert(res == lp_ok);

    value_clear(one);
}

/* Computes the vertices of the integer hull of P
 */
Matrix *Polyhedron_Integer_Hull(Polyhedron *P,
				struct barvinok_options *options)
{
    Matrix *vertices;
    Matrix *CV = NULL;
    Polyhedron *init;

    POL_ENSURE_VERTICES(P);
    remove_all_equalities(&P, NULL, NULL, &CV, 0, options->MaxRays);

    POL_ENSURE_VERTICES(P);

    if (P->Dimension == 0) {
	vertices = Matrix_Alloc(1, 1);
	value_set_si(vertices->p[0][0], 1);
    } else {
	init = internal_polytope(P, options);
	if (emptyQ(init)) {
	    vertices = Matrix_Alloc(0, P->Dimension+1);
	    Polyhedron_Free(init);
	} else if (init->NbEq) {
	    vertices = Polyhedron_Integer_Hull(init, options);
	    Polyhedron_Free(init);
	} else {
	    struct integer_hull hull;
	    hull.P = P;
	    hull.init = init;
	    hull.set_lower_bound = set_lower;
	    vertices = gbr_hull_extend(&hull, options);
	}
    }

    if (CV) {
	vertices = transform_list_of_vertices(vertices, CV);
	Polyhedron_Free(P);
    }

    return vertices;
}
