#include <isl/space.h>
#include <isl/set.h>
#include <isl/map.h>
#include <isl/union_set.h>
#include <isl/union_map.h>
#include <isl/polynomial.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "bernoulli.h"
#include "euler.h"
#include "laurent.h"
#include "laurent_old.h"
#include "summate.h"
#include "section_array.h"
#include "remove_equalities.h"

extern evalue *evalue_outer_floor(evalue *e);
extern int evalue_replace_floor(evalue *e, const evalue *floor, int var);
extern void evalue_drop_floor(evalue *e, const evalue *floor);

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

/* Apply the variable transformation specified by T and CP on
 * the polynomial e.  T expresses the old variables in terms
 * of the new variables (and optionally also the new parameters),
 * while CP expresses the old parameters in terms of the new
 * parameters.
 */
static void transform_polynomial(evalue *E, Matrix *T, Matrix *CP,
				 unsigned nvar, unsigned nparam,
				 unsigned new_nvar, unsigned new_nparam)
{
    int j;
    evalue **subs;

    subs = ALLOCN(evalue *, nvar+nparam);

    for (j = 0; j < nvar; ++j) {
	if (T)
	    subs[j] = affine2evalue(T->p[j], T->p[T->NbRows-1][T->NbColumns-1],
				    T->NbColumns-1);
	else
	    subs[j] = evalue_var(j);
    }
    for (j = 0; j < nparam; ++j) {
	if (CP)
	    subs[nvar+j] = affine2evalue(CP->p[j], CP->p[nparam][new_nparam],
					 new_nparam);
	else
	    subs[nvar+j] = evalue_var(j);
	evalue_shift_variables(subs[nvar+j], 0, new_nvar);
    }

    evalue_substitute(E, subs);
    reduce_evalue(E);

    for (j = 0; j < nvar+nparam; ++j)
	evalue_free(subs[j]);
    free(subs);
}

/* Compute the sum of the quasi-polynomial E
 * over a 0D (non-empty, but possibly parametric) polytope P.
 *
 * Consumes P and E.
 *
 * We simply return a partition evalue with P as domain and E as value.
 */
static evalue *sum_over_polytope_0D(Polyhedron *P, evalue *E)
{
	evalue *sum;

	sum = ALLOC(evalue);
	value_init(sum->d);
	sum->x.p = new_enode(partition, 2, P->Dimension);
	EVALUE_SET_DOMAIN(sum->x.p->arr[0], P);
	value_clear(sum->x.p->arr[1].d);
	sum->x.p->arr[1] = *E;
	free(E);

	return sum;
}

static evalue *sum_with_equalities(Polyhedron *P, evalue *E,
	unsigned nvar, struct evalue_section_array *sections,
	struct barvinok_options *options,
	evalue *(*base)(Polyhedron *P, evalue *E, unsigned nvar,
		struct evalue_section_array *sections,
		struct barvinok_options *options))
{
    unsigned dim = P->Dimension;
    unsigned new_dim, new_nparam;
    Matrix *T = NULL, *CP = NULL;
    evalue *sum;

    if (emptyQ(P))
	return evalue_zero();

    assert(P->NbEq > 0);

    remove_all_equalities(&P, NULL, &CP, &T, dim-nvar, options->MaxRays);

    if (emptyQ(P)) {
	Polyhedron_Free(P);
	return evalue_zero();
    }

    new_nparam = CP ? CP->NbColumns-1 : dim - nvar;
    new_dim = T ? T->NbColumns-1 : nvar + new_nparam;

    /* We can avoid these substitutions if E is a constant */
    E = evalue_dup(E);
    transform_polynomial(E, T, CP, nvar, dim-nvar,
			 new_dim-new_nparam, new_nparam);

    if (new_dim-new_nparam > 0) {
	sum = base(P, E, new_dim-new_nparam, sections, options);
	evalue_free(E);
	Polyhedron_Free(P);
    } else {
	sum = sum_over_polytope_0D(P, E);
    }

    if (CP) {
	evalue_backsubstitute(sum, CP, options->MaxRays);
	Matrix_Free(CP);
    }

    if (T)
	Matrix_Free(T);

    return sum;
}

static evalue *sum_over_polytope_with_equalities(Polyhedron *P, evalue *E,
	unsigned nvar, struct evalue_section_array *sections,
	struct barvinok_options *options)
{
	return sum_with_equalities(P, E, nvar, sections, options,
				    &barvinok_sum_over_polytope);
}

static evalue *sum_base(Polyhedron *P, evalue *E, unsigned nvar,
	struct barvinok_options *options);

static evalue *sum_base_wrap(Polyhedron *P, evalue *E, unsigned nvar,
	struct evalue_section_array *sections, struct barvinok_options *options)
{
	return sum_base(P, E, nvar, options);
}

static evalue *sum_base_with_equalities(Polyhedron *P, evalue *E,
	unsigned nvar, struct barvinok_options *options)
{
	return sum_with_equalities(P, E, nvar, NULL, options, &sum_base_wrap);
}

/* The substitutions in sum_step_polynomial may have reintroduced equalities
 * (in particular, one of the floor expressions may be equal to one of
 * the variables), so we need to check for them again.
 */
static evalue *sum_base(Polyhedron *P, evalue *E, unsigned nvar,
				     struct barvinok_options *options)
{
    if (P->NbEq)
	return sum_base_with_equalities(P, E, nvar, options);
    if (options->summation == BV_SUM_EULER)
	return euler_summate(P, E, nvar, options);
    else if (options->summation == BV_SUM_LAURENT)
	return laurent_summate(P, E, nvar, options);
    else if (options->summation == BV_SUM_LAURENT_OLD)
	return laurent_summate_old(P, E, nvar, options);
    assert(0);
}

/* Count the number of non-zero terms in e when viewed as a polynomial
 * in only the first nvar variables.  "count" is the number counted
 * so far.
 */
static int evalue_count_terms(const evalue *e, unsigned nvar, int count)
{
    int i;

    if (EVALUE_IS_ZERO(*e))
	return count;

    if (value_zero_p(e->d))
	assert(e->x.p->type == polynomial);
    if (value_notzero_p(e->d) || e->x.p->pos >= nvar+1)
	return count+1;

    for (i = 0; i < e->x.p->size; ++i)
	count = evalue_count_terms(&e->x.p->arr[i], nvar, count);

    return count;
}

/* Create placeholder structure for unzipping.
 * A "polynomial" is created with size terms in variable pos,
 * with each term having itself as coefficient.
 */
static evalue *create_placeholder(int size, int pos)
{
    int i, j;
    evalue *E = ALLOC(evalue);
    value_init(E->d);
    E->x.p = new_enode(polynomial, size, pos+1);
    for (i = 0; i < size; ++i) {
	E->x.p->arr[i].x.p = new_enode(polynomial, i+1, pos+1);
	for (j = 0; j < i; ++j)
	    evalue_set_si(&E->x.p->arr[i].x.p->arr[j], 0, 1);
	evalue_set_si(&E->x.p->arr[i].x.p->arr[i], 1, 1);
    }
    return E;
}

/* Interchange each non-zero term in e (when viewed as a polynomial
 * in only the first nvar variables) with a placeholder in ph (created
 * by create_placeholder), resulting in two polynomials in the
 * placeholder variable such that for each non-zero term in e
 * there is a power of the placeholder variable such that the factors
 * in the first nvar variables form the coefficient of that power in
 * the first polynomial (e) and the factors in the remaining variables
 * form the coefficient of that power in the second polynomial (ph).
 */
static int evalue_unzip_terms(evalue *e, evalue *ph, unsigned nvar, int count)
{
    int i;

    if (EVALUE_IS_ZERO(*e))
	return count;

    if (value_zero_p(e->d))
	assert(e->x.p->type == polynomial);
    if (value_notzero_p(e->d) || e->x.p->pos >= nvar+1) {
	evalue t = *e;
	*e = ph->x.p->arr[count];
	ph->x.p->arr[count] = t;
	return count+1;
    }

    for (i = 0; i < e->x.p->size; ++i)
	count = evalue_unzip_terms(&e->x.p->arr[i], ph, nvar, count);

    return count;
}

/* Remove n variables at pos (0-based) from the polyhedron P.
 * Each of these variables is assumed to be completely free,
 * i.e., there is a line in the polyhedron corresponding to
 * each of these variables.
 */
static Polyhedron *Polyhedron_Remove_Columns(Polyhedron *P, unsigned pos,
					unsigned n)
{
    int i, j;
    unsigned NbConstraints = 0;
    unsigned NbRays = 0;
    Polyhedron *Q;

    if (n == 0)
	return P;

    assert(pos <= P->Dimension);

    if (POL_HAS(P, POL_INEQUALITIES))
	NbConstraints = P->NbConstraints;
    if (POL_HAS(P, POL_POINTS))
	NbRays = P->NbRays - n;

    Q = Polyhedron_Alloc(P->Dimension - n, NbConstraints, NbRays);
    if (POL_HAS(P, POL_INEQUALITIES)) {
	Q->NbEq = P->NbEq;
	for (i = 0; i < P->NbConstraints; ++i) {
	    Vector_Copy(P->Constraint[i], Q->Constraint[i], 1+pos);
	    Vector_Copy(P->Constraint[i]+1+pos+n, Q->Constraint[i]+1+pos,
			Q->Dimension-pos+1);
	}
    }
    if (POL_HAS(P, POL_POINTS)) {
	Q->NbBid = P->NbBid - n;
	for (i = 0; i < n; ++i)
	    value_set_si(Q->Ray[i][1+pos+i], 1);
	for (i = 0, j = 0; i < P->NbRays; ++i) {
	    int line = First_Non_Zero(P->Ray[i], 1+P->Dimension+1);
	    assert(line != -1);
	    if (line-1 >= pos && line-1 < pos+n) {
		++j;
		assert(j <= n);
		continue;
	    }
	    assert(i-j < Q->NbRays);
	    Vector_Copy(P->Ray[i], Q->Ray[i-j], 1+pos);
	    Vector_Copy(P->Ray[i]+1+pos+n, Q->Ray[i-j]+1+pos,
			Q->Dimension-pos+1);
	}
    }
    POL_SET(Q, POL_VALID);
    if (POL_HAS(P, POL_INEQUALITIES))
	POL_SET(Q, POL_INEQUALITIES);
    if (POL_HAS(P, POL_POINTS))
	POL_SET(Q, POL_POINTS);
    if (POL_HAS(P, POL_VERTICES))
	POL_SET(Q, POL_VERTICES);
    return Q;
}

/* Remove n variables at pos (0-based) from the union of polyhedra P.
 * Each of these variables is assumed to be completely free,
 * i.e., there is a line in the polyhedron corresponding to
 * each of these variables.
 */
static Polyhedron *Domain_Remove_Columns(Polyhedron *P, unsigned pos,
					unsigned n)
{
    Polyhedron *R;
    Polyhedron **next = &R;

    for (; P; P = P->next) {
	*next = Polyhedron_Remove_Columns(P, pos, n);
	next = &(*next)->next;
    }
    return R;
}

/* Drop n parameters starting at first from partition evalue e */
static void drop_parameters(evalue *e, int first, int n)
{
    int i;

    if (EVALUE_IS_ZERO(*e))
	return;

    assert(value_zero_p(e->d) && e->x.p->type == partition);
    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *P = EVALUE_DOMAIN(e->x.p->arr[2*i]);
	Polyhedron *Q = Domain_Remove_Columns(P, first, n);
	EVALUE_SET_DOMAIN(e->x.p->arr[2*i], Q);
	Domain_Free(P);
	evalue_shift_variables(&e->x.p->arr[2*i+1], first, -n);
    }
    e->x.p->pos -= n;
}

static void extract_term_into(const evalue *src, int var, int exp, evalue *dst)
{
    int i;

    if (value_notzero_p(src->d) ||
	    src->x.p->type != polynomial ||
	    src->x.p->pos > var+1) {
	if (exp == 0)
	    evalue_copy(dst, src);
	else
	    evalue_set_si(dst, 0, 1);
	return;
    }

    if (src->x.p->pos == var+1) {
	if (src->x.p->size > exp)
	    evalue_copy(dst, &src->x.p->arr[exp]);
	else
	    evalue_set_si(dst, 0, 1);
	return;
    }

    dst->x.p = new_enode(polynomial, src->x.p->size, src->x.p->pos);
    for (i = 0; i < src->x.p->size; ++i)
	extract_term_into(&src->x.p->arr[i], var, exp,
			    &dst->x.p->arr[i]);
}

/* Extract the coefficient of var^exp.
 */
static evalue *extract_term(const evalue *e, int var, int exp)
{
    int i;
    evalue *res;

    if (EVALUE_IS_ZERO(*e))
	return evalue_zero();

    assert(value_zero_p(e->d) && e->x.p->type == partition);
    res = ALLOC(evalue);
    value_init(res->d);
    res->x.p = new_enode(partition, e->x.p->size, e->x.p->pos);
    for (i = 0; i < e->x.p->size/2; ++i) {
	EVALUE_SET_DOMAIN(res->x.p->arr[2*i],
			  Domain_Copy(EVALUE_DOMAIN(e->x.p->arr[2*i])));
	extract_term_into(&e->x.p->arr[2*i+1], var, exp,
			    &res->x.p->arr[2*i+1]);
	reduce_evalue(&res->x.p->arr[2*i+1]);
    }
    return res;
}

/* Insert n free variables at pos (0-based) in the polyhedron P.
 */
static Polyhedron *Polyhedron_Insert_Columns(Polyhedron *P, unsigned pos,
					unsigned n)
{
    int i;
    unsigned NbConstraints = 0;
    unsigned NbRays = 0;
    Polyhedron *Q;

    if (!P)
	return P;
    if (n == 0)
	return P;

    assert(pos <= P->Dimension);

    if (POL_HAS(P, POL_INEQUALITIES))
	NbConstraints = P->NbConstraints;
    if (POL_HAS(P, POL_POINTS))
	NbRays = P->NbRays + n;

    Q = Polyhedron_Alloc(P->Dimension+n, NbConstraints, NbRays);
    if (POL_HAS(P, POL_INEQUALITIES)) {
	Q->NbEq = P->NbEq;
	for (i = 0; i < P->NbConstraints; ++i) {
	    Vector_Copy(P->Constraint[i], Q->Constraint[i], 1+pos);
	    Vector_Copy(P->Constraint[i]+1+pos, Q->Constraint[i]+1+pos+n,
			P->Dimension-pos+1);
	}
    }
    if (POL_HAS(P, POL_POINTS)) {
	Q->NbBid = P->NbBid + n;
	for (i = 0; i < n; ++i)
	    value_set_si(Q->Ray[i][1+pos+i], 1);
	for (i = 0; i < P->NbRays; ++i) {
	    Vector_Copy(P->Ray[i], Q->Ray[n+i], 1+pos);
	    Vector_Copy(P->Ray[i]+1+pos, Q->Ray[n+i]+1+pos+n,
			P->Dimension-pos+1);
	}
    }
    POL_SET(Q, POL_VALID);
    if (POL_HAS(P, POL_INEQUALITIES))
	POL_SET(Q, POL_INEQUALITIES);
    if (POL_HAS(P, POL_POINTS))
	POL_SET(Q, POL_POINTS);
    if (POL_HAS(P, POL_VERTICES))
	POL_SET(Q, POL_VERTICES);
    return Q;
}

/* Perform summation of e over a list of 1 or more factors F, with context C.
 * nvar is the total number of variables in the remaining factors.
 * extra is the number of placeholder parameters introduced in e,
 * but not (yet) in F or C.
 *
 * If there is only one factor left, F is intersected with the
 * context C, the placeholder variables are added, and then
 * e is summed over the resulting parametric polytope.
 *
 * If there is more than one factor left, we create two polynomials
 * in a new placeholder variable (which is placed after the regular
 * parameters, but before any previously introduced placeholder
 * variables) that has the factors of the variables in the first
 * factor of F and the factor of the remaining variables of
 * each term as its coefficients.
 * These two polynomials are then summed over their domains
 * and afterwards the results are combined and the placeholder
 * variable is removed again.
 */
static evalue *sum_factors(Polyhedron *F, Polyhedron *C, evalue *e,
				     unsigned nvar, unsigned extra,
				     struct barvinok_options *options)
{
    unsigned nparam = C->Dimension;
    unsigned F_var = F->Dimension - C->Dimension;
    int i, n;
    evalue *s1, *s2, *s;
    evalue *ph;

    if (!F->next) {
	Polyhedron *CA = align_context(C, nvar+nparam, options->MaxRays);
	Polyhedron *P = DomainIntersection(F, CA, options->MaxRays);
	Polyhedron *Q = Polyhedron_Insert_Columns(P, nvar+nparam, extra);
	Polyhedron_Free(CA);
	Polyhedron_Free(F);
	Polyhedron_Free(P);
	evalue *sum = sum_base(Q, e, nvar, options);
	Polyhedron_Free(Q);
	return sum;
    }

    n = evalue_count_terms(e, F_var, 0);
    ph = create_placeholder(n, nvar+nparam);
    evalue_shift_variables(e, nvar+nparam, 1);
    evalue_unzip_terms(e, ph, F_var, 0);
    evalue_shift_variables(e, nvar, -(nvar-F_var));
    evalue_reorder_terms(ph);
    evalue_shift_variables(ph, 0, -F_var);

    s2 = sum_factors(F->next, C, ph, nvar-F_var, extra+1, options);
    evalue_free(ph);
    F->next = NULL;
    s1 = sum_factors(F, C, e, F_var, extra+1, options);

    if (n == 1) {
	/* remove placeholder "polynomial" */
	reduce_evalue(s1);
	emul(s1, s2);
	evalue_free(s1);
	drop_parameters(s2, nparam, 1);
	return s2;
    }

    s = evalue_zero();
    for (i = 0; i < n; ++i) {
	evalue *t1, *t2;
	t1 = extract_term(s1, nparam, i);
	t2 = extract_term(s2, nparam, i);
	emul(t1, t2);
	eadd(t2, s);
	evalue_free(t1);
	evalue_free(t2);
    }
    evalue_free(s1);
    evalue_free(s2);

    drop_parameters(s, nparam, 1);
    return s;
}

/* Perform summation over a product of factors F, obtained using
 * variable transformation T from the original problem specification.
 *
 * We first perform the corresponding transformation on the polynomial E,
 * compute the common context over all factors and then perform
 * the actual summation over the factors.
 */
static evalue *sum_product(Polyhedron *F, evalue *E, Matrix *T, unsigned nparam,
				     struct barvinok_options *options)
{
    int i;
    Matrix *T2;
    unsigned nvar = T->NbRows;
    Polyhedron *C;
    evalue *sum;

    assert(nvar == T->NbColumns);
    T2 = Matrix_Alloc(nvar+1, nvar+1);
    for (i = 0; i < nvar; ++i)
	Vector_Copy(T->p[i], T2->p[i], nvar);
    value_set_si(T2->p[nvar][nvar], 1);

    transform_polynomial(E, T2, NULL, nvar, nparam, nvar, nparam);

    C = Factor_Context(F, nparam, options->MaxRays);
    if (F->Dimension == nparam) {
	Polyhedron *T = F;
	F = F->next;
	T->next = NULL;
	Polyhedron_Free(T);
    }
    sum = sum_factors(F, C, E, nvar, 0, options);

    Polyhedron_Free(C);
    Matrix_Free(T2);
    Matrix_Free(T);
    return sum;
}

/* Add two constraints corresponding to floor = floor(e/d),
 *
 *	 e - d t       >= 0
 *	-e + d t + d-1 >= 0
 *
 * e is assumed to be an affine expression.
 */
Polyhedron *add_floor_var(Polyhedron *P, unsigned nvar, const evalue *floor,
				     struct barvinok_options *options)
{
    int i;
    unsigned dim = P->Dimension+1;
    Matrix *M = Matrix_Alloc(P->NbConstraints+2, 2+dim);
    Polyhedron *CP;
    Value *d = &M->p[0][1+nvar];
    evalue_extract_affine(floor, M->p[0]+1, M->p[0]+1+dim, d);
    value_oppose(*d, *d);
    value_set_si(M->p[0][0], 1);
    value_set_si(M->p[1][0], 1);
    Vector_Oppose(M->p[0]+1, M->p[1]+1, M->NbColumns-1);
    value_subtract(M->p[1][1+dim], M->p[1][1+dim], *d);
    value_decrement(M->p[1][1+dim], M->p[1][1+dim]);

    for (i = 0; i < P->NbConstraints; ++i) {
	Vector_Copy(P->Constraint[i], M->p[i+2], 1+nvar);
	Vector_Copy(P->Constraint[i]+1+nvar, M->p[i+2]+1+nvar+1, dim-nvar-1+1);
    }

    CP = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);
    return CP;
}

static evalue *evalue_add(evalue *a, evalue *b)
{
    if (!a)
	return b;
    if (!b)
	return a;
    eadd(a, b);
    evalue_free(a);
    return b;
}

/* Compute sum of a step-polynomial over a polytope by grouping
 * terms containing the same floor-expressions and introducing
 * new variables for each such expression.
 * In particular, while there is any floor-expression left,
 * the step-polynomial is split into a polynomial containing
 * the expression, which is then converted to a new variable,
 * and a polynomial not containing the expression.
 */
static evalue *sum_step_polynomial(Polyhedron *P, evalue *E, unsigned nvar,
				     struct barvinok_options *options)
{
    evalue *floor;
    evalue *cur = E;
    evalue *sum = NULL;
    evalue *t;

    while ((floor = evalue_outer_floor(cur))) {
	Polyhedron *CP;
	evalue *converted;
	evalue *converted_floor;

	/* Ignore floors that do not depend on variables. */
	if (value_notzero_p(floor->d) || floor->x.p->pos >= nvar+1)
	    break;

	converted = evalue_dup(cur);
	converted_floor = evalue_dup(floor);
	evalue_shift_variables(converted, nvar, 1);
	evalue_shift_variables(converted_floor, nvar, 1);
	evalue_replace_floor(converted, converted_floor, nvar);
	CP = add_floor_var(P, nvar, converted_floor, options);
	evalue_free(converted_floor);
	t = sum_step_polynomial(CP, converted, nvar+1, options);
	evalue_free(converted);
	Polyhedron_Free(CP);
	sum = evalue_add(t, sum);

	if (cur == E)
	    cur = evalue_dup(cur);
	evalue_drop_floor(cur, floor);
	evalue_free(floor);
    }
    if (floor) {
	evalue_floor2frac(cur);
	evalue_free(floor);
    }

    if (EVALUE_IS_ZERO(*cur))
	t = NULL;
    else {
	Matrix *T;
	unsigned nparam = P->Dimension - nvar;
	Polyhedron *F = Polyhedron_Factor(P, nparam, &T, options->MaxRays);
	if (!F)
	    t = sum_base(P, cur, nvar, options);
	else {
	    if (cur == E)
		cur = evalue_dup(cur);
	    t = sum_product(F, cur, T, nparam, options);
	}
    }

    if (E != cur)
	evalue_free(cur);

    return evalue_add(t, sum);
}

evalue *barvinok_sum_over_polytope(Polyhedron *P, evalue *E, unsigned nvar,
				     struct evalue_section_array *sections,
				     struct barvinok_options *options)
{
    if (P->NbEq)
	return sum_over_polytope_with_equalities(P, E, nvar, sections, options);

    if (nvar == 0)
	return sum_over_polytope_0D(Polyhedron_Copy(P), evalue_dup(E));

    if (options->summation == BV_SUM_BERNOULLI)
	return bernoulli_summate(P, E, nvar, sections, options);
    else if (options->summation == BV_SUM_BOX)
	return box_summate(P, E, nvar, options->MaxRays);

    evalue_frac2floor2(E, 0);

    return sum_step_polynomial(P, E, nvar, options);
}

evalue *barvinok_summate(evalue *e, int nvar, struct barvinok_options *options)
{
    int i;
    struct evalue_section_array sections;
    evalue *sum;

    assert(nvar >= 0);
    if (nvar == 0 || EVALUE_IS_ZERO(*e))
	return evalue_dup(e);

    assert(value_zero_p(e->d));
    assert(e->x.p->type == partition);

    evalue_section_array_init(&sections);
    sum = evalue_zero();

    for (i = 0; i < e->x.p->size/2; ++i) {
	Polyhedron *D;
	for (D = EVALUE_DOMAIN(e->x.p->arr[2*i]); D; D = D->next) {
	    Polyhedron *next = D->next;
	    evalue *tmp;
	    D->next = NULL;

	    tmp = barvinok_sum_over_polytope(D, &e->x.p->arr[2*i+1], nvar,
					     &sections, options);
	    assert(tmp);
	    eadd(tmp, sum);
	    evalue_free(tmp);

	    D->next = next;
	}
    }

    free(sections.s);

    reduce_evalue(sum);
    return sum;
}

static __isl_give isl_pw_qpolynomial *add_unbounded_guarded_qp(
	__isl_take isl_pw_qpolynomial *sum,
	__isl_take isl_basic_set *bset, __isl_take isl_qpolynomial *qp)
{
	int zero;

	if (!sum || !bset || !qp)
		goto error;

	zero = isl_qpolynomial_is_zero(qp);
	if (zero < 0)
		goto error;

	if (!zero) {
		isl_space *space;
		isl_set *set;
		isl_pw_qpolynomial *pwqp;

		space = isl_pw_qpolynomial_get_domain_space(sum);
		set = isl_set_from_basic_set(isl_basic_set_copy(bset));
		set = isl_map_domain(isl_map_from_range(set));
		set = isl_set_reset_space(set, isl_space_copy(space));
		pwqp = isl_pw_qpolynomial_alloc(set,
					isl_qpolynomial_nan_on_domain(space));
		sum = isl_pw_qpolynomial_add(sum, pwqp);
	}

	isl_basic_set_free(bset);
	isl_qpolynomial_free(qp);
	return sum;
error:
	isl_basic_set_free(bset);
	isl_qpolynomial_free(qp);
	isl_pw_qpolynomial_free(sum);
	return NULL;
}

struct barvinok_summate_data {
	isl_space *space;
	isl_qpolynomial *qp;
	isl_pw_qpolynomial *sum;
	int n_in;
	int wrapping;
	evalue *e;
	struct evalue_section_array sections;
	struct barvinok_options *options;
};

static isl_stat add_basic_guarded_qp(__isl_take isl_basic_set *bset, void *user)
{
	struct barvinok_summate_data *data = user;
	Polyhedron *P;
	evalue *tmp;
	isl_pw_qpolynomial *pwqp;
	int bounded;
	unsigned nvar = isl_basic_set_dim(bset, isl_dim_set);
	isl_space *space;

	if (!bset)
		return isl_stat_error;

	bounded = isl_basic_set_is_bounded(bset);
	if (bounded < 0)
		goto error;

	if (!bounded) {
		data->sum = add_unbounded_guarded_qp(data->sum, bset,
					isl_qpolynomial_copy(data->qp));
		return isl_stat_ok;
	}

	space = isl_space_params(isl_basic_set_get_space(bset));

	P = isl_basic_set_to_polylib(bset);
	tmp = barvinok_sum_over_polytope(P, data->e, nvar,
					 &data->sections, data->options);
	Polyhedron_Free(P);
	assert(tmp);
	pwqp = isl_pw_qpolynomial_from_evalue(space, tmp);
	evalue_free(tmp);
	pwqp = isl_pw_qpolynomial_reset_domain_space(pwqp,
				isl_space_domain(isl_space_copy(data->space)));
	data->sum = isl_pw_qpolynomial_add(data->sum, pwqp);

	isl_basic_set_free(bset);

	return isl_stat_ok;
error:
	isl_basic_set_free(bset);
	return isl_stat_error;
}

static isl_stat add_guarded_qp(__isl_take isl_set *set,
	__isl_take isl_qpolynomial *qp, void *user)
{
	isl_stat r;
	struct barvinok_summate_data *data = user;

	if (!set || !qp)
		goto error;

	data->qp = qp;

	if (data->wrapping) {
		unsigned nparam = isl_set_dim(set, isl_dim_param);
		isl_qpolynomial *qp2 = isl_qpolynomial_copy(qp);
		set = isl_set_move_dims(set, isl_dim_param, nparam,
					isl_dim_set, 0, data->n_in);
		qp2 = isl_qpolynomial_move_dims(qp2, isl_dim_param, nparam,
						isl_dim_in, 0, data->n_in);
		data->e = isl_qpolynomial_to_evalue(qp2);
		isl_qpolynomial_free(qp2);
	} else
		data->e = isl_qpolynomial_to_evalue(qp);
	if (!data->e)
		goto error;

	evalue_section_array_init(&data->sections);

	set = isl_set_make_disjoint(set);
	set = isl_set_compute_divs(set);

	r = isl_set_foreach_basic_set(set, &add_basic_guarded_qp, data);

	free(data->sections.s);

	evalue_free(data->e);

	isl_set_free(set);
	isl_qpolynomial_free(qp);

	return r;
error:
	isl_set_free(set);
	isl_qpolynomial_free(qp);
	return isl_stat_error;
}

__isl_give isl_pw_qpolynomial *isl_pw_qpolynomial_sum(
	__isl_take isl_pw_qpolynomial *pwqp)
{
	isl_ctx *ctx;
	struct barvinok_summate_data data;
	int options_allocated = 0;
	int nvar;

	data.space = NULL;
	data.options = NULL;
	data.sum = NULL;

	if (!pwqp)
		return NULL;

	nvar = isl_pw_qpolynomial_dim(pwqp, isl_dim_set);

	data.space = isl_pw_qpolynomial_get_domain_space(pwqp);
	if (!data.space)
		goto error;
	if (isl_space_is_params(data.space))
		isl_die(isl_pw_qpolynomial_get_ctx(pwqp), isl_error_invalid,
			"input polynomial has no domain", goto error);
	data.wrapping = isl_space_is_wrapping(data.space);
	if (data.wrapping) {
		data.space = isl_space_unwrap(data.space);
		data.n_in = isl_space_dim(data.space, isl_dim_in);
		nvar = isl_space_dim(data.space, isl_dim_out);
	} else
		data.n_in = 0;

	data.space = isl_space_domain(data.space);
	if (nvar == 0)
		return isl_pw_qpolynomial_reset_domain_space(pwqp, data.space);

	data.space = isl_space_from_domain(data.space);
	data.space = isl_space_add_dims(data.space, isl_dim_out, 1);
	data.sum = isl_pw_qpolynomial_zero(isl_space_copy(data.space));

	ctx = isl_pw_qpolynomial_get_ctx(pwqp);
	data.options = isl_ctx_peek_barvinok_options(ctx);
	if (!data.options) {
		data.options = barvinok_options_new_with_defaults();
		options_allocated = 1;
	}

	if (isl_pw_qpolynomial_foreach_lifted_piece(pwqp,
						    add_guarded_qp, &data) < 0)
		goto error;

	if (options_allocated)
		barvinok_options_free(data.options);

	isl_space_free(data.space);

	isl_pw_qpolynomial_free(pwqp);

	return data.sum;
error:
	if (options_allocated)
		barvinok_options_free(data.options);
	isl_pw_qpolynomial_free(pwqp);
	isl_space_free(data.space);
	isl_pw_qpolynomial_free(data.sum);
	return NULL;
}

static isl_stat pw_qpolynomial_sum(__isl_take isl_pw_qpolynomial *pwqp,
	void *user)
{
	isl_union_pw_qpolynomial **res = (isl_union_pw_qpolynomial **)user;
	isl_pw_qpolynomial *sum;
	isl_union_pw_qpolynomial *upwqp;

	sum = isl_pw_qpolynomial_sum(pwqp);
	upwqp = isl_union_pw_qpolynomial_from_pw_qpolynomial(sum);
	*res = isl_union_pw_qpolynomial_add(*res, upwqp);

	return isl_stat_ok;
}

__isl_give isl_union_pw_qpolynomial *isl_union_pw_qpolynomial_sum(
	__isl_take isl_union_pw_qpolynomial *upwqp)
{
	isl_space *dim;
	isl_union_pw_qpolynomial *res;

	dim = isl_union_pw_qpolynomial_get_space(upwqp);
	res = isl_union_pw_qpolynomial_zero(dim);
	if (isl_union_pw_qpolynomial_foreach_pw_qpolynomial(upwqp,
						&pw_qpolynomial_sum, &res) < 0)
		goto error;
	isl_union_pw_qpolynomial_free(upwqp);

	return res;
error:
	isl_union_pw_qpolynomial_free(upwqp);
	isl_union_pw_qpolynomial_free(res);
	return NULL;
}

static int join_compatible(__isl_keep isl_space *space1,
	__isl_keep isl_space *space2)
{
	int m;
	m = isl_space_has_equal_params(space1, space2);
	if (m < 0 || !m)
		return m;
	return isl_space_tuple_is_equal(space1, isl_dim_out,
					space2, isl_dim_in);
}

/* Compute the intersection of the range of the map and the domain
 * of the piecewise quasipolynomial and then sum the associated
 * quasipolynomial over all elements in this intersection.
 *
 * We first introduce some unconstrained dimensions in the
 * piecewise quasipolynomial, intersect the resulting domain
 * with the wrapped map and then compute the sum.
 */
__isl_give isl_pw_qpolynomial *isl_map_apply_pw_qpolynomial(
	__isl_take isl_map *map, __isl_take isl_pw_qpolynomial *pwqp)
{
	isl_ctx *ctx;
	isl_set *dom;
	isl_space *map_dim;
	isl_space *pwqp_dim;
	unsigned n_in;
	int ok;

	ctx = isl_map_get_ctx(map);
	if (!ctx)
		goto error;

	map_dim = isl_map_get_space(map);
	pwqp_dim = isl_pw_qpolynomial_get_space(pwqp);
	ok = join_compatible(map_dim, pwqp_dim);
	isl_space_free(map_dim);
	isl_space_free(pwqp_dim);
	if (!ok)
		isl_die(ctx, isl_error_invalid, "incompatible dimensions",
			goto error);

	n_in = isl_map_dim(map, isl_dim_in);
	pwqp = isl_pw_qpolynomial_insert_dims(pwqp, isl_dim_in, 0, n_in);

	dom = isl_map_wrap(map);
	pwqp = isl_pw_qpolynomial_reset_domain_space(pwqp,
						    isl_set_get_space(dom));

	pwqp = isl_pw_qpolynomial_intersect_domain(pwqp, dom);
	pwqp = isl_pw_qpolynomial_sum(pwqp);
	
	return pwqp;
error:
	isl_map_free(map);
	isl_pw_qpolynomial_free(pwqp);
	return NULL;
}

__isl_give isl_pw_qpolynomial *isl_set_apply_pw_qpolynomial(
	__isl_take isl_set *set, __isl_take isl_pw_qpolynomial *pwqp)
{
	isl_map *map;

	map = isl_map_from_range(set);
	pwqp = isl_map_apply_pw_qpolynomial(map, pwqp);
	pwqp = isl_pw_qpolynomial_project_domain_on_params(pwqp);
	return pwqp;
}

struct barvinok_apply_data {
	isl_union_pw_qpolynomial *upwqp;
	isl_union_pw_qpolynomial *res;
	isl_map *map;
};

static isl_stat pw_qpolynomial_apply(__isl_take isl_pw_qpolynomial *pwqp,
	void *user)
{
	isl_space *map_dim;
	isl_space *pwqp_dim;
	struct barvinok_apply_data *data = user;
	int ok;

	map_dim = isl_map_get_space(data->map);
	pwqp_dim = isl_pw_qpolynomial_get_space(pwqp);
	ok = join_compatible(map_dim, pwqp_dim);
	isl_space_free(map_dim);
	isl_space_free(pwqp_dim);

	if (ok) {
		isl_union_pw_qpolynomial *upwqp;

		pwqp = isl_map_apply_pw_qpolynomial(isl_map_copy(data->map),
							pwqp);
		upwqp = isl_union_pw_qpolynomial_from_pw_qpolynomial(pwqp);
		data->res = isl_union_pw_qpolynomial_add(data->res, upwqp);
	} else
		isl_pw_qpolynomial_free(pwqp);

	return isl_stat_ok;
}

static isl_stat map_apply(__isl_take isl_map *map, void *user)
{
	struct barvinok_apply_data *data = user;
	isl_stat r;

	data->map = map;
	r = isl_union_pw_qpolynomial_foreach_pw_qpolynomial(data->upwqp,
						    &pw_qpolynomial_apply, data);

	isl_map_free(map);
	return r;
}

__isl_give isl_union_pw_qpolynomial *isl_union_map_apply_union_pw_qpolynomial(
	__isl_take isl_union_map *umap,
	__isl_take isl_union_pw_qpolynomial *upwqp)
{
	isl_space *dim;
	struct barvinok_apply_data data;

	upwqp = isl_union_pw_qpolynomial_align_params(upwqp,
				isl_union_map_get_space(umap));
	umap = isl_union_map_align_params(umap,
				isl_union_pw_qpolynomial_get_space(upwqp));

	data.upwqp = upwqp;
	dim = isl_union_pw_qpolynomial_get_space(upwqp);
	data.res = isl_union_pw_qpolynomial_zero(dim);
	if (isl_union_map_foreach_map(umap, &map_apply, &data) < 0)
		goto error;

	isl_union_map_free(umap);
	isl_union_pw_qpolynomial_free(upwqp);

	return data.res;
error:
	isl_union_map_free(umap);
	isl_union_pw_qpolynomial_free(upwqp);
	isl_union_pw_qpolynomial_free(data.res);
	return NULL;
}

struct barvinok_apply_set_data {
	isl_union_pw_qpolynomial *upwqp;
	isl_union_pw_qpolynomial *res;
	isl_set *set;
};

static isl_stat pw_qpolynomial_apply_set(__isl_take isl_pw_qpolynomial *pwqp,
	void *user)
{
	isl_space *set_dim;
	isl_space *pwqp_dim;
	struct barvinok_apply_set_data *data = user;
	int ok;

	set_dim = isl_set_get_space(data->set);
	pwqp_dim = isl_pw_qpolynomial_get_space(pwqp);
	ok = join_compatible(set_dim, pwqp_dim);
	isl_space_free(set_dim);
	isl_space_free(pwqp_dim);

	if (ok) {
		isl_union_pw_qpolynomial *upwqp;

		pwqp = isl_set_apply_pw_qpolynomial(isl_set_copy(data->set),
							pwqp);
		upwqp = isl_union_pw_qpolynomial_from_pw_qpolynomial(pwqp);
		data->res = isl_union_pw_qpolynomial_add(data->res, upwqp);
	} else
		isl_pw_qpolynomial_free(pwqp);

	return isl_stat_ok;
}

static isl_stat set_apply(__isl_take isl_set *set, void *user)
{
	struct barvinok_apply_set_data *data = user;
	isl_stat r;

	data->set = set;
	r = isl_union_pw_qpolynomial_foreach_pw_qpolynomial(data->upwqp,
					    &pw_qpolynomial_apply_set, data);

	isl_set_free(set);
	return r;
}

__isl_give isl_union_pw_qpolynomial *isl_union_set_apply_union_pw_qpolynomial(
	__isl_take isl_union_set *uset,
	__isl_take isl_union_pw_qpolynomial *upwqp)
{
	isl_space *dim;
	struct barvinok_apply_set_data data;

	upwqp = isl_union_pw_qpolynomial_align_params(upwqp,
				isl_union_set_get_space(uset));
	uset = isl_union_set_align_params(uset,
				isl_union_pw_qpolynomial_get_space(upwqp));

	data.upwqp = upwqp;
	dim = isl_union_pw_qpolynomial_get_space(upwqp);
	data.res = isl_union_pw_qpolynomial_zero(dim);
	if (isl_union_set_foreach_set(uset, &set_apply, &data) < 0)
		goto error;

	isl_union_set_free(uset);
	isl_union_pw_qpolynomial_free(upwqp);

	return data.res;
error:
	isl_union_set_free(uset);
	isl_union_pw_qpolynomial_free(upwqp);
	isl_union_pw_qpolynomial_free(data.res);
	return NULL;
}

evalue *evalue_sum(evalue *E, int nvar, unsigned MaxRays)
{
    evalue *sum;
    struct barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = MaxRays;
    sum = barvinok_summate(E, nvar, options);
    barvinok_options_free(options);
    return sum;
}

evalue *esum(evalue *e, int nvar)
{
    evalue *sum;
    struct barvinok_options *options = barvinok_options_new_with_defaults();
    sum = barvinok_summate(e, nvar, options);
    barvinok_options_free(options);
    return sum;
}

/* Turn unweighted counting problem into "weighted" counting problem
 * with weight equal to 1 and call barvinok_summate on this weighted problem.
 */
evalue *barvinok_summate_unweighted(Polyhedron *P, Polyhedron *C,
				    struct barvinok_options *options)
{
    Polyhedron *CA, *D;
    evalue e;
    evalue *sum;

    if (emptyQ(P) || emptyQ(C))
	return evalue_zero();

    CA = align_context(C, P->Dimension, options->MaxRays);
    D = DomainIntersection(P, CA, options->MaxRays);
    Domain_Free(CA);

    if (emptyQ(D)) {
	Domain_Free(D);
	return evalue_zero();
    }

    value_init(e.d);
    e.x.p = new_enode(partition, 2, P->Dimension);
    EVALUE_SET_DOMAIN(e.x.p->arr[0], D);
    evalue_set_si(&e.x.p->arr[1], 1, 1);
    sum = barvinok_summate(&e, P->Dimension - C->Dimension, options);
    free_evalue_refs(&e);
    return sum;
}
