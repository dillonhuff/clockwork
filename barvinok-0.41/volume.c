#include <assert.h>
#include <barvinok/polylib.h>
#include <barvinok/barvinok.h>
#include <barvinok/evalue.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "reduce_domain.h"
#include "param_util.h"
#include "volume.h"
#include "scale.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

/* Computes an evalue representation of a coordinate
 * in a ParamVertices.
 */
static evalue *vertex2evalue(Value *vertex, int nparam)
{
    return affine2evalue(vertex, vertex[nparam+1], nparam);
}

static void matrix_print(evalue ***matrix, int dim, int *cols,
	const char **param_names) __attribute__((unused));
static void matrix_print(evalue ***matrix, int dim, int *cols,
			 const char **param_names)
{
    int i, j;

    for (i = 0; i < dim; ++i)
	for (j = 0; j < dim; ++j) {
	    int k = cols ? cols[j] : j;
	    fprintf(stderr, "%d %d: ", i, j);
	    print_evalue(stderr, matrix[i][k], param_names);
	    fprintf(stderr, "\n");
	}
}

/* Compute determinant using Laplace's formula.
 * In particular, the determinant is expanded along the last row.
 * The cols array is a list of columns that remain in the currect submatrix.
 */
static evalue *determinant_cols(evalue ***matrix, int dim, int *cols)
{
    evalue *det, *tmp;
    evalue mone;
    int j;
    int *newcols;

    if (dim == 1) {
	det = ALLOC(evalue);
	value_init(det->d);
	evalue_copy(det, matrix[0][cols[0]]);
	return det;
    }

    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);
    det = NULL;
    newcols = ALLOCN(int, dim-1);
    for (j = 1; j < dim; ++j)
	newcols[j-1] = cols[j];
    for (j = 0; j < dim; ++j) {
	if (j != 0)
	    newcols[j-1] = cols[j-1];
	tmp = determinant_cols(matrix, dim-1, newcols);
	emul(matrix[dim-1][cols[j]], tmp);
	if ((dim+j)%2 == 0)
	    emul(&mone, tmp);
	if (!det)
	    det = tmp;
	else {
	    eadd(tmp, det);
	    evalue_free(tmp);
	}
    }
    free(newcols);
    free_evalue_refs(&mone);

    return det;
}

static evalue *determinant(evalue ***matrix, int dim)
{
    int i;
    int *cols = ALLOCN(int, dim);
    evalue *det;

    for (i = 0; i < dim; ++i)
	cols[i] = i;

    det = determinant_cols(matrix, dim, cols);

    free(cols);

    return det;
}

/* Compute the facet of P that saturates constraint c.
 */
static Polyhedron *facet(Polyhedron *P, int c, unsigned MaxRays)
{
    Polyhedron *F;
    Vector *row = Vector_Alloc(1+P->Dimension+1);
    Vector_Copy(P->Constraint[c]+1, row->p+1, P->Dimension+1);
    F = AddConstraints(row->p, 1, P, MaxRays);
    Vector_Free(row);
    return F;
}

/* Substitute parameters by the corresponding element in subs
 */
static evalue *evalue_substitute_new(evalue *e, evalue **subs)
{
    evalue *res = NULL;
    evalue *c;
    int i;

    if (value_notzero_p(e->d)) {
	res = ALLOC(evalue);
	value_init(res->d);
	evalue_copy(res, e);
	return res;
    }
    assert(e->x.p->type == polynomial);

    res = evalue_zero();
    for (i = e->x.p->size-1; i > 0; --i) {
	c = evalue_substitute_new(&e->x.p->arr[i], subs);
	eadd(c, res);
	evalue_free(c);
	emul(subs[e->x.p->pos-1], res);
    }
    c = evalue_substitute_new(&e->x.p->arr[0], subs);
    eadd(c, res);
    evalue_free(c);

    return res;
}

struct parameter_point {
    Vector *coord;
    evalue **e;
};

struct parameter_point *parameter_point_new(unsigned nparam)
{
    struct parameter_point *point = ALLOC(struct parameter_point);
    point->coord = Vector_Alloc(nparam+1);
    point->e = NULL;
    return point;
}

evalue **parameter_point_evalue(struct parameter_point *point)
{
    int j;
    unsigned nparam = point->coord->Size-1;

    if (point->e)
	return point->e;

    point->e = ALLOCN(evalue *, nparam);
    for (j = 0; j < nparam; ++j) {
	point->e[j] = ALLOC(evalue);
	value_init(point->e[j]->d);
	evalue_set(point->e[j], point->coord->p[j], point->coord->p[nparam]);
    }

    return point->e;
}

void parameter_point_free(struct parameter_point *point)
{
    int i;
    unsigned nparam = point->coord->Size-1;

    Vector_Free(point->coord);

    if (point->e) {
	for (i = 0; i < nparam; ++i)
	    evalue_free(point->e[i]);
	free(point->e);
    }
    free(point);
}

/* Computes point in pameter space where polyhedron is non-empty.
 */
static struct parameter_point *non_empty_point(Param_Domain *D)
{
    unsigned nparam = D->Domain->Dimension;
    struct parameter_point *point;
    Vector *v;

    v = inner_point(D->Domain);
    point = parameter_point_new(nparam);
    Vector_Copy(v->p+1, point->coord->p, nparam+1);
    Vector_Free(v);

    return point;
}

static Matrix *barycenter(Param_Polyhedron *PP, Param_Domain *D)
{
    int nbV;
    Matrix *center = NULL;
    Value denom;
    Value fc, fv;
    unsigned nparam;
    int i;
    Param_Vertices *V;

    value_init(fc);
    value_init(fv);
    nbV = 0;
    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	++nbV;
	if (!center) {
	    center = Matrix_Copy(V->Vertex);
	    nparam = center->NbColumns - 2;
	} else {
	    for (i = 0; i < center->NbRows; ++i) {
		value_assign(fc, center->p[i][nparam+1]);
		value_lcm(center->p[i][nparam+1],
			    fc, V->Vertex->p[i][nparam+1]);
		value_division(fc, center->p[i][nparam+1], fc);
		value_division(fv, center->p[i][nparam+1],
				V->Vertex->p[i][nparam+1]);
		Vector_Combine(center->p[i], V->Vertex->p[i], center->p[i],
			       fc, fv, nparam+1);
	    }
	}
    END_FORALL_PVertex_in_ParamPolyhedron;
    value_clear(fc);
    value_clear(fv);

    value_init(denom);
    value_set_si(denom, nbV);
    for (i = 0; i < center->NbRows; ++i) {
	value_multiply(center->p[i][nparam+1], center->p[i][nparam+1], denom);
	Vector_Normalize(center->p[i], nparam+2);
    }
    value_clear(denom);

    return center;
}

static Matrix *triangulation_vertex(Param_Polyhedron *PP, Param_Domain *D,
				    Polyhedron *F)
{
    Param_Vertices *V;

    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	return V->Vertex;
    END_FORALL_PVertex_in_ParamPolyhedron;

    assert(0);
    return NULL;
}

/* Compute dim! times the volume of polyhedron F in Param_Domain D.
 * If F is a simplex, then the volume is computed of a recursive pyramid
 * over F with the points already in matrix.
 * Otherwise, the barycenter of F is added to matrix and the function
 * is called recursively on the facets of F.
 *
 * The first row of matrix contain the _negative_ of the first point.
 * The remaining rows of matrix contain the distance of the corresponding
 * point to the first point.
 */
static evalue *volume_in_domain(Param_Polyhedron *PP, Param_Domain *D,
				unsigned dim, evalue ***matrix,
				struct parameter_point *point,
				int row, Polyhedron *F,
				struct barvinok_options *options);

static evalue *volume_triangulate(Param_Polyhedron *PP, Param_Domain *D,
				  unsigned dim, evalue ***matrix,
				  struct parameter_point *point,
				  int row, Polyhedron *F,
				  struct barvinok_options *options)
{
    int j;
    evalue *tmp;
    evalue *vol;
    evalue mone;
    Matrix *center;
    unsigned cut_MaxRays = options->MaxRays;
    unsigned nparam = PP->V->Vertex->NbColumns-2;
    Vector *v = NULL;

    POL_UNSET(cut_MaxRays, POL_INTEGER);

    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);

    if (options->approx->volume_triangulate == BV_VOL_BARYCENTER)
	center = barycenter(PP, D);
    else
	center = triangulation_vertex(PP, D, F);
    for (j = 0; j < dim; ++j)
	matrix[row][j] = vertex2evalue(center->p[j], center->NbColumns - 2);
    if (options->approx->volume_triangulate == BV_VOL_BARYCENTER)
	Matrix_Free(center);
    else
	v = Vector_Alloc(1+nparam+1);

    if (row == 0) {
	for (j = 0; j < dim; ++j)
	    emul(&mone, matrix[row][j]);
    } else {
	for (j = 0; j < dim; ++j)
	    eadd(matrix[0][j], matrix[row][j]);
    }

    vol = NULL;
    POL_ENSURE_FACETS(F);
    for (j = F->NbEq; j < F->NbConstraints; ++j) {
	Polyhedron *FF;
	Param_Domain *FD;
	if (First_Non_Zero(F->Constraint[j]+1, dim) == -1)
	    continue;
	if (options->approx->volume_triangulate != BV_VOL_BARYCENTER) {
	    Param_Inner_Product(F->Constraint[j], center, v->p);
	    if (First_Non_Zero(v->p+1, nparam+1) == -1)
		continue;
	}
	FF = facet(F, j, options->MaxRays);
	FD = Param_Polyhedron_Facet(PP, D, F->Constraint[j]);
	tmp = volume_in_domain(PP, FD, dim, matrix, point,
			       row+1, FF, options);
	if (!vol)
	    vol = tmp;
	else {
	    eadd(tmp, vol);
	    evalue_free(tmp);
	}
	Polyhedron_Free(FF);
	Param_Domain_Free(FD);
    }

    if (options->approx->volume_triangulate != BV_VOL_BARYCENTER)
	Vector_Free(v);

    for (j = 0; j < dim; ++j)
	evalue_free(matrix[row][j]);

    free_evalue_refs(&mone);
    return vol;
}

static evalue *volume_simplex(Param_Polyhedron *PP, Param_Domain *D,
				unsigned dim, evalue ***matrix,
				struct parameter_point *point,
				int row, struct barvinok_options *options)
{
    evalue mone;
    Param_Vertices *V;
    evalue *vol, *val;
    int i, j;

    options->stats->volume_simplices++;

    value_init(mone.d);
    evalue_set_si(&mone, -1, 1);

    i = row;
    FORALL_PVertex_in_ParamPolyhedron(V, D, PP) /* _ix, _bx internal counters */
	for (j = 0; j < dim; ++j) {
	    matrix[i][j] = vertex2evalue(V->Vertex->p[j],
					   V->Vertex->NbColumns - 2);
	    if (i == 0)
		emul(&mone, matrix[i][j]);
	    else
		eadd(matrix[0][j], matrix[i][j]);
	}
	++i;
    END_FORALL_PVertex_in_ParamPolyhedron;

    vol = determinant(matrix+1, dim);

    val = evalue_substitute_new(vol, parameter_point_evalue(point));

    assert(value_notzero_p(val->d));
    assert(value_notzero_p(val->x.n));
    if (value_neg_p(val->x.n))
	emul(&mone, vol);

    evalue_free(val);

    for (i = row; i < dim+1; ++i)
	for (j = 0; j < dim; ++j)
	    evalue_free(matrix[i][j]);

    free_evalue_refs(&mone);

    return vol;
}

static evalue *volume_triangulate_lift(Param_Polyhedron *PP, Param_Domain *D,
					unsigned dim, evalue ***matrix,
					struct parameter_point *point,
					int row, struct barvinok_options *options)
{
    const static int MAX_TRY=10;
    Param_Vertices *V;
    int nbV, nv;
    int i;
    int t = 0;
    Matrix *FixedRays, *M;
    Polyhedron *L;
    Param_Domain SD;
    Value tmp;
    evalue *s, *vol;

    SD.Domain = 0;
    SD.next = 0;
    nv = (PP->nbV - 1)/(8*sizeof(int)) + 1;
    SD.F = ALLOCN(unsigned, nv);

    FixedRays = Matrix_Alloc(PP->nbV+1, 1+dim+2);
    nbV = 0;
    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	unsigned nparam = V->Vertex->NbColumns - 2;
	Param_Vertex_Common_Denominator(V);
	for (i = 0; i < V->Vertex->NbRows; ++i) {
	    value_multiply(FixedRays->p[nbV][1+i], V->Vertex->p[i][nparam],
			   point->coord->p[nparam]);
	    Inner_Product(V->Vertex->p[i], point->coord->p, nparam,
			  &FixedRays->p[nbV][1+dim]);
	    value_addto(FixedRays->p[nbV][1+i], FixedRays->p[nbV][1+i],
			FixedRays->p[nbV][1+dim]);
	}
	value_multiply(FixedRays->p[nbV][1+dim+1], V->Vertex->p[0][nparam+1],
		       point->coord->p[nparam]);
	value_set_si(FixedRays->p[nbV][0], 1);
	++nbV;
    END_FORALL_PVertex_in_ParamPolyhedron;
    value_set_si(FixedRays->p[nbV][0], 1);
    value_set_si(FixedRays->p[nbV][1+dim], 1);
    FixedRays->NbRows = nbV+1;

    value_init(tmp);
    if (0) {
try_again:
	/* Usually vol should still be NULL */
	if (vol)
	    evalue_free(vol);
	Polyhedron_Free(L);
	++t;
    }
    assert(t <= MAX_TRY);
    vol = NULL;

    for (i = 0; i < nbV; ++i)
	value_set_si(FixedRays->p[i][1+dim], random_int((t+1)*dim*nbV)+1);

    M = Matrix_Copy(FixedRays);
    L = Rays2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    POL_ENSURE_FACETS(L);
    for (i = 0; i < L->NbConstraints; ++i) {
	int r;
	/* Ignore perpendicular facets, i.e., facets with 0 z-coordinate */
	if (value_negz_p(L->Constraint[i][1+dim]))
	    continue;

	memset(SD.F, 0, nv * sizeof(unsigned));
	nbV = 0;
	r = 0;
	FORALL_PVertex_in_ParamPolyhedron(V, D, PP) /* _ix, _bx internal */
	    Inner_Product(FixedRays->p[nbV]+1, L->Constraint[i]+1, dim+2, &tmp);
	    if (value_zero_p(tmp)) {
		if (r > dim-row)
		    goto try_again;
		SD.F[_ix] |= _bx;
		++r;
	    }
	    ++nbV;
	END_FORALL_PVertex_in_ParamPolyhedron;
	assert(r == (dim-row)+1);

	s = volume_simplex(PP, &SD, dim, matrix, point, row, options);
	if (!vol)
	    vol = s;
	else {
	    eadd(s, vol);
	    evalue_free(s);
	}
    }
    Polyhedron_Free(L);
    Matrix_Free(FixedRays);
    value_clear(tmp);
    free(SD.F);

    return vol;
}

static evalue *volume_in_domain(Param_Polyhedron *PP, Param_Domain *D,
				unsigned dim, evalue ***matrix,
				struct parameter_point *point,
				int row, Polyhedron *F,
				struct barvinok_options *options)
{
    int nbV;
    Param_Vertices *V;
    evalue *vol;

    assert(point);

    nbV = 0;
    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	++nbV;
    END_FORALL_PVertex_in_ParamPolyhedron;

    if (nbV > (dim-row) + 1) {
	if (options->approx->volume_triangulate == BV_VOL_LIFT)
	    vol = volume_triangulate_lift(PP, D, dim, matrix, point,
					  row, options);
	else
	    vol = volume_triangulate(PP, D, dim, matrix, point,
				     row, F, options);
    } else {
	assert(nbV == (dim-row) + 1);
	vol = volume_simplex(PP, D, dim, matrix, point, row, options);
    }

    return vol;
}

evalue* Param_Polyhedron_Volume(Polyhedron *P, Polyhedron* C,
				struct barvinok_options *options)
{
    evalue ***matrix;
    unsigned nparam = C->Dimension;
    unsigned nvar = P->Dimension - C->Dimension;
    Param_Polyhedron *PP;
    unsigned MaxRays;
    int i;
    Value fact;
    evalue *vol;
    int nd;
    struct evalue_section *s;
    Param_Domain *D;
    Polyhedron *TC;

    if (options->approx->approximation == BV_APPROX_SIGN_NONE)
	return NULL;

    if (options->approx->approximation != BV_APPROX_SIGN_APPROX) {
	int pa = options->approx->approximation;
	assert(pa == BV_APPROX_SIGN_UPPER || pa == BV_APPROX_SIGN_LOWER);

	P = Polyhedron_Flate(P, nparam, pa == BV_APPROX_SIGN_UPPER,
			     options->MaxRays);

	/* Don't deflate/inflate again (on this polytope) */
	options->approx->approximation = BV_APPROX_SIGN_APPROX;
	vol = barvinok_enumerate_with_options(P, C, options);
	options->approx->approximation = pa;

	Polyhedron_Free(P);
	return vol;
    }

    TC = true_context(P, C, options->MaxRays);

    MaxRays = options->MaxRays;
    POL_UNSET(options->MaxRays, POL_INTEGER);

    value_init(fact);
    Factorial(nvar, &fact);

    PP = Polyhedron2Param_Polyhedron(P, C, options);

    for (nd = 0, D = PP->D; D; ++nd, D = D->next);
    s = ALLOCN(struct evalue_section, nd);

    matrix = ALLOCN(evalue **, nvar+1);
    for (i = 0; i < nvar+1; ++i)
	matrix[i] = ALLOCN(evalue *, nvar);

    FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, D, rVD)
	Polyhedron *CA, *F;
	struct parameter_point *point;

	CA = align_context(D->Domain, P->Dimension, MaxRays);
	F = DomainIntersection(P, CA, options->MaxRays);
	Domain_Free(CA);

	point = non_empty_point(D);
	s[i].D = rVD;
	s[i].E = volume_in_domain(PP, D, nvar, matrix, point, 0, F, options);
	Domain_Free(F);
	parameter_point_free(point);
	evalue_div(s[i].E, fact);
    END_FORALL_REDUCED_DOMAIN
    options->MaxRays = MaxRays;
    Polyhedron_Free(TC);

    vol = evalue_from_section_array(s, nd);
    free(s);

    for (i = 0; i < nvar+1; ++i)
	free(matrix[i]);
    free(matrix);
    Param_Polyhedron_Free(PP);
    value_clear(fact);

    return vol;
}
