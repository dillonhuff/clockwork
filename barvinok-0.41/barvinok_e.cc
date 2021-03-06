#include <assert.h>
#include <gmp.h>
#include <isl_set_polylib.h>
#include <barvinok/barvinok.h>
#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include "param_util.h"
#include "reduce_domain.h"
#include "config.h"

#define ALLOC(type) (type*)malloc(sizeof(type))

Polyhedron *unfringe (Polyhedron *P, unsigned MaxRays)
{
    int len = P->Dimension+2;
    Polyhedron *T, *R = P;
    Value g;
    value_init(g);
    Vector *row = Vector_Alloc(len);
    value_set_si(row->p[0], 1);

    R = DomainConstraintSimplify(Polyhedron_Copy(P), MaxRays);

    Matrix *M = Matrix_Alloc(2, len-1);
    value_set_si(M->p[1][len-2], 1);
    for (int v = 0; v < P->Dimension; ++v) {
	value_set_si(M->p[0][v], 1);
	Polyhedron *I = Polyhedron_Image(R, M, 2+1);
	value_set_si(M->p[0][v], 0);
	for (int r = 0; r < I->NbConstraints; ++r) {
	    if (value_zero_p(I->Constraint[r][0]))
		continue;
	    if (value_zero_p(I->Constraint[r][1]))
		continue;
	    if (value_one_p(I->Constraint[r][1]))
		continue;
	    if (value_mone_p(I->Constraint[r][1]))
		continue;
	    value_absolute(g, I->Constraint[r][1]);
	    Vector_Set(row->p+1, 0, len-2);
	    value_division(row->p[1+v], I->Constraint[r][1], g);
	    mpz_fdiv_q(row->p[len-1], I->Constraint[r][2], g);
	    T = R;
	    R = AddConstraints(row->p, 1, R, MaxRays);
	    if (T != P)
		Polyhedron_Free(T);
	}
	Polyhedron_Free(I);
    }
    Matrix_Free(M);
    Vector_Free(row);
    value_clear(g);
    return R;
}

/* Construct a constraint c from constraints l and u such that if
 * if constraint c holds then for each value of the other variables
 * there is at most one value of variable pos (position pos+1 in the constraints).
 *
 * Given a lower and an upper bound
 *	    n_l v_i + <c_l,x> + c_l >= 0
 *	   -n_u v_i + <c_u,x> + c_u >= 0
 * the constructed constraint is
 *
 *	    -(n_l<c_u,x> + n_u<c_l,x>) + (-n_l c_u - n_u c_l + n_l n_u - 1)
 *
 * which is then simplified to remove the content of the non-constant coefficients
 *
 * len is the total length of the constraints.
 * v is a temporary variable that can be used by this procedure
 */
static void negative_test_constraint(Value *l, Value *u, Value *c, int pos,
				     int len, Value *v)
{
    value_oppose(*v, u[pos+1]);
    Vector_Combine(l+1, u+1, c+1, *v, l[pos+1], len-1);
    value_multiply(*v, *v, l[pos+1]);
    value_subtract(c[len-1], c[len-1], *v);
    value_set_si(*v, -1);
    Vector_Scale(c+1, c+1, *v, len-1);
    value_decrement(c[len-1], c[len-1]);
    ConstraintSimplify(c, c, len, v);
}

static bool parallel_constraints(Value *l, Value *u, Value *c, int pos,
				 int len)
{
    bool parallel;
    Value g1;
    Value g2;
    value_init(g1);
    value_init(g2);

    Vector_Gcd(&l[1+pos], len, &g1);
    Vector_Gcd(&u[1+pos], len, &g2);
    Vector_Combine(l+1+pos, u+1+pos, c+1, g2, g1, len);
    parallel = First_Non_Zero(c+1, len) == -1;

    value_clear(g1);
    value_clear(g2);

    return parallel;
}

static void negative_test_constraint7(Value *l, Value *u, Value *c, int pos,
				      int exist, int len, Value *v)
{
    Value g;
    value_init(g);

    Vector_Gcd(&u[1+pos], exist, v);
    Vector_Gcd(&l[1+pos], exist, &g);
    Vector_Combine(l+1, u+1, c+1, *v, g, len-1);
    value_multiply(*v, *v, g);
    value_subtract(c[len-1], c[len-1], *v);
    value_set_si(*v, -1);
    Vector_Scale(c+1, c+1, *v, len-1);
    value_decrement(c[len-1], c[len-1]);
    ConstraintSimplify(c, c, len, v);

    value_clear(g);
}

/* Turns a x + b >= 0 into a x + b <= -1
 *
 * len is the total length of the constraint.
 * v is a temporary variable that can be used by this procedure
 */
static void oppose_constraint(Value *c, int len, Value *v)
{
    value_set_si(*v, -1);
    Vector_Scale(c+1, c+1, *v, len-1);
    value_decrement(c[len-1], c[len-1]);
}

/* Split polyhedron P into two polyhedra *pos and *neg, where
 * existential variable i has at most one solution for each
 * value of the other variables in *neg.
 *
 * The splitting is performed using constraints l and u.
 *
 * nvar: number of set variables
 * row: temporary vector that can be used by this procedure
 * f: temporary value that can be used by this procedure
 */
static bool SplitOnConstraint(Polyhedron *P, int i, int l, int u,
			      int nvar, int MaxRays, Vector *row, Value& f,
			      Polyhedron **pos, Polyhedron **neg)
{
    negative_test_constraint(P->Constraint[l], P->Constraint[u],
			     row->p, nvar+i, P->Dimension+2, &f);
    *neg = AddConstraints(row->p, 1, P, MaxRays);
    POL_ENSURE_VERTICES(*neg);

    /* We found an independent, but useless constraint
     * Maybe we should detect this earlier and not
     * mark the variable as INDEPENDENT
     */
    if (emptyQ((*neg))) {
	Polyhedron_Free(*neg);
	return false;
    }

    oppose_constraint(row->p, P->Dimension+2, &f);
    *pos = AddConstraints(row->p, 1, P, MaxRays);
    POL_ENSURE_VERTICES(*pos);

    if (emptyQ((*pos))) {
	Polyhedron_Free(*neg);
	Polyhedron_Free(*pos);
	return false;
    }

    return true;
}

/*
 * unimodularly transform P such that constraint r is transformed
 * into a constraint that involves only a single (the first)
 * existential variable
 *
 */
static Polyhedron *rotate_along(Polyhedron *P, int r, int nvar, int exist,
				unsigned MaxRays)
{
    Value g;
    value_init(g);

    Matrix *M = Matrix_Alloc(exist, exist);
    Vector_Copy(P->Constraint[r]+1+nvar, M->p[0], exist);
    Vector_Gcd(M->p[0], exist, &g);
    if (value_notone_p(g))
	Vector_AntiScale(M->p[0], M->p[0], g, exist);
    value_clear(g);

    int ok = unimodular_complete(M, 1);
    assert(ok);
    Matrix *M2 = Matrix_Alloc(P->Dimension+1, P->Dimension+1);
    for (r = 0; r < nvar; ++r)
	value_set_si(M2->p[r][r], 1);
    for ( ; r < nvar+exist; ++r)
	Vector_Copy(M->p[r-nvar], M2->p[r]+nvar, exist);
    for ( ; r < P->Dimension+1; ++r)
	value_set_si(M2->p[r][r], 1);
    Polyhedron *T = Polyhedron_Image(P, M2, MaxRays);

    Matrix_Free(M2);
    Matrix_Free(M);

    return T;
}

/* Split polyhedron P into two polyhedra *pos and *neg, where
 * existential variable i has at most one solution for each
 * value of the other variables in *neg.
 *
 * If independent is set, then the two constraints on which the
 * split will be performed need to be independent of the other
 * existential variables.
 *
 * Return true if an appropriate split could be performed.
 *
 * nvar: number of set variables
 * exist: number of existential variables
 * row: temporary vector that can be used by this procedure
 * f: temporary value that can be used by this procedure
 */
static bool SplitOnVar(Polyhedron *P, int i, 
			      int nvar, int exist, int MaxRays,
			      Vector *row, Value& f, bool independent,
			      Polyhedron **pos, Polyhedron **neg)
{
    int j;

    for (int l = P->NbEq; l < P->NbConstraints; ++l) {
	if (value_negz_p(P->Constraint[l][nvar+i+1]))
	    continue;

	if (independent) {
	    for (j = 0; j < exist; ++j)
		if (j != i && value_notzero_p(P->Constraint[l][nvar+j+1]))
		    break;
	    if (j < exist)
		continue;
	}

	for (int u = P->NbEq; u < P->NbConstraints; ++u) {
	    if (value_posz_p(P->Constraint[u][nvar+i+1]))
		continue;

	    if (independent) {
		for (j = 0; j < exist; ++j)
		    if (j != i && value_notzero_p(P->Constraint[u][nvar+j+1]))
			break;
		if (j < exist)
		    continue;
	    }

	    if (SplitOnConstraint(P, i, l, u, nvar, MaxRays, row, f, pos, neg)) {
		if (independent) {
		    if (i != 0)
			Polyhedron_ExchangeColumns(*neg, nvar+1, nvar+1+i);
		}
		return true;
	    }
	}
    }

    return false;
}

enum constraint { 
ALL_POS = 1 << 0,
ONE_NEG = 1 << 1,
INDEPENDENT = 1 << 2,
ROT_NEG = 1 << 3
};

static evalue* enumerate_or(Polyhedron *D,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Or\n");
#endif /* DEBUG_ER */

    Polyhedron *N = D->next;
    D->next = 0;
    evalue *EP = 
	barvinok_enumerate_e_with_options(D, exist, nparam, options);
    Polyhedron_Free(D);

    for (D = N; D; D = N) {
	N = D->next;
	D->next = 0;

	evalue *EN = 
	    barvinok_enumerate_e_with_options(D, exist, nparam, options);

	eor(EN, EP);
	evalue_free(EN);
	Polyhedron_Free(D);
    }

    reduce_evalue(EP);

    return EP;
}

static evalue* enumerate_sum(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    int nvar = P->Dimension - exist - nparam;
    int toswap = nvar < exist ? nvar : exist;
    for (int i = 0; i < toswap; ++i)
	Polyhedron_ExchangeColumns(P, 1 + i, nvar+exist - i);
    nparam += nvar;

#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Sum\n");
#endif /* DEBUG_ER */

    evalue *EP = barvinok_enumerate_e_with_options(P, exist, nparam, options);

    evalue_split_domains_into_orthants(EP, options->MaxRays);
    reduce_evalue(EP);
    evalue_range_reduction(EP);

    evalue_frac2floor(EP);

    evalue *sum = barvinok_summate(EP, nvar, options);

    evalue_free(EP);
    EP = sum;

    evalue_range_reduction(EP);

    return EP;
}

static evalue* split_sure(Polyhedron *P, Polyhedron *S,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    int nvar = P->Dimension - exist - nparam;

    Matrix *M = Matrix_Alloc(exist, S->Dimension+2);
    for (int i = 0; i < exist; ++i)
	value_set_si(M->p[i][nvar+i+1], 1);
    Polyhedron *O = S;
    S = DomainAddRays(S, M, options->MaxRays);
    Polyhedron_Free(O);
    Polyhedron *F = DomainAddRays(P, M, options->MaxRays);
    Polyhedron *D = DomainDifference(F, S, options->MaxRays);
    O = D;
    D = Disjoint_Domain(D, 0, options->MaxRays);
    Polyhedron_Free(F);
    Domain_Free(O);
    Matrix_Free(M);

    M = Matrix_Alloc(P->Dimension+1-exist, P->Dimension+1);
    for (int j = 0; j < nvar; ++j)
	value_set_si(M->p[j][j], 1);
    for (int j = 0; j < nparam+1; ++j)
	value_set_si(M->p[nvar+j][nvar+exist+j], 1);
    Polyhedron *T = Polyhedron_Image(S, M, options->MaxRays);
    evalue *EP = barvinok_enumerate_e_with_options(T, 0, nparam, options);
    Polyhedron_Free(S);
    Polyhedron_Free(T);
    Matrix_Free(M);

    for (Polyhedron *Q = D; Q; Q = Q->next) {
	Polyhedron *N = Q->next;
	Q->next = 0;
	T = DomainIntersection(P, Q, options->MaxRays);
	evalue *E = barvinok_enumerate_e_with_options(T, exist, nparam, options);
	eadd(E, EP);
	evalue_free(E);
	Polyhedron_Free(T);
	Q->next = N;
    }
    Domain_Free(D);
    return EP;
}

static evalue* enumerate_sure(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    int i;
    Polyhedron *S = P;
    int nvar = P->Dimension - exist - nparam;
    Value lcm;
    Value f;
    value_init(lcm);
    value_init(f);

    for (i = 0; i < exist; ++i) {
	Matrix *M = Matrix_Alloc(S->NbConstraints, S->Dimension+2);
	int c = 0;
	value_set_si(lcm, 1);
	for (int j = 0; j < S->NbConstraints; ++j) {
	    if (value_negz_p(S->Constraint[j][1+nvar+i]))
		continue;
	    if (value_one_p(S->Constraint[j][1+nvar+i]))
		continue;
	    value_lcm(lcm, lcm, S->Constraint[j][1+nvar+i]);
	}

	for (int j = 0; j < S->NbConstraints; ++j) {
	    if (value_negz_p(S->Constraint[j][1+nvar+i]))
		continue;
	    if (value_one_p(S->Constraint[j][1+nvar+i]))
		continue;
	    value_division(f, lcm, S->Constraint[j][1+nvar+i]);
	    Vector_Scale(S->Constraint[j], M->p[c], f, S->Dimension+2);
	    value_subtract(M->p[c][S->Dimension+1], 
			    M->p[c][S->Dimension+1],
			    lcm);
	    value_increment(M->p[c][S->Dimension+1], 
			    M->p[c][S->Dimension+1]);
	    ++c;
	}
	Polyhedron *O = S;
	S = AddConstraints(M->p[0], c, S, options->MaxRays);
	if (O != P)
	    Polyhedron_Free(O);
	Matrix_Free(M);
	if (emptyQ(S)) {
	    Polyhedron_Free(S);
	    value_clear(lcm);
	    value_clear(f);
	    return 0;
	}
    }
    value_clear(lcm);
    value_clear(f);

#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Sure\n");
#endif /* DEBUG_ER */

    return split_sure(P, S, exist, nparam, options);
}

static evalue* enumerate_sure2(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    int nvar = P->Dimension - exist - nparam;
    int r;
    for (r = 0; r < P->NbRays; ++r)
	if (value_one_p(P->Ray[r][0]) &&
		value_one_p(P->Ray[r][P->Dimension+1]))
	    break;

    if (r >= P->NbRays)
	return 0;

    Matrix *M = Matrix_Alloc(nvar + 1 + nparam, P->Dimension+2);
    for (int i = 0; i < nvar; ++i)
	value_set_si(M->p[i][1+i], 1);
    for (int i = 0; i < nparam; ++i)
	value_set_si(M->p[i+nvar][1+nvar+exist+i], 1);
    Vector_Copy(P->Ray[r]+1+nvar, M->p[nvar+nparam]+1+nvar, exist);
    value_set_si(M->p[nvar+nparam][0], 1);
    value_set_si(M->p[nvar+nparam][P->Dimension+1], 1);
    Polyhedron * F = Rays2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    Polyhedron *I = DomainIntersection(F, P, options->MaxRays);
    Polyhedron_Free(F);

#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Sure2\n");
#endif /* DEBUG_ER */

    return split_sure(P, I, exist, nparam, options);
}

static evalue* enumerate_cyclic(Polyhedron *P,
			  unsigned exist, unsigned nparam, 
			  evalue * EP, int r, int p, unsigned MaxRays)
{
    int nvar = P->Dimension - exist - nparam;

    /* If EP in its fractional maps only contains references
     * to the remainder parameter with appropriate coefficients
     * then we could in principle avoid adding existentially
     * quantified variables to the validity domains.
     * We'd have to replace the remainder by m { p/m }
     * and multiply with an appropriate factor that is one
     * only in the appropriate range.
     * This last multiplication can be avoided if EP
     * has a single validity domain with no (further)
     * constraints on the remainder parameter
     */

    Matrix *CT = Matrix_Alloc(nparam+1, nparam+3);
    Matrix *M = Matrix_Alloc(1, 1+nparam+3);
    for (int j = 0; j < nparam; ++j)
	if (j != p)
	    value_set_si(CT->p[j][j], 1);
    value_set_si(CT->p[p][nparam+1], 1);
    value_set_si(CT->p[nparam][nparam+2], 1);
    value_set_si(M->p[0][1+p], -1);
    value_absolute(M->p[0][1+nparam], P->Ray[0][1+nvar+exist+p]);
    value_set_si(M->p[0][1+nparam+1], 1);
    Polyhedron *CEq = Constraints2Polyhedron(M, 1);
    Matrix_Free(M);
    addeliminatedparams_enum(EP, CT, CEq, MaxRays, nparam);
    Polyhedron_Free(CEq);
    Matrix_Free(CT);

    return EP;
}

static void enumerate_vd_add_ray(evalue *EP, Matrix *Rays, unsigned MaxRays)
{
    if (value_notzero_p(EP->d))
	return;

    assert(EP->x.p->type == partition);
    assert(EP->x.p->pos == EVALUE_DOMAIN(EP->x.p->arr[0])->Dimension);
    for (int i = 0; i < EP->x.p->size/2; ++i) {
	Polyhedron *D = EVALUE_DOMAIN(EP->x.p->arr[2*i]);
	Polyhedron *N = DomainAddRays(D, Rays, MaxRays);
	EVALUE_SET_DOMAIN(EP->x.p->arr[2*i], N);
	Domain_Free(D);
    }
}

static evalue* enumerate_line(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    if (P->NbBid == 0)
	return 0;

#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Line\n");
#endif /* DEBUG_ER */

    int nvar = P->Dimension - exist - nparam;
    int i, j;
    for (i = 0; i < nparam; ++i)
	if (value_notzero_p(P->Ray[0][1+nvar+exist+i]))
	    break;
    assert(i < nparam);
    for (j = i+1; j < nparam; ++j)
	if (value_notzero_p(P->Ray[0][1+nvar+exist+j]))
	    break;
    assert(j >= nparam); // for now

    Matrix *M = Matrix_Alloc(2, P->Dimension+2);
    value_set_si(M->p[0][0], 1);
    value_set_si(M->p[0][1+nvar+exist+i], 1);
    value_set_si(M->p[1][0], 1);
    value_set_si(M->p[1][1+nvar+exist+i], -1);
    value_absolute(M->p[1][1+P->Dimension], P->Ray[0][1+nvar+exist+i]);
    value_decrement(M->p[1][1+P->Dimension], M->p[1][1+P->Dimension]);
    Polyhedron *S = AddConstraints(M->p[0], 2, P, options->MaxRays);
    evalue *EP = barvinok_enumerate_e_with_options(S, exist, nparam, options);
    Polyhedron_Free(S);
    Matrix_Free(M);

    return enumerate_cyclic(P, exist, nparam, EP, 0, i, options->MaxRays);
}

static int single_param_pos(Polyhedron*P, unsigned exist, unsigned nparam, 
			    int r)
{
    int nvar = P->Dimension - exist - nparam;
    if (First_Non_Zero(P->Ray[r]+1, nvar) != -1)
	return -1;
    int i = First_Non_Zero(P->Ray[r]+1+nvar+exist, nparam);
    if (i == -1)
	return -1;
    if (First_Non_Zero(P->Ray[r]+1+nvar+exist+1, nparam-i-1) != -1)
	return -1;
    return i;
}

static evalue* enumerate_remove_ray(Polyhedron *P, int r,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
#ifdef DEBUG_ER
    fprintf(stderr, "\nER: RedundantRay\n");
#endif /* DEBUG_ER */

    Value one;
    value_init(one);
    value_set_si(one, 1);
    int len = P->NbRays-1;
    Matrix *M = Matrix_Alloc(2 * len, P->Dimension+2);
    Vector_Copy(P->Ray[0], M->p[0], r * (P->Dimension+2));
    Vector_Copy(P->Ray[r+1], M->p[r], (len-r) * (P->Dimension+2));
    for (int j = 0; j < P->NbRays; ++j) {
	if (j == r)
	    continue;
	Vector_Combine(P->Ray[j], P->Ray[r], M->p[len+j-(j>r)], 
		       one, P->Ray[j][P->Dimension+1], P->Dimension+2);
    }

    P = Rays2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    evalue *EP = barvinok_enumerate_e_with_options(P, exist, nparam, options);
    Polyhedron_Free(P);
    value_clear(one);

    return EP;
}

static evalue* enumerate_redundant_ray(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    assert(P->NbBid == 0);
    int nvar = P->Dimension - exist - nparam;
    Value m;
    value_init(m);

    for (int r = 0; r < P->NbRays; ++r) {
	if (value_notzero_p(P->Ray[r][P->Dimension+1]))
	    continue;
	int i1 = single_param_pos(P, exist, nparam, r);
	if (i1 == -1)
	    continue;
	for (int r2 = r+1; r2 < P->NbRays; ++r2) {
	    if (value_notzero_p(P->Ray[r2][P->Dimension+1]))
		continue;
	    int i2 = single_param_pos(P, exist, nparam, r2);
	    if (i2 == -1)
		continue;
	    if (i1 != i2)
		continue;

	    value_division(m, P->Ray[r][1+nvar+exist+i1], 
			      P->Ray[r2][1+nvar+exist+i1]);
	    value_multiply(m, m, P->Ray[r2][1+nvar+exist+i1]);
	    /* r2 divides r => r redundant */
	    if (value_eq(m, P->Ray[r][1+nvar+exist+i1])) {
		value_clear(m);
		return enumerate_remove_ray(P, r, exist, nparam, options);
	    }

	    value_division(m, P->Ray[r2][1+nvar+exist+i1], 
			      P->Ray[r][1+nvar+exist+i1]);
	    value_multiply(m, m, P->Ray[r][1+nvar+exist+i1]);
	    /* r divides r2 => r2 redundant */
	    if (value_eq(m, P->Ray[r2][1+nvar+exist+i1])) {
		value_clear(m);
		return enumerate_remove_ray(P, r2, exist, nparam, options);
	    }
	}
    }
    value_clear(m);
    return 0;
}

static Polyhedron *upper_bound(Polyhedron *P, 
                               int pos, Value *max, Polyhedron **R)
{
    Value v;
    int r;
    value_init(v);

    *R = 0;
    Polyhedron *N;
    Polyhedron *B = 0;
    for (Polyhedron *Q = P; Q; Q = N) {
	N = Q->next;
	for (r = 0; r < P->NbRays; ++r) {
	    if (value_zero_p(P->Ray[r][P->Dimension+1]) &&
		    value_pos_p(P->Ray[r][1+pos]))
		break;
	}
	if (r < P->NbRays) {
	    Q->next = *R;
	    *R = Q;
	    continue;
	} else {
	    Q->next = B;
	    B = Q;
	}
	for (r = 0; r < P->NbRays; ++r) {
	    if (value_zero_p(P->Ray[r][P->Dimension+1]))
		continue;
	    mpz_fdiv_q(v, P->Ray[r][1+pos], P->Ray[r][1+P->Dimension]);
	    if ((!Q->next && r == 0) || value_gt(v, *max))
		value_assign(*max, v);
	}
    }
    value_clear(v);
    return B;
}

static evalue* enumerate_ray(Polyhedron *P,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    assert(P->NbBid == 0);
    int nvar = P->Dimension - exist - nparam;

    int r;
    for (r = 0; r < P->NbRays; ++r)
	if (value_zero_p(P->Ray[r][P->Dimension+1]))
	    break;
    if (r >= P->NbRays)
	return 0;

    int r2;
    for (r2 = r+1; r2 < P->NbRays; ++r2)
	if (value_zero_p(P->Ray[r2][P->Dimension+1]))
	    break;
    if (r2 < P->NbRays) {
	if (nvar > 0)
	    return enumerate_sum(P, exist, nparam, options);
    }

#ifdef DEBUG_ER
    fprintf(stderr, "\nER: Ray\n");
#endif /* DEBUG_ER */

    Value m;
    Value one;
    value_init(m);
    value_init(one);
    value_set_si(one, 1);
    int i = single_param_pos(P, exist, nparam, r);
    assert(i != -1); // for now;

    Matrix *M = Matrix_Alloc(P->NbRays, P->Dimension+2);
    for (int j = 0; j < P->NbRays; ++j) {
	Vector_Combine(P->Ray[j], P->Ray[r], M->p[j], 
		       one, P->Ray[j][P->Dimension+1], P->Dimension+2);
    }
    Polyhedron *S = Rays2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    Polyhedron *D = DomainDifference(P, S, options->MaxRays);
    Polyhedron_Free(S);
    // Polyhedron_Print(stderr, P_VALUE_FMT, D);
    assert(value_pos_p(P->Ray[r][1+nvar+exist+i])); // for now
    Polyhedron *R;
    D = upper_bound(D, nvar+exist+i, &m, &R);
    assert(D);
    Domain_Free(D);

    M = Matrix_Alloc(2, P->Dimension+2);
    value_set_si(M->p[0][0], 1);
    value_set_si(M->p[1][0], 1);
    value_set_si(M->p[0][1+nvar+exist+i], -1);
    value_set_si(M->p[1][1+nvar+exist+i], 1);
    value_assign(M->p[0][1+P->Dimension], m);
    value_oppose(M->p[1][1+P->Dimension], m);
    value_addto(M->p[1][1+P->Dimension], M->p[1][1+P->Dimension], 
		P->Ray[r][1+nvar+exist+i]);
    value_decrement(M->p[1][1+P->Dimension], M->p[1][1+P->Dimension]);
    // Matrix_Print(stderr, P_VALUE_FMT, M);
    D = AddConstraints(M->p[0], 2, P, options->MaxRays);
    // Polyhedron_Print(stderr, P_VALUE_FMT, D);
    value_subtract(M->p[0][1+P->Dimension], M->p[0][1+P->Dimension], 
		    P->Ray[r][1+nvar+exist+i]);
    // Matrix_Print(stderr, P_VALUE_FMT, M);
    S = AddConstraints(M->p[0], 1, P, options->MaxRays);
    // Polyhedron_Print(stderr, P_VALUE_FMT, S);
    Matrix_Free(M);

    evalue *EP = barvinok_enumerate_e_with_options(D, exist, nparam, options);
    Polyhedron_Free(D);
    value_clear(one);
    value_clear(m);

    if (value_notone_p(P->Ray[r][1+nvar+exist+i]))
	EP = enumerate_cyclic(P, exist, nparam, EP, r, i, options->MaxRays);
    else {
	M = Matrix_Alloc(1, nparam+2);
	value_set_si(M->p[0][0], 1);
	value_set_si(M->p[0][1+i], 1);
	enumerate_vd_add_ray(EP, M, options->MaxRays);
	Matrix_Free(M);
    }

    if (!emptyQ(S)) {
	evalue *E = barvinok_enumerate_e_with_options(S, exist, nparam, options);
	eadd(E, EP);
	evalue_free(E);
    }
    Polyhedron_Free(S);

    if (R) {
	assert(nvar == 0);
	evalue *ER = enumerate_or(R, exist, nparam, options);
	eor(ER, EP);
	free_evalue_refs(ER);
	free(ER);
    }

    return EP;
}

static evalue* enumerate_vd(Polyhedron **PA,
		      unsigned exist, unsigned nparam, barvinok_options *options)
{
    Polyhedron *P = *PA;
    int nvar = P->Dimension - exist - nparam;
    Param_Polyhedron *PP = NULL;
    Polyhedron *C = Universe_Polyhedron(nparam);
    Polyhedron *PR = P;
    PP = Polyhedron2Param_Polyhedron(PR, C, options);
    Polyhedron_Free(C);

    int nd;
    Param_Domain *D, *last;
    Value c;
    value_init(c);
    for (nd = 0, D=PP->D; D; D=D->next, ++nd)
	;

    Polyhedron **VD = new Polyhedron *[nd];
    Polyhedron *TC = true_context(P, C, options->MaxRays);
    FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, D, rVD)
	VD[nd++] = rVD;
	last = D;
    END_FORALL_REDUCED_DOMAIN
    Polyhedron_Free(TC);

    evalue *EP = 0;

    if (nd == 0)
	EP = evalue_zero();

    /* This doesn't seem to have any effect */
    if (nd == 1) {
	Polyhedron *CA = align_context(VD[0], P->Dimension, options->MaxRays);
	Polyhedron *O = P;
	P = DomainIntersection(P, CA, options->MaxRays);
	if (O != *PA)
	    Polyhedron_Free(O);
	Polyhedron_Free(CA);
	if (emptyQ(P))
	    EP = evalue_zero();
    }

    if (PR != *PA)
	Polyhedron_Free(PR);
    PR = 0;

    if (!EP && nd > 1) {
#ifdef DEBUG_ER
	fprintf(stderr, "\nER: VD\n");
#endif /* DEBUG_ER */
	for (int i = 0; i < nd; ++i) {
	    Polyhedron *CA = align_context(VD[i], P->Dimension, options->MaxRays);
	    Polyhedron *I = DomainIntersection(P, CA, options->MaxRays);

	    if (i == 0)
		EP = barvinok_enumerate_e_with_options(I, exist, nparam, options);
	    else {
		evalue *E = barvinok_enumerate_e_with_options(I, exist, nparam,
							      options);
		eadd(E, EP);
		evalue_free(E);
	    }
	    Polyhedron_Free(I);
	    Polyhedron_Free(CA);
	}
    }

    for (int i = 0; i < nd; ++i)
	Polyhedron_Free(VD[i]);
    delete [] VD;
    value_clear(c);

    if (!EP && nvar == 0) {
	Value f;
	value_init(f);
	Param_Vertices *V, *V2;
	Matrix* M = Matrix_Alloc(1, P->Dimension+2);

	FORALL_PVertex_in_ParamPolyhedron(V, last, PP) {
	    bool found = false;
	    FORALL_PVertex_in_ParamPolyhedron(V2, last, PP) {
		if (V == V2) {
		    found = true;
		    continue;
		}
		if (!found)
		    continue;
		for (int i = 0; i < exist; ++i) {
		    value_oppose(f, V->Vertex->p[i][nparam+1]);
		    Vector_Combine(V->Vertex->p[i],
				   V2->Vertex->p[i],
				   M->p[0] + 1 + nvar + exist,
				   V2->Vertex->p[i][nparam+1],
				   f,
				   nparam+1);
		    int j;
		    for (j = 0; j < nparam; ++j)
			if (value_notzero_p(M->p[0][1+nvar+exist+j]))
			    break;
		    if (j >= nparam)
			continue;
		    ConstraintSimplify(M->p[0], M->p[0], 
				       P->Dimension+2, &f);
		    value_set_si(M->p[0][0], 0);
		    Polyhedron *para = AddConstraints(M->p[0], 1, P,
						      options->MaxRays);
		    POL_ENSURE_VERTICES(para);
		    if (emptyQ(para)) {
			Polyhedron_Free(para);
			continue;
		    }
		    Polyhedron *pos, *neg;
		    value_set_si(M->p[0][0], 1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    neg = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    value_set_si(f, -1);
		    Vector_Scale(M->p[0]+1, M->p[0]+1, f, 
				 P->Dimension+1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    pos = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    POL_ENSURE_VERTICES(neg);
		    POL_ENSURE_VERTICES(pos);
		    if (emptyQ(neg) && emptyQ(pos)) {
			Polyhedron_Free(para);
			Polyhedron_Free(pos);
			Polyhedron_Free(neg);
			continue;
		    }
#ifdef DEBUG_ER
		    fprintf(stderr, "\nER: Order\n");
#endif /* DEBUG_ER */
		    EP = barvinok_enumerate_e_with_options(para, exist, nparam,
							   options);
		    evalue *E;
		    if (!emptyQ(pos)) {
			E = barvinok_enumerate_e_with_options(pos, exist, nparam,
								options);
			eadd(E, EP);
			evalue_free(E);
		    }
		    if (!emptyQ(neg)) {
			E = barvinok_enumerate_e_with_options(neg, exist, nparam,
								options);
			eadd(E, EP);
			evalue_free(E);
		    }
		    Polyhedron_Free(para);
		    Polyhedron_Free(pos);
		    Polyhedron_Free(neg);
		    break;
		}
		if (EP)
		    break;
	    } END_FORALL_PVertex_in_ParamPolyhedron;
	    if (EP)
		break;
	} END_FORALL_PVertex_in_ParamPolyhedron;

	if (!EP) {
	    /* Search for vertex coordinate to split on */
	    /* First look for one independent of the parameters */
	    FORALL_PVertex_in_ParamPolyhedron(V, last, PP) {
		for (int i = 0; i < exist; ++i) {
		    int j;
		    for (j = 0; j < nparam; ++j)
			if (value_notzero_p(V->Vertex->p[i][j]))
			    break;
		    if (j < nparam)
			continue;
		    value_set_si(M->p[0][0], 1);
		    Vector_Set(M->p[0]+1, 0, nvar+exist);
		    Vector_Copy(V->Vertex->p[i], 
				M->p[0] + 1 + nvar + exist, nparam+1);
		    value_oppose(M->p[0][1+nvar+i], 
				 V->Vertex->p[i][nparam+1]);

		    Polyhedron *pos, *neg;
		    value_set_si(M->p[0][0], 1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    neg = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    value_set_si(f, -1);
		    Vector_Scale(M->p[0]+1, M->p[0]+1, f, 
				 P->Dimension+1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    pos = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    POL_ENSURE_VERTICES(neg);
		    POL_ENSURE_VERTICES(pos);
		    if (emptyQ(neg) || emptyQ(pos)) {
			Polyhedron_Free(pos);
			Polyhedron_Free(neg);
			continue;
		    }
		    Polyhedron_Free(pos);
		    value_increment(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    pos = AddConstraints(M->p[0], 1, P, options->MaxRays);
#ifdef DEBUG_ER
		    fprintf(stderr, "\nER: Vertex\n");
#endif /* DEBUG_ER */
		    pos->next = neg;
		    EP = enumerate_or(pos, exist, nparam, options);
		    break;
		}
		if (EP)
		    break;
	    } END_FORALL_PVertex_in_ParamPolyhedron;
	}

	if (!EP) {
	    /* Search for vertex coordinate to split on */
	    /* Now look for one that depends on the parameters */
	    FORALL_PVertex_in_ParamPolyhedron(V, last, PP) {
		for (int i = 0; i < exist; ++i) {
		    value_set_si(M->p[0][0], 1);
		    Vector_Set(M->p[0]+1, 0, nvar+exist);
		    Vector_Copy(V->Vertex->p[i], 
				M->p[0] + 1 + nvar + exist, nparam+1);
		    value_oppose(M->p[0][1+nvar+i], 
				 V->Vertex->p[i][nparam+1]);

		    Polyhedron *pos, *neg;
		    value_set_si(M->p[0][0], 1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    neg = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    value_set_si(f, -1);
		    Vector_Scale(M->p[0]+1, M->p[0]+1, f, 
				 P->Dimension+1);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    value_decrement(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    pos = AddConstraints(M->p[0], 1, P, options->MaxRays);
		    POL_ENSURE_VERTICES(neg);
		    POL_ENSURE_VERTICES(pos);
		    if (emptyQ(neg) || emptyQ(pos)) {
			Polyhedron_Free(pos);
			Polyhedron_Free(neg);
			continue;
		    }
		    Polyhedron_Free(pos);
		    value_increment(M->p[0][P->Dimension+1],
				    M->p[0][P->Dimension+1]);
		    pos = AddConstraints(M->p[0], 1, P, options->MaxRays);
#ifdef DEBUG_ER
		    fprintf(stderr, "\nER: ParamVertex\n");
#endif /* DEBUG_ER */
		    pos->next = neg;
		    EP = enumerate_or(pos, exist, nparam, options);
		    break;
		}
		if (EP)
		    break;
	    } END_FORALL_PVertex_in_ParamPolyhedron;
	}

	Matrix_Free(M);
	value_clear(f);
    }

    if (PP)
	Param_Polyhedron_Free(PP);
    *PA = P;

    return EP;
}

evalue *barvinok_enumerate_isl(Polyhedron *P,
	  unsigned exist, unsigned nparam, struct barvinok_options *options)
{
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dims;
	isl_basic_set *bset;
	isl_set *set;
	evalue *EP = evalue_zero();
	Polyhedron *D, *Q, *N;
	Polyhedron *U = Universe_Polyhedron(nparam);

	dims = isl_space_set_alloc(ctx, nparam, P->Dimension - nparam - exist);
	bset = isl_basic_set_new_from_polylib(P, dims);

	set = isl_basic_set_compute_divs(bset);

	D = isl_set_to_polylib(set);
	for (Q = D; Q; Q = N) {
		N = Q->next;
		Q->next = 0;
		evalue *E;
		E = barvinok_enumerate_with_options(Q, U, options);
		Polyhedron_Free(Q);
		eadd(E, EP);
		evalue_free(E);
	}

	Polyhedron_Free(U);
	isl_set_free(set);
	isl_ctx_free(ctx);

	return EP;
}

static bool is_single(Value *row, int pos, int len)
{
    return First_Non_Zero(row, pos) == -1 && 
	   First_Non_Zero(row+pos+1, len-pos-1) == -1;
}

static evalue* barvinok_enumerate_e_r(Polyhedron *P, 
		      unsigned exist, unsigned nparam, barvinok_options *options);

#ifdef DEBUG_ER
static int er_level = 0;

evalue* barvinok_enumerate_e_with_options(Polyhedron *P, 
			  unsigned exist, unsigned nparam, barvinok_options *options)
{
    fprintf(stderr, "\nER: level %i\n", er_level);

    Polyhedron_PrintConstraints(stderr, P_VALUE_FMT, P);
    fprintf(stderr, "\nE %d\nP %d\n", exist, nparam);
    ++er_level;
    P = DomainConstraintSimplify(Polyhedron_Copy(P), options->MaxRays);
    evalue *EP = barvinok_enumerate_e_r(P, exist, nparam, options);
    Polyhedron_Free(P);
    --er_level;
    return EP;
}
#else
evalue* barvinok_enumerate_e_with_options(Polyhedron *P, 
			  unsigned exist, unsigned nparam, barvinok_options *options)
{
    P = DomainConstraintSimplify(Polyhedron_Copy(P), options->MaxRays);
    evalue *EP = barvinok_enumerate_e_r(P, exist, nparam, options);
    Polyhedron_Free(P);
    return EP;
}
#endif

evalue* barvinok_enumerate_e(Polyhedron *P, unsigned exist, unsigned nparam,
			     unsigned MaxRays)
{
    evalue *E;
    barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = MaxRays;
    E = barvinok_enumerate_e_with_options(P, exist, nparam, options);
    barvinok_options_free(options);
    return E;
}

static evalue *universal_zero(unsigned nparam)
{
    evalue *eres;

    eres = ALLOC(evalue);
    value_init(eres->d);
    value_set_si(eres->d, 0);
    eres->x.p = new_enode(partition, 2, nparam);
    EVALUE_SET_DOMAIN(eres->x.p->arr[0], Universe_Polyhedron(nparam));
    value_set_si(eres->x.p->arr[1].d, 1);
    value_init(eres->x.p->arr[1].x.n);

    return eres;
}

static evalue* barvinok_enumerate_e_r(Polyhedron *P, 
			  unsigned exist, unsigned nparam, barvinok_options *options)
{
    if (exist == 0) {
	Polyhedron *U = Universe_Polyhedron(nparam);
	evalue *EP = barvinok_enumerate_with_options(P, U, options);
	//char *param_name[] = {"P", "Q", "R", "S", "T" };
	//print_evalue(stdout, EP, param_name);
	Polyhedron_Free(U);
	return EP;
    }

    int nvar = P->Dimension - exist - nparam;
    int len = P->Dimension + 2;

    /* for now */
    POL_ENSURE_FACETS(P);
    POL_ENSURE_VERTICES(P);

    if (emptyQ(P))
	return evalue_zero();

    if (nvar == 0 && nparam == 0) {
	evalue *EP = universal_zero(nparam);
	barvinok_count_with_options(P, &EP->x.p->arr[1].x.n, options);
	if (value_pos_p(EP->x.p->arr[1].x.n))
	    value_set_si(EP->x.p->arr[1].x.n, 1);
	return EP;
    }

    int r;
    for (r = 0; r < P->NbRays; ++r)
	if (value_zero_p(P->Ray[r][0]) ||
		value_zero_p(P->Ray[r][P->Dimension+1])) {
	    int i;
	    for (i = 0; i < nvar; ++i)
		if (value_notzero_p(P->Ray[r][i+1]))
		    break;
	    if (i >= nvar)
		continue;
	    for (i = nvar + exist; i < nvar + exist + nparam; ++i)
		if (value_notzero_p(P->Ray[r][i+1]))
		    break;
	    if (i >= nvar + exist + nparam)
		break;
	}
    if (r <  P->NbRays) {
	evalue *EP = universal_zero(nparam);
	value_set_si(EP->x.p->arr[1].x.n, -1);
	return EP;
    }

    int first;
    for (r = 0; r < P->NbEq; ++r)
	if ((first = First_Non_Zero(P->Constraint[r]+1+nvar, exist)) != -1)
		break;
    if (r < P->NbEq) {
	if (First_Non_Zero(P->Constraint[r]+1+nvar+first+1, 
			   exist-first-1) != -1) {
	    Polyhedron *T = rotate_along(P, r, nvar, exist, options->MaxRays);
#ifdef DEBUG_ER
	    fprintf(stderr, "\nER: Equality\n");
#endif /* DEBUG_ER */
	    evalue *EP = barvinok_enumerate_e_with_options(T, exist-1, nparam,
							   options);
	    Polyhedron_Free(T);
	    return EP;
	} else {
#ifdef DEBUG_ER
	    fprintf(stderr, "\nER: Fixed\n");
#endif /* DEBUG_ER */
	    if (first == 0)
		return barvinok_enumerate_e_with_options(P, exist-1, nparam,
							 options);
	    else {
		Polyhedron *T = Polyhedron_Copy(P);
		Polyhedron_ExchangeColumns(T, nvar+1, nvar+1+first);
		evalue *EP = barvinok_enumerate_e_with_options(T, exist-1, nparam,
							       options);
		Polyhedron_Free(T);
		return EP;
	    }
	}
    }

    Vector *row = Vector_Alloc(len);
    value_set_si(row->p[0], 1);

    Value f;
    value_init(f);

    enum constraint* info = new constraint[exist];
    for (int i = 0; i < exist; ++i) {
	info[i] = ALL_POS;
	for (int l = P->NbEq; l < P->NbConstraints; ++l) {
	    if (value_negz_p(P->Constraint[l][nvar+i+1]))
		continue;
	    bool l_parallel = is_single(P->Constraint[l]+nvar+1, i, exist);
	    for (int u = P->NbEq; u < P->NbConstraints; ++u) {
		if (value_posz_p(P->Constraint[u][nvar+i+1]))
		    continue;
		bool lu_parallel = l_parallel ||
			    is_single(P->Constraint[u]+nvar+1, i, exist);
		value_oppose(f, P->Constraint[u][nvar+i+1]);
		Vector_Combine(P->Constraint[l]+1, P->Constraint[u]+1, row->p+1,
			       f, P->Constraint[l][nvar+i+1], len-1);
		if (!(info[i] & INDEPENDENT)) {
		    int j;
		    for (j = 0; j < exist; ++j)
			if (j != i && value_notzero_p(row->p[nvar+j+1]))
			    break;
		    if (j == exist) {
			//printf("independent: i: %d, l: %d, u: %d\n", i, l, u);
			info[i] = (constraint)(info[i] | INDEPENDENT);
		    }
		}
		if (info[i] & ALL_POS) {
		    value_addto(row->p[len-1], row->p[len-1], 
			      P->Constraint[l][nvar+i+1]);
		    value_addto(row->p[len-1], row->p[len-1], f);
		    value_multiply(f, f, P->Constraint[l][nvar+i+1]);
		    value_subtract(row->p[len-1], row->p[len-1], f);
		    value_decrement(row->p[len-1], row->p[len-1]);
		    ConstraintSimplify(row->p, row->p, len, &f);
		    value_set_si(f, -1);
		    Vector_Scale(row->p+1, row->p+1, f, len-1);
		    value_decrement(row->p[len-1], row->p[len-1]);
		    Polyhedron *T = AddConstraints(row->p, 1, P, options->MaxRays);
		    POL_ENSURE_VERTICES(T);
		    if (!emptyQ(T)) {
			//printf("not all_pos: i: %d, l: %d, u: %d\n", i, l, u);
			info[i] = (constraint)(info[i] ^ ALL_POS);
		    }
		    //puts("pos remainder");
		    //Polyhedron_Print(stdout, P_VALUE_FMT, T);
		    Polyhedron_Free(T);
		}
		if (!(info[i] & ONE_NEG)) {
		    if (lu_parallel) {
			negative_test_constraint(P->Constraint[l],
						 P->Constraint[u],
						 row->p, nvar+i, len, &f);
			oppose_constraint(row->p, len, &f);
			Polyhedron *T = AddConstraints(row->p, 1, P,
						       options->MaxRays);
			POL_ENSURE_VERTICES(T);
			if (emptyQ(T)) {
			    //printf("one_neg i: %d, l: %d, u: %d\n", i, l, u);
			    info[i] = (constraint)(info[i] | ONE_NEG);
			}
			//puts("neg remainder");
			//Polyhedron_Print(stdout, P_VALUE_FMT, T);
			Polyhedron_Free(T);
		    } else if (!(info[i] & ROT_NEG)) {
			if (parallel_constraints(P->Constraint[l],
						 P->Constraint[u],
						 row->p, nvar, exist)) {
			    negative_test_constraint7(P->Constraint[l],
						     P->Constraint[u],
						     row->p, nvar, exist,
						     len, &f);
			    oppose_constraint(row->p, len, &f);
			    Polyhedron *T = AddConstraints(row->p, 1, P,
							   options->MaxRays);
			    POL_ENSURE_VERTICES(T);
			    if (emptyQ(T)) {
				// printf("rot_neg i: %d, l: %d, u: %d\n", i, l, u);
				info[i] = (constraint)(info[i] | ROT_NEG);
				r = l;
			    }
			    //puts("neg remainder");
			    //Polyhedron_Print(stdout, P_VALUE_FMT, T);
			    Polyhedron_Free(T);
			}
		    }
		}
		if (!(info[i] & ALL_POS) && (info[i] & (ONE_NEG | ROT_NEG)))
		    goto next;
	    }
	}
	if (info[i] & ALL_POS)
	    break;
next:
	;
    }

    /*
    for (int i = 0; i < exist; ++i)
	printf("%i: %i\n", i, info[i]);
    */
    for (int i = 0; i < exist; ++i)
	if (info[i] & ALL_POS) {
#ifdef DEBUG_ER
	    fprintf(stderr, "\nER: Positive\n");
#endif /* DEBUG_ER */
	    // Eliminate
	    // Maybe we should chew off some of the fat here
	    Matrix *M = Matrix_Alloc(P->Dimension, P->Dimension+1);
	    for (int j = 0; j < P->Dimension; ++j)
		value_set_si(M->p[j][j + (j >= i+nvar)], 1);
	    Polyhedron *T = Polyhedron_Image(P, M, options->MaxRays);
	    Matrix_Free(M);
	    evalue *EP = barvinok_enumerate_e_with_options(T, exist-1, nparam,
							   options);
	    Polyhedron_Free(T);
	    value_clear(f);
	    Vector_Free(row);
	    delete [] info;
	    return EP;
	}
    for (int i = 0; i < exist; ++i)
	if (info[i] & ONE_NEG) {
#ifdef DEBUG_ER
	    fprintf(stderr, "\nER: Negative\n");
#endif /* DEBUG_ER */
	    Vector_Free(row);
	    value_clear(f);
	    delete [] info;
	    if (i == 0)
		return barvinok_enumerate_e_with_options(P, exist-1, nparam,
							 options);
	    else {
		Polyhedron *T = Polyhedron_Copy(P);
		Polyhedron_ExchangeColumns(T, nvar+1, nvar+1+i);
		evalue *EP = barvinok_enumerate_e_with_options(T, exist-1, nparam,
							       options);
		Polyhedron_Free(T);
		return EP;
	    }
	}
    for (int i = 0; i < exist; ++i)
	if (info[i] & ROT_NEG) {
#ifdef DEBUG_ER
	    fprintf(stderr, "\nER: Rotate\n");
#endif /* DEBUG_ER */
	    Vector_Free(row);
	    value_clear(f);
	    delete [] info;
	    Polyhedron *T = rotate_along(P, r, nvar, exist, options->MaxRays);
	    evalue *EP = barvinok_enumerate_e_with_options(T, exist-1, nparam,
							   options);
	    Polyhedron_Free(T);
	    return EP;
	}
    for (int i = 0; i < exist; ++i)
	if (info[i] & INDEPENDENT) {
	    Polyhedron *pos, *neg;

	    /* Find constraint again and split off negative part */

	    if (SplitOnVar(P, i, nvar, exist, options->MaxRays,
			   row, f, true, &pos, &neg)) {
#ifdef DEBUG_ER
		fprintf(stderr, "\nER: Split\n");
#endif /* DEBUG_ER */

		evalue *EP = 
		    barvinok_enumerate_e_with_options(neg, exist-1, nparam, options);
		evalue *E = 
		    barvinok_enumerate_e_with_options(pos, exist, nparam, options);
		eadd(E, EP);
		evalue_free(E);
		Polyhedron_Free(neg);
		Polyhedron_Free(pos);
		value_clear(f);
		Vector_Free(row);
		delete [] info;
		return EP;
	    }
	}
    delete [] info;

    Polyhedron *O = P;
    Polyhedron *F;

    evalue *EP;

    EP = enumerate_line(P, exist, nparam, options);
    if (EP)
	goto out;

    EP = barvinok_enumerate_isl(P, exist, nparam, options);
    if (EP)
	goto out;

    EP = enumerate_redundant_ray(P, exist, nparam, options);
    if (EP)
	goto out;

    EP = enumerate_sure(P, exist, nparam, options);
    if (EP)
	goto out;

    EP = enumerate_ray(P, exist, nparam, options);
    if (EP)
	goto out;

    EP = enumerate_sure2(P, exist, nparam, options);
    if (EP)
	goto out;

    F = unfringe(P, options->MaxRays);
    if (!PolyhedronIncludes(F, P)) {
#ifdef DEBUG_ER
	fprintf(stderr, "\nER: Fringed\n");
#endif /* DEBUG_ER */
	EP = barvinok_enumerate_e_with_options(F, exist, nparam, options);
	Polyhedron_Free(F);
	goto out;
    }
    Polyhedron_Free(F);

    if (nparam)
	EP = enumerate_vd(&P, exist, nparam, options);
    if (EP)
	goto out2;

    if (nvar != 0) {
	EP = enumerate_sum(P, exist, nparam, options);
	goto out2;
    }

    assert(nvar == 0);

    int i;
    Polyhedron *pos, *neg;
    for (i = 0; i < exist; ++i)
	if (SplitOnVar(P, i, nvar, exist, options->MaxRays,
		       row, f, false, &pos, &neg))
	    break;

    assert (i < exist);

    pos->next = neg;
    EP = enumerate_or(pos, exist, nparam, options);

out2:
    if (O != P)
	Polyhedron_Free(P);

out:
    value_clear(f);
    Vector_Free(row);
    return EP;
}
