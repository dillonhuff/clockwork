#include <assert.h>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include <barvinok/options.h>
#include "scale.h"
#include "reduce_domain.h"
#include "param_util.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

/* If a vertex is described by A x + B p + c = 0, then
 * M = [A B] and we want to compute a linear transformation L such
 * that H L = A and H \Z contains both A \Z and B \Z.
 * We compute
 *             [ A B ] = [ H 0 ] [ U_11  U_12 ]
 *                               [ U_21  U_22 ]
 *
 * U_11 is the required linear transformation.
 * Note that this also works if M has more rows than there are variables,
 * i.e., if some rows in M are linear combinations of other rows.
 * These extra rows only affect and H and not U.
 */
static Lattice *extract_lattice(Matrix *M, unsigned nvar)
{
    int row;
    Matrix *H, *Q, *U, *Li;
    Lattice *L;
    int ok;

    left_hermite(M, &H, &Q, &U);
    Matrix_Free(U);

    Li = Matrix_Alloc(nvar+1, nvar+1);
    L = Matrix_Alloc(nvar+1, nvar+1);
    value_set_si(Li->p[nvar][nvar], 1);

    for (row = 0; row < nvar; ++row)
	Vector_Copy(Q->p[row], Li->p[row], nvar);
    Matrix_Free(H);
    Matrix_Free(Q);

    ok = Matrix_Inverse(Li, L);
    assert(ok);
    Matrix_Free(Li);

    return L;
}

/* Returns the smallest (wrt inclusion) lattice that contains both X and Y */
static Lattice *LatticeJoin(Lattice *X, Lattice *Y)
{
    int i;
    int dim = X->NbRows-1;
    Value lcm;
    Value tmp;
    Lattice *L;
    Matrix *M, *H, *U, *Q;

    assert(X->NbColumns-1 == dim);
    assert(Y->NbRows-1 == dim);
    assert(Y->NbColumns-1 == dim);

    value_init(lcm);
    value_init(tmp);

    M = Matrix_Alloc(dim, 2*dim);
    value_lcm(lcm, X->p[dim][dim], Y->p[dim][dim]);

    value_division(tmp, lcm, X->p[dim][dim]);
    for (i = 0; i < dim; ++i)
	Vector_Scale(X->p[i], M->p[i], tmp, dim);
    value_division(tmp, lcm, Y->p[dim][dim]);
    for (i = 0; i < dim; ++i)
	Vector_Scale(Y->p[i], M->p[i]+dim, tmp, dim);

    left_hermite(M, &H, &Q, &U);
    Matrix_Free(M);
    Matrix_Free(Q);
    Matrix_Free(U);

    L = Matrix_Alloc(dim+1, dim+1);
    value_assign(L->p[dim][dim], lcm);
    for (i = 0; i < dim; ++i)
	Vector_Copy(H->p[i], L->p[i], dim);
    Matrix_Free(H);

    value_clear(tmp);
    value_clear(lcm);
    return L;
}

static void Param_Vertex_Image(Param_Vertices *V, Matrix *T)
{
    unsigned nvar  = V->Vertex->NbRows;
    unsigned nparam = V->Vertex->NbColumns - 2;
    Matrix *Vertex;
    int i;

    Param_Vertex_Common_Denominator(V);
    Vertex = Matrix_Alloc(V->Vertex->NbRows, V->Vertex->NbColumns);
    Matrix_Product(T, V->Vertex, Vertex);
    for (i = 0; i < nvar; ++i) {
	value_assign(Vertex->p[i][nparam+1], V->Vertex->p[i][nparam+1]);
	Vector_Normalize(Vertex->p[i], nparam+2);
    }
    Matrix_Free(V->Vertex);
    V->Vertex = Vertex;
}

static void apply_expansion(Param_Polyhedron *PP, Polyhedron **P,
			    Matrix *expansion, unsigned MaxRays)
{
    int i;
    unsigned nparam = PP->V->Vertex->NbColumns - 2;
    unsigned nvar = PP->V->Vertex->NbRows;
    Vector *constraint;

    constraint = Vector_Alloc(nvar+nparam+1);
    for (i = 0; i < PP->Constraints->NbRows; ++i) {
	Vector_Matrix_Product(PP->Constraints->p[i]+1, expansion, constraint->p);
	Vector_Copy(constraint->p, PP->Constraints->p[i]+1, nvar+nparam+1);
	Vector_Normalize(PP->Constraints->p[i]+1, nvar+nparam+1);
    }
    Vector_Free(constraint);
    if (P)
	*P = Polyhedron_Preimage(*P, expansion, MaxRays);
}

/* Scales the parametric polyhedron with constraints *P and vertices PP
 * such that the number of integer points can be represented by a polynomial.
 * Both *P and P->Vertex are adapted according to the scaling.
 * The scaling factor is returned in *det.
 * The transformation that maps the new coordinates to the original
 * coordinates is returned in *Lat (if Lat != NULL).
 * The enumerator of the scaled parametric polyhedron should be divided
 * by this number to obtain an approximation of the enumerator of the
 * original parametric polyhedron.
 *
 * The algorithm is described in "Approximating Ehrhart Polynomials using
 * affine transformations" by B. Meister.
 */
void Param_Polyhedron_Scale_Integer_Slow(Param_Polyhedron *PP, Polyhedron **P,
				         Lattice **Lat,
					 Value *det, unsigned MaxRays)
{
    Param_Vertices *V;
    unsigned dim = (*P)->Dimension;
    unsigned nparam;
    unsigned nvar;
    Lattice *L = NULL, *Li;
    Matrix *T;
    Matrix *expansion;
    int i;
    int ok;

    if (!PP->nbV)
	return;

    nparam = PP->V->Vertex->NbColumns - 2;
    nvar = dim - nparam;

    for (V = PP->V; V; V = V->next) {
	Lattice *L2;
	Matrix *M;
	int i, j, n;
	unsigned *supporting;
	int ix;
	unsigned bx;

	supporting = supporting_constraints(PP->Constraints, V, &n);
	M = Matrix_Alloc(n, PP->Constraints->NbColumns-2);
	for (i = 0, j = 0, ix = 0, bx = MSB; i < PP->Constraints->NbRows; ++i) {
	    if (supporting[ix] & bx)
		Vector_Copy(PP->Constraints->p[i]+1, M->p[j++],
			    PP->Constraints->NbColumns-2);
	    NEXT(ix, bx);
	}
	free(supporting);
	L2 = extract_lattice(M, nvar);
	Matrix_Free(M);

	if (!L)
	    L = L2;
	else {
	    Lattice *L3 = LatticeJoin(L, L2);
	    Matrix_Free(L);
	    Matrix_Free(L2);
	    L = L3;
	}
    }

    if (Lat)
	*Lat = Matrix_Copy(L);

    /* apply the variable expansion to the polyhedron (constraints) */
    expansion = Matrix_Alloc(nvar + nparam + 1,  nvar + nparam + 1);
    for (i = 0; i < nvar; ++i)
	Vector_Copy(L->p[i], expansion->p[i], nvar);
    for (i = nvar; i < nvar+nparam+1; ++i)
	value_assign(expansion->p[i][i], L->p[nvar][nvar]);

    apply_expansion(PP, P, expansion, MaxRays);
    Matrix_Free(expansion);

    /* apply the variable expansion to the parametric vertices */
    Li = Matrix_Alloc(nvar+1, nvar+1);
    ok = Matrix_Inverse(L, Li);
    assert(ok);
    Matrix_Free(L);
    assert(value_one_p(Li->p[nvar][nvar]));
    T = Matrix_Alloc(nvar, nvar);
    value_set_si(*det, 1);
    for (i = 0; i < nvar; ++i) {
	value_multiply(*det, *det, Li->p[i][i]);
	Vector_Copy(Li->p[i], T->p[i], nvar);
    }
    Matrix_Free(Li);
    for (V = PP->V; V; V = V->next)
	Param_Vertex_Image(V, T);
    Matrix_Free(T);
}

/* Scales the parametric polyhedron with constraints *P and vertices PP
 * such that the number of integer points can be represented by a polynomial.
 * Both *P and P->Vertex are adapted according to the scaling.
 * The scaling factor is returned in *det.
 * The transformation that maps the new coordinates to the original
 * coordinates is returned in *Lat (if Lat != NULL).
 * The enumerator of the scaled parametric polyhedron should be divided
 * by this number to obtain an approximation of the enumerator of the
 * original parametric polyhedron.
 *
 * The algorithm is described in "Approximating Ehrhart Polynomials using
 * affine transformations" by B. Meister.
 */
void Param_Polyhedron_Scale_Integer_Fast(Param_Polyhedron *PP, Polyhedron **P,
				         Lattice **Lat,
					 Value *det, unsigned MaxRays)
{
  int i;
  int nb_param, nb_vars;
  Vector *denoms;
  Param_Vertices *V;
  Value global_var_lcm;
  Value tmp;
  Matrix *expansion;

  value_set_si(*det, 1);
  if (!PP->nbV)
    return;

  nb_param = PP->D->Domain->Dimension;
  nb_vars = PP->V->Vertex->NbRows;

  /* Scan the vertices and make an orthogonal expansion of the variable
     space */
  /* a- prepare the array of common denominators */
  denoms = Vector_Alloc(nb_vars);
  value_init(global_var_lcm);

  value_init(tmp);
  /* b- scan the vertices and compute the variables' global lcms */
  for (V = PP->V; V; V = V->next) {
    for (i = 0; i < nb_vars; i++) {
      Vector_Gcd(V->Vertex->p[i], nb_param, &tmp);
      value_gcd(tmp, tmp, V->Vertex->p[i][nb_param+1]);
      value_division(tmp, V->Vertex->p[i][nb_param+1], tmp);
      Lcm3(denoms->p[i], tmp, &denoms->p[i]);
    }
  }
  value_clear(tmp);

  value_set_si(global_var_lcm, 1);
  for (i = 0; i < nb_vars; i++) {
    value_multiply(*det, *det, denoms->p[i]);
    Lcm3(global_var_lcm, denoms->p[i], &global_var_lcm);
  }

  /* scale vertices */
  for (V = PP->V; V; V = V->next)
    for (i = 0; i < nb_vars; i++) {
      Vector_Scale(V->Vertex->p[i], V->Vertex->p[i], denoms->p[i], nb_param+1);
      Vector_Normalize(V->Vertex->p[i], nb_param+2);
    }

  /* the expansion can be actually writen as global_var_lcm.L^{-1} */
  /* this is equivalent to multiply the rows of P by denoms_det */
  for (i = 0; i < nb_vars; i++)
    value_division(denoms->p[i], global_var_lcm, denoms->p[i]);

  /* OPT : we could use a vector instead of a diagonal matrix here (c- and d-).*/
  /* c- make the quick expansion matrix */
  expansion = Matrix_Alloc(nb_vars+nb_param+1, nb_vars+nb_param+1);
  for (i = 0; i < nb_vars; i++)
    value_assign(expansion->p[i][i], denoms->p[i]);
  for (i = nb_vars; i < nb_vars+nb_param+1; i++)
    value_assign(expansion->p[i][i], global_var_lcm);

  /* d- apply the variable expansion to the polyhedron */
  apply_expansion(PP, P, expansion, MaxRays);

  if (Lat) {
    Lattice *L = Matrix_Alloc(nb_vars+1, nb_vars+1);
    for (i = 0; i < nb_vars; ++i)
	value_assign(L->p[i][i], denoms->p[i]);
    value_assign(L->p[nb_vars][nb_vars], global_var_lcm);
    *Lat = L;
  }

  Matrix_Free(expansion);
  value_clear(global_var_lcm);
  Vector_Free(denoms);
}

/* Compute negated sum of all positive or negative coefficients in a row */
static void negated_sum(Value *v, int len, int negative, Value *sum)
{
    int j;

    value_set_si(*sum, 0);
    for (j = 0; j < len; ++j)
	if (negative ? value_neg_p(v[j]) : value_pos_p(v[j]))
	    value_subtract(*sum, *sum, v[j]);
}

/* adapted from mpolyhedron_inflate in PolyLib */
Polyhedron *Polyhedron_Flate(Polyhedron *P, unsigned nparam, int inflate,
			     unsigned MaxRays)
{
    Value sum;
    int nvar = P->Dimension - nparam;
    Matrix *C = Polyhedron2Constraints(P);
    Polyhedron *P2;
    int i;

    value_init(sum);
    /* subtract the sum of the negative coefficients of each inequality */
    for (i = 0; i < C->NbRows; ++i) {
	negated_sum(C->p[i]+1, nvar, inflate, &sum);
	value_addto(C->p[i][1+P->Dimension], C->p[i][1+P->Dimension], sum);
    }
    value_clear(sum);
    P2 = Constraints2Polyhedron(C, MaxRays);
    Matrix_Free(C);

    if (inflate) {
	Polyhedron *C, *CA;
	C = Polyhedron_Project(P, nparam);
	CA = align_context(C, P->Dimension, MaxRays);
	P = P2;
	P2 = DomainIntersection(P, CA, MaxRays);
	Polyhedron_Free(C);
	Polyhedron_Free(CA);
	Polyhedron_Free(P);
    }

    return P2;
}

static Polyhedron *flate_narrow2(Polyhedron *P, Lattice *L,
				 unsigned nparam, int inflate,
				 unsigned MaxRays)
{
    Value sum;
    unsigned nvar = P->Dimension - nparam;
    Matrix *expansion;
    Matrix *C;
    int i;
    Polyhedron *P2;

    expansion = Matrix_Alloc(nvar + nparam + 1,  nvar + nparam + 1);
    for (i = 0; i < nvar; ++i)
	Vector_Copy(L->p[i], expansion->p[i], nvar);
    for (i = nvar; i < nvar+nparam+1; ++i)
	value_assign(expansion->p[i][i], L->p[nvar][nvar]);

    C = Matrix_Alloc(P->NbConstraints+1, 1+P->Dimension+1);
    value_init(sum);
    for (i = 0; i < P->NbConstraints; ++i) {
	negated_sum(P->Constraint[i]+1, nvar, inflate, &sum);
	value_assign(C->p[i][0], P->Constraint[i][0]);
	Vector_Matrix_Product(P->Constraint[i]+1, expansion, C->p[i]+1);
	if (value_zero_p(sum))
	    continue;
	Vector_Copy(C->p[i]+1, C->p[i+1]+1, P->Dimension+1);
	value_addmul(C->p[i][1+P->Dimension], sum, L->p[nvar][nvar]);
	ConstraintSimplify(C->p[i], C->p[i], P->Dimension+2, &sum);
	ConstraintSimplify(C->p[i+1], C->p[i+1], P->Dimension+2, &sum);
	if (value_ne(C->p[i][1+P->Dimension], C->p[i+1][1+P->Dimension])) {
	    if (inflate)
		value_decrement(C->p[i][1+P->Dimension], C->p[i][1+P->Dimension]);
	    else
		value_increment(C->p[i][1+P->Dimension], C->p[i][1+P->Dimension]);
	}
    }
    value_clear(sum);
    C->NbRows--;
    P2 = Constraints2Polyhedron(C, MaxRays);
    Matrix_Free(C);

    Matrix_Free(expansion);

    if (inflate) {
	Polyhedron *C, *CA;
	C = Polyhedron_Project(P, nparam);
	CA = align_context(C, P->Dimension, MaxRays);
	P = P2;
	P2 = DomainIntersection(P, CA, MaxRays);
	Polyhedron_Free(C);
	Polyhedron_Free(CA);
	Polyhedron_Free(P);
    }

    return P2;
}

static void linear_min(Polyhedron *D, Value *obj, Value *min)
{
    int i;
    Value tmp;
    value_init(tmp);
    POL_ENSURE_VERTICES(D);
    for (i = 0; i < D->NbRays; ++i) {
	Inner_Product(obj, D->Ray[i]+1, D->Dimension, &tmp);
	mpz_cdiv_q(tmp, tmp, D->Ray[i][1+D->Dimension]);
	if (!i || value_lt(tmp, *min))
	    value_assign(*min, tmp);
    }
    value_clear(tmp);
}

static Polyhedron *inflate_deflate_domain(Lattice *L, unsigned MaxRays)
{
    unsigned nvar = L->NbRows-1;
    int i;
    Matrix *M;
    Polyhedron *D;

    M = Matrix_Alloc(2*nvar, 1+nvar+1);
    for (i = 0; i < nvar; ++i) {
	value_set_si(M->p[2*i][0], 1);
	Vector_Copy(L->p[i], M->p[2*i]+1, nvar);
	Vector_Normalize(M->p[2*i]+1, nvar);

	value_set_si(M->p[2*i+1][0], 1);
	Vector_Oppose(L->p[i], M->p[2*i+1]+1, nvar);
	value_assign(M->p[2*i+1][1+nvar], L->p[nvar][nvar]);
	Vector_Normalize(M->p[2*i+1]+1, nvar+1);
	value_decrement(M->p[2*i+1][1+nvar], M->p[2*i+1][1+nvar]);
    }
    D = Constraints2Polyhedron(M, MaxRays);
    Matrix_Free(M);

    return D;
}

static Polyhedron *flate_narrow(Polyhedron *P, Lattice *L,
				unsigned nparam, int inflate, unsigned MaxRays)
{
    int i;
    unsigned nvar = P->Dimension - nparam;
    Vector *obj;
    Value min;
    Matrix *C;
    Polyhedron *D;
    Polyhedron *P2;

    D = inflate_deflate_domain(L, MaxRays);
    value_init(min);
    obj = Vector_Alloc(nvar);
    C = Polyhedron2Constraints(P);

    for (i = 0; i < C->NbRows; ++i) {
	if (inflate)
	    Vector_Copy(C->p[i]+1, obj->p, nvar);
	else
	    Vector_Oppose(C->p[i]+1, obj->p, nvar);
	linear_min(D, obj->p, &min);
	if (inflate)
	    value_subtract(C->p[i][1+P->Dimension], C->p[i][1+P->Dimension], min);
	else
	    value_addto(C->p[i][1+P->Dimension], C->p[i][1+P->Dimension], min);
    }

    Polyhedron_Free(D);
    P2 = Constraints2Polyhedron(C, MaxRays);
    Matrix_Free(C);
    Vector_Free(obj);
    value_clear(min);

    if (inflate) {
	Polyhedron *C, *CA;
	C = Polyhedron_Project(P, nparam);
	CA = align_context(C, P->Dimension, MaxRays);
	P = P2;
	P2 = DomainIntersection(P, CA, MaxRays);
	Polyhedron_Free(C);
	Polyhedron_Free(CA);
	Polyhedron_Free(P);
    }

    return P2;
}

static Polyhedron *flate(Polyhedron *P, Lattice *L,
			 unsigned nparam, int inflate,
			 struct barvinok_options *options)
{
    if (options->approx->scale_flags & BV_APPROX_SCALE_NARROW2)
	return flate_narrow2(P, L, nparam, inflate, options->MaxRays);
    else if (options->approx->scale_flags & BV_APPROX_SCALE_NARROW)
	return flate_narrow(P, L, nparam, inflate, options->MaxRays);
    else
	return Polyhedron_Flate(P, nparam, inflate, options->MaxRays);
}

static void Param_Polyhedron_Scale(Param_Polyhedron *PP, Polyhedron **P,
				   Lattice **L,
				   Value *det, struct barvinok_options *options)
{
    if (options->approx->scale_flags & BV_APPROX_SCALE_FAST)
	Param_Polyhedron_Scale_Integer_Fast(PP, P, L, det, options->MaxRays);
    else
	Param_Polyhedron_Scale_Integer_Slow(PP, P, L, det, options->MaxRays);
}

static evalue *enumerate_flated(Polyhedron *P, Polyhedron *C, Lattice *L,
				struct barvinok_options *options)
{
    unsigned nparam = C->Dimension;
    evalue *eres;
    int save_approximation = options->approx->approximation;

    if (options->approx->approximation == BV_APPROX_SIGN_UPPER)
	P = flate(P, L, nparam, 1, options);
    if (options->approx->approximation == BV_APPROX_SIGN_LOWER)
	P = flate(P, L, nparam, 0, options);

    /* Don't deflate/inflate again (on this polytope) */
    options->approx->approximation = BV_APPROX_SIGN_NONE;
    eres = barvinok_enumerate_with_options(P, C, options);
    options->approx->approximation = save_approximation;
    Polyhedron_Free(P);

    return eres;
}

static evalue *PP_enumerate_narrow_flated(Param_Polyhedron *PP,
				       	  Polyhedron *P, Polyhedron *C,
				       	  struct barvinok_options *options)
{
    Polyhedron *Porig = P;
    int scale_narrow2 = options->approx->scale_flags & BV_APPROX_SCALE_NARROW2;
    Lattice *L = NULL;
    Value det;
    evalue *eres;

    value_init(det);
    value_set_si(det, 1);

    Param_Polyhedron_Scale(PP, &P, &L, &det, options);
    Param_Polyhedron_Free(PP);
    if (scale_narrow2) {
	Polyhedron_Free(P);
	P = Porig;
    }
    /* Don't scale again (on this polytope) */
    options->approx->method = BV_APPROX_NONE;
    eres = enumerate_flated(P, C, L, options);
    options->approx->method = BV_APPROX_SCALE;
    Matrix_Free(L);
    if (P != Porig)
	Polyhedron_Free(P);
    if (value_notone_p(det))
	evalue_div(eres, det);
    value_clear(det);
    return eres;
}

#define INT_BITS (sizeof(unsigned) * 8)

static Param_Polyhedron *Param_Polyhedron_Domain(Param_Polyhedron *PP,
						 Param_Domain *D,
						 Polyhedron *rVD)
{
    int nv;
    Param_Polyhedron *PP_D;
    int i, ix;
    unsigned bx;
    Param_Vertices **next, *V;
    int facet_len = (PP->Constraints->NbRows+INT_BITS-1)/INT_BITS;

    PP_D = ALLOC(Param_Polyhedron);
    PP_D->D = ALLOC(Param_Domain);
    PP_D->D->next = NULL;
    PP_D->D->Domain = Domain_Copy(rVD);
    PP_D->V = NULL;
    PP_D->Constraints = Matrix_Copy(PP->Constraints);
    PP_D->Rays = NULL;

    nv = (PP->nbV - 1)/(8*sizeof(int)) + 1;
    PP_D->D->F = ALLOCN(unsigned, nv);
    memset(PP_D->D->F, 0, nv * sizeof(unsigned));

    next = &PP_D->V;
    i = 0;
    ix = 0;
    bx = MSB;
    FORALL_PVertex_in_ParamPolyhedron(V, D, PP)
	Param_Vertices *V2 = ALLOC(Param_Vertices);
	V2->Vertex = Matrix_Copy(V->Vertex);
	V2->Domain = NULL;
	V2->next = NULL;
	V2->Facets = ALLOCN(unsigned, facet_len);
	memcpy(V2->Facets, V->Facets, facet_len * sizeof(unsigned));
	*next = V2;
	next = &V2->next;
	PP_D->D->F[ix] |= bx;
	NEXT(ix, bx);
	++i;
    END_FORALL_PVertex_in_ParamPolyhedron;
    PP_D->nbV = i;

    return PP_D;
}

static evalue *enumerate_narrow_flated(Polyhedron *P, Polyhedron *C,
				        struct barvinok_options *options)
{
    unsigned Rat_MaxRays = options->MaxRays;
    Param_Polyhedron *PP;
    PP = Polyhedron2Param_Polyhedron(P, C, options);
    POL_UNSET(Rat_MaxRays, POL_INTEGER);

    if ((options->approx->scale_flags & BV_APPROX_SCALE_CHAMBER) && PP->D->next) {
	int nd = -1;
	evalue *tmp, *eres = NULL;
	Polyhedron *TC = true_context(P, C, options->MaxRays);

	FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, D, rVD)
	    Polyhedron *P2, *CA;
	    Param_Polyhedron *PP_D;
	    /* Intersect with D->Domain, so we only have the relevant constraints
	     * left.  Don't use rVD, though, since we still want to recognize
	     * the defining constraints of the parametric vertices.
	     */
	    CA = align_context(D->Domain, P->Dimension, options->MaxRays);
	    P2 = DomainIntersection(P, CA, Rat_MaxRays);
	    POL_ENSURE_VERTICES(P2);
	    Polyhedron_Free(CA);
	    /* Use rVD for context, to avoid overlapping domains in
	     * results of computations in different chambers.
	     */
	    PP_D = Param_Polyhedron_Domain(PP, D, rVD);
	    tmp = PP_enumerate_narrow_flated(PP_D, P2, rVD, options);
	    Polyhedron_Free(P2);
	    if (!eres)
		eres = tmp;
	    else {
		eadd(tmp, eres);
		free_evalue_refs(tmp);
		free(tmp);
	    }
	    Polyhedron_Free(rVD);
	END_FORALL_REDUCED_DOMAIN
	Param_Polyhedron_Free(PP);
	if (!eres)
	    eres = evalue_zero();
	Polyhedron_Free(TC);
	return eres;
    } else
	return PP_enumerate_narrow_flated(PP, P, C, options);
}

/* If scaling is to be performed in combination with deflation/inflation,
 * do both and return the result.
 * Otherwise return NULL.
 */
evalue *scale_bound(Polyhedron *P, Polyhedron *C,
		    struct barvinok_options *options)
{
    int scale_narrow = options->approx->scale_flags & BV_APPROX_SCALE_NARROW;
    int scale_narrow2 = options->approx->scale_flags & BV_APPROX_SCALE_NARROW2;

    if (options->approx->approximation == BV_APPROX_SIGN_NONE ||
        options->approx->approximation == BV_APPROX_SIGN_APPROX)
	return NULL;

    if (scale_narrow || scale_narrow2)
	return enumerate_narrow_flated(P, C, options);
    else
	return enumerate_flated(P, C, NULL, options);
}

evalue *scale(Param_Polyhedron *PP, Polyhedron *P, Polyhedron *C,
	      struct barvinok_options *options)
{
    Polyhedron *T = P;
    unsigned MaxRays;
    evalue *eres = NULL;
    Value det;

    if ((options->approx->scale_flags & BV_APPROX_SCALE_CHAMBER) && PP->D->next) {
	int nd = -1;
	evalue *tmp;
	Polyhedron *TC = true_context(P, C, options->MaxRays);

	FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, D, rVD)
	    Param_Polyhedron *PP_D = Param_Polyhedron_Domain(PP, D, rVD);
	    tmp = scale(PP_D, P, rVD, options);
	    if (!eres)
		eres = tmp;
	    else {
		eadd(tmp, eres);
		free_evalue_refs(tmp);
		free(tmp);
	    }
	    Param_Polyhedron_Free(PP_D);
	    Polyhedron_Free(rVD);
	END_FORALL_REDUCED_DOMAIN
	if (!eres)
	    eres = evalue_zero();
	Polyhedron_Free(TC);
	return eres;
    }

    value_init(det);
    value_set_si(det, 1);

    MaxRays = options->MaxRays;
    POL_UNSET(options->MaxRays, POL_INTEGER);
    Param_Polyhedron_Scale(PP, &T, NULL, &det, options);
    options->MaxRays = MaxRays;

    eres = Param_Polyhedron_Enumerate(PP, T, C, options);
    if (P != T)
	Polyhedron_Free(T);

    if (value_notone_p(det))
	evalue_div(eres, det);
    value_clear(det);

    return eres;
}
