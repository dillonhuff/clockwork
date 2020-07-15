#include <assert.h>
#include <NTL/vec_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "genfun_constructor.h"
#include "lattice_width.h"
#include "remove_equalities.h"

using std::cerr;
using std::endl;

static gen_fun *enumerate_series(Polyhedron *P, unsigned nparam,
				    barvinok_options *options)
{
    Matrix *CP = NULL;
    gen_fun *gf;
    Polyhedron *P_orig = P;

    if (emptyQ2(P))
	return new gen_fun(Empty_Polyhedron(nparam));

    if (P->NbEq != 0)
	remove_all_equalities(&P, NULL, &CP, NULL, nparam, options->MaxRays);
    assert(emptyQ2(P) || P->NbEq == 0);
    if (CP)
	nparam = CP->NbColumns-1;

    if (nparam == 0) {
	Value c;
	value_init(c);
	barvinok_count_with_options(P, &c, options);
	gf = new gen_fun(c);
	value_clear(c);
    } else {
	POL_ENSURE_VERTICES(P);
	if (P->NbEq)
	    gf = enumerate_series(P, nparam, options);
	else {
	    gf_base *red;
	    red = gf_base::create(Polyhedron_Project(P, nparam),
				  P->Dimension, nparam, options);
	    red->start_gf(P, options);
	    gf = red->gf;
	    delete red;
	}
    }
    if (CP) {
	gf->substitute(CP);
	Matrix_Free(CP);
    }
    if (P != P_orig)
	Polyhedron_Free(P);
    return gf;
}

gen_fun *barvinok_enumerate_series(Polyhedron *P, unsigned nparam,
				    barvinok_options *options)
{
    if (emptyQ2(P))
	return new gen_fun(Empty_Polyhedron(nparam));

    assert(!Polyhedron_is_unbounded(P, nparam, options->MaxRays));
    assert(P->NbBid == 0);
    assert(Polyhedron_has_revlex_positive_rays(P, nparam));
    return enumerate_series(P, nparam, options);
}

gen_fun * barvinok_series_with_options(Polyhedron *P, Polyhedron* C,
				       barvinok_options *options)
{
    Polyhedron *CA;
    unsigned nparam = C->Dimension;
    gen_fun *gf;

    CA = align_context(C, P->Dimension, options->MaxRays);
    P = DomainIntersection(P, CA, options->MaxRays);
    Polyhedron_Free(CA);

    gf = barvinok_enumerate_series(P, nparam, options);
    Polyhedron_Free(P);

    return gf;
}

gen_fun * barvinok_series(Polyhedron *P, Polyhedron* C, unsigned MaxRays)
{
    gen_fun *gf;
    barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = MaxRays;
    gf = barvinok_series_with_options(P, C, options);
    barvinok_options_free(options);
    return gf;
}

gen_fun* barvinok_enumerate_union_series_with_options(Polyhedron *D, Polyhedron* C, 
						      barvinok_options *options)
{
    Polyhedron *CA;
    gen_fun *gf = NULL, *gf2;
    unsigned nparam = C->Dimension;

    CA = align_context(C, D->Dimension, options->MaxRays);
    D = DomainIntersection(D, CA, options->MaxRays);
    Polyhedron_Free(CA);

    for (Polyhedron *P = D; P; P = P->next) {
	assert(P->Dimension == D->Dimension);
	gen_fun *P_gf;

	P_gf = barvinok_enumerate_series(P, P->Dimension, options);
	if (!gf)
	    gf = P_gf;
	else {
	    gf->add_union(P_gf, options);
	    delete P_gf;
	}
    }
    /* we actually only need the convex union of the parameter space
     * but the reducer classes currently expect a polyhedron in
     * the combined space
     */
    Polyhedron_Free(gf->context);
    gf->context = DomainConvex(D, options->MaxRays);

    gf2 = gf->summate(D->Dimension - nparam, options);

    delete gf;
    Domain_Free(D);
    return gf2;
}

gen_fun* barvinok_enumerate_union_series(Polyhedron *D, Polyhedron* C, 
					 unsigned MaxRays)
{
    gen_fun *gf;
    barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = MaxRays;
    gf = barvinok_enumerate_union_series_with_options(D, C, options);
    barvinok_options_free(options);
    return gf;
}

/* Unimodularly transform the polyhedron P, such that
 * the direction specified by dir corresponds to the last
 * variable in the transformed polyhedron.
 * The number of variables is given by the length of dir.
 */
static Polyhedron *put_direction_last(Polyhedron *P, Vector *dir,
				      unsigned MaxRays)
{
    Polyhedron *R;
    Matrix *T;
    int n = dir->Size;

    T = Matrix_Alloc(P->Dimension+1, P->Dimension+1);
    T->NbColumns = T->NbRows = n;
    Vector_Copy(dir->p, T->p[0], n);
    unimodular_complete(T, 1);
    Vector_Exchange(T->p[0], T->p[n-1], n);
    T->NbColumns = T->NbRows = P->Dimension+1;
    for (int j = n; j < P->Dimension+1; ++j)
	value_set_si(T->p[j][j], 1);

    R = Polyhedron_Image(P, T, MaxRays);
    Matrix_Free(T);

    return R;
}

/* Do we need to continue shifting and subtracting?
 * i is the number of times we shifted so far
 * n is the number of coordinates projected out
 */
static bool more_shifts_needed(int j, int n,
				gen_fun *S, gen_fun *S_divide, const vec_ZZ& up,
				barvinok_options *options)
{
    bool empty;
    gen_fun *hp;

    /* For the 2-dimensional case, we need to subtract at most once */
    if (n == 2 && j > 0)
	return false;

    S_divide->shift(up);

    /* Assume that we have to subtract at least once */
    if (j == 0)
	return true;

    hp = S->Hadamard_product(S_divide, options);

    empty = hp->is_zero();
    delete hp;

    return !empty;
}

static gen_fun *project(Polyhedron *P, unsigned n, barvinok_options *options,
			int free_P);

/* Return gf of P projected on last dim(P)-n coordinates, i.e.,
 * project out the first n coordinates.
 *
 * Assumes P has no equalities.
 */
static gen_fun *project_full_dim(Polyhedron *P, unsigned n,
	barvinok_options *options)
{
    QQ one(1, 1);
    QQ mone(-1, 1);
    vec_ZZ up;
    gen_fun *gf = NULL;
    struct width_direction_array *dirs;
    Polyhedron *U;

    if (n == 0)
	return barvinok_enumerate_series(P, P->Dimension, options);

    up.SetLength(P->Dimension - (n-1));
    up[0] = 1;
    for (int i = 1; i < P->Dimension - (n-1); ++i)
	up[i] = 0;

    if (n == 1) {
	gen_fun *S, *S_shift, *hp;

	S = barvinok_enumerate_series(P, P->Dimension, options);
	S_shift = new gen_fun(S);
	S_shift->shift(up);
	hp = S->Hadamard_product(S_shift, options);
	S->add(mone, hp, options);
	delete S_shift;
	delete hp;

	gf = S->summate(1, options);
	delete S;

	return gf;
    }

    U = Universe_Polyhedron(P->Dimension - n);
    dirs = Polyhedron_Lattice_Width_Directions(P, U, options);
    Polyhedron_Free(U);

    for (int i = 0; i < dirs->n; ++i) {
	Polyhedron *Pi, *R;
	Polyhedron *CA;
	gen_fun *S, *S_shift, *S_divide, *sum;

	CA = align_context(dirs->wd[i].domain, P->Dimension, options->MaxRays);
	R = DomainIntersection(P, CA, options->MaxRays);
	Polyhedron_Free(CA);
	assert(dirs->wd[i].dir->Size == n);
	Pi = put_direction_last(R, dirs->wd[i].dir, options->MaxRays);
	Polyhedron_Free(R);

	S = project(Pi, n-1, options, 1);

	S_shift = new gen_fun(S);
	S_divide = new gen_fun(S);
	S_divide->divide(up);

	for (int j = 0; more_shifts_needed(j, n, S, S_divide, up, options); ++j) {
	    gen_fun *hp;

	    S_shift->shift(up);
	    hp = S->Hadamard_product(S_shift, options);
	    S->add(mone, hp, options);

	    delete hp;
	}

	sum = S->summate(1, options);

	delete S_shift;
	delete S_divide;
	delete S;

	if (!gf)
	    gf = sum;
	else {
	    gf->add(one, sum, options);
	    delete sum;
	}
    }
    free_width_direction_array(dirs);

    return gf;
}

/* Return gf of P projected on last dim(P)-n coordinates, i.e.,
 * project out the first n coordinates.
 */
static gen_fun *project(Polyhedron *P, unsigned n, barvinok_options *options,
			int free_P)
{
    Matrix *CP = NULL;
    gen_fun *proj;
    unsigned nparam = P->Dimension - n;

    if (P->NbEq != 0) {
	Polyhedron *Q = P;
	remove_all_equalities(&P, NULL, &CP, NULL, nparam, options->MaxRays);
	if (CP)
	    nparam = CP->NbColumns - 1;
	n = P->Dimension - nparam;
	if (free_P)
	    Polyhedron_Free(Q);
	free_P = 1;
    }

    if (emptyQ(P))
	proj = new gen_fun(Empty_Polyhedron(nparam));
    else
	proj = project_full_dim(P, n, options);
    if (CP) {
	proj->substitute(CP);
	Matrix_Free(CP);
    }

    if (free_P)
	Polyhedron_Free(P);
    
    return proj;
}

gen_fun *barvinok_enumerate_e_series(Polyhedron *P,
		  unsigned exist, unsigned nparam, barvinok_options *options)
{
    Polyhedron *P_orig = P;
    gen_fun *gf, *proj;
    unsigned nvar = P->Dimension - exist - nparam;

    if (exist == 0)
	return barvinok_enumerate_series(P, nparam, options);

    if (emptyQ(P))
	return new gen_fun(Empty_Polyhedron(nparam));

    assert(!Polyhedron_is_unbounded(P, nparam, options->MaxRays));
    assert(P->NbBid == 0);
    assert(Polyhedron_has_revlex_positive_rays(P, nparam));

    /* Move existentially quantified variables to the front.*/
    if (nvar) {
	Matrix *T;
	T = Matrix_Alloc(exist+nvar+nparam+1, nvar+exist+nparam+1);
	for (int i = 0; i < exist; ++i)
	    value_set_si(T->p[i][nvar+i], 1);
	for (int i = 0; i < nvar; ++i)
	    value_set_si(T->p[exist+i][i], 1);
	for (int i = 0; i < nparam+1; ++i)
	    value_set_si(T->p[exist+nvar+i][nvar+exist+i], 1);
	P = Polyhedron_Image(P, T, options->MaxRays);
	Matrix_Free(T);
    }
    proj = project(P, exist, options, P != P_orig);

    if (!nvar)
	gf = proj;
    else {
	gf = proj->summate(nvar, options);
	delete proj;
    }
    return gf;
}
