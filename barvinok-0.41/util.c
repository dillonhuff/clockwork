#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <isl/ctx.h>
#include <isl/val.h>
#include <isl/val_gmp.h>
#include <isl/space.h>
#include <isl/set.h>
#include <isl_set_polylib.h>
#include <barvinok/polylib.h>
#include <barvinok/options.h>
#include <polylib/ranking.h>
#include "lattice_point.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

#ifdef __GNUC__
#define NALLOC(p,n) p = (typeof(p))malloc((n) * sizeof(*p))
#else
#define NALLOC(p,n) p = (void *)malloc((n) * sizeof(*p))
#endif

void manual_count(Polyhedron *P, Value* result)
{
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *dim;
	isl_set *set;
	isl_val *v;
	int nvar = P->Dimension;

	dim = isl_space_set_alloc(ctx, 0, nvar);
	set = isl_set_new_from_polylib(P, dim);

	v = isl_set_count_val(set);
	isl_val_get_num_gmp(v, *result);
	isl_val_free(v);

	isl_set_free(set);
	isl_ctx_free(ctx);

	assert(v);
}

#include <barvinok/evalue.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>

/* Return random value between 0 and max-1 inclusive
 */
int random_int(int max) {
    return (int) (((double)(max))*rand()/(RAND_MAX+1.0));
}

Polyhedron *Polyhedron_Read(unsigned MaxRays)
{
    int vertices = 0; 
    unsigned NbRows, NbColumns;
    Matrix *M;
    Polyhedron *P;
    char s[128];

    while (fgets(s, sizeof(s), stdin)) {
	if (*s == '#')
	    continue;
	if (strncasecmp(s, "vertices", sizeof("vertices")-1) == 0)
	    vertices = 1;
	if (sscanf(s, "%u %u", &NbRows, &NbColumns) == 2)
	    break;
    }
    if (feof(stdin))
	return NULL;
    M = Matrix_Alloc(NbRows,NbColumns);
    Matrix_Read_Input(M);
    if (vertices)
	P = Rays2Polyhedron(M, MaxRays);
    else
	P = Constraints2Polyhedron(M, MaxRays);
    Matrix_Free(M);
    return P;
}

/* Inplace polarization
 */
void Polyhedron_Polarize(Polyhedron *P)
{
    unsigned NbRows;
    int i;
    Value **q;

    POL_ENSURE_FACETS(P);
    POL_ENSURE_VERTICES(P);
    NbRows = P->NbConstraints + P->NbRays;
    q = (Value **)malloc(NbRows * sizeof(Value *));
    assert(q);
    for (i = 0; i < P->NbRays; ++i)
	q[i] = P->Ray[i];
    for (; i < NbRows; ++i)
	q[i] = P->Constraint[i-P->NbRays];
    P->NbConstraints = NbRows - P->NbConstraints;
    P->NbRays = NbRows - P->NbRays;
    free(P->Constraint);
    P->Constraint = q;
    P->Ray = q + P->NbConstraints;
}

/*
 * Rather general polar
 * We can optimize it significantly if we assume that
 * P includes zero
 *
 * Also, we calculate the polar as defined in Schrijver
 * The opposite should probably work as well and would
 * eliminate the need for multiplying by -1
 */
Polyhedron* Polyhedron_Polar(Polyhedron *P, unsigned NbMaxRays)
{
    int i;
    Value mone;
    unsigned dim = P->Dimension + 2;
    Matrix *M = Matrix_Alloc(P->NbRays, dim);

    assert(M);
    value_init(mone);
    value_set_si(mone, -1);
    for (i = 0; i < P->NbRays; ++i) {
	Vector_Scale(P->Ray[i], M->p[i], mone, dim);
	value_multiply(M->p[i][0], M->p[i][0], mone);
	value_multiply(M->p[i][dim-1], M->p[i][dim-1], mone);
    }
    P = Constraints2Polyhedron(M, NbMaxRays);
    assert(P);
    Matrix_Free(M);
    value_clear(mone);
    return P;
}

/*
 * Returns the supporting cone of P at the vertex with index v
 */
Polyhedron* supporting_cone(Polyhedron *P, int v)
{
    Matrix *M;
    Value tmp;
    int i, n, j;
    unsigned char *supporting = (unsigned char *)malloc(P->NbConstraints);
    unsigned dim = P->Dimension + 2;

    assert(v >=0 && v < P->NbRays);
    assert(value_pos_p(P->Ray[v][dim-1]));
    assert(supporting);

    value_init(tmp);
    for (i = 0, n = 0; i < P->NbConstraints; ++i) {
	Inner_Product(P->Constraint[i] + 1, P->Ray[v] + 1, dim - 1, &tmp);
	if ((supporting[i] = value_zero_p(tmp)))
	    ++n;
    }
    assert(n >= dim - 2);
    value_clear(tmp);
    M = Matrix_Alloc(n, dim);
    assert(M);
    for (i = 0, j = 0; i < P->NbConstraints; ++i)
	if (supporting[i]) {
	    value_set_si(M->p[j][dim-1], 0);
	    Vector_Copy(P->Constraint[i], M->p[j++], dim-1);
	}
    free(supporting);
    P = Constraints2Polyhedron(M, P->NbRays+1);
    assert(P);
    Matrix_Free(M);
    return P;
}

#define INT_BITS (sizeof(unsigned) * 8)

unsigned *supporting_constraints(Matrix *Constraints, Param_Vertices *v, int *n)
{
    Value lcm, tmp, tmp2;
    unsigned dim = Constraints->NbColumns;
    unsigned nparam = v->Vertex->NbColumns - 2;
    unsigned nvar = dim - nparam - 2;
    int len = (Constraints->NbRows+INT_BITS-1)/INT_BITS;
    unsigned *supporting = (unsigned *)calloc(len, sizeof(unsigned));
    int i, j;
    Vector *row;
    int ix;
    unsigned bx;

    assert(supporting);
    row = Vector_Alloc(nparam+1);
    assert(row);
    value_init(lcm);
    value_init(tmp);
    value_init(tmp2);
    value_set_si(lcm, 1);
    for (i = 0, *n = 0, ix = 0, bx = MSB; i < Constraints->NbRows; ++i) {
	Vector_Set(row->p, 0, nparam+1);
	for (j = 0 ; j < nvar; ++j) {
	    value_set_si(tmp, 1);
	    value_assign(tmp2,  Constraints->p[i][j+1]);
	    if (value_ne(lcm, v->Vertex->p[j][nparam+1])) {
		value_assign(tmp, lcm);
		value_lcm(lcm, lcm, v->Vertex->p[j][nparam+1]);
		value_division(tmp, lcm, tmp);
		value_multiply(tmp2, tmp2, lcm);
		value_division(tmp2, tmp2, v->Vertex->p[j][nparam+1]);
	    }
	    Vector_Combine(row->p, v->Vertex->p[j], row->p, 
			   tmp, tmp2, nparam+1);
	}
	value_set_si(tmp, 1);
	Vector_Combine(row->p, Constraints->p[i]+1+nvar, row->p, tmp, lcm, nparam+1);
	for (j = 0; j < nparam+1; ++j)
	    if (value_notzero_p(row->p[j]))
		break;
	if (j == nparam + 1) {
	    supporting[ix] |= bx;
	    ++*n;
	}
	NEXT(ix, bx);
    }
    assert(*n >= nvar);
    value_clear(tmp);
    value_clear(tmp2);
    value_clear(lcm);
    Vector_Free(row);

    return supporting;
}

Polyhedron* supporting_cone_p(Polyhedron *P, Param_Vertices *v)
{
    Matrix *M;
    unsigned dim = P->Dimension + 2;
    unsigned nparam = v->Vertex->NbColumns - 2;
    unsigned nvar = dim - nparam - 2;
    int i, n, j;
    int ix;
    unsigned bx;
    unsigned *supporting;
    Matrix View;

    Polyhedron_Matrix_View(P, &View, P->NbConstraints);
    supporting = supporting_constraints(&View, v, &n);
    M = Matrix_Alloc(n, nvar+2);
    assert(M);
    for (i = 0, j = 0, ix = 0, bx = MSB; i < P->NbConstraints; ++i) {
	if (supporting[ix] & bx) {
	    value_set_si(M->p[j][nvar+1], 0);
	    Vector_Copy(P->Constraint[i], M->p[j++], nvar+1);
	}
	NEXT(ix, bx);
    }
    free(supporting);
    P = Constraints2Polyhedron(M, P->NbRays+1);
    assert(P);
    Matrix_Free(M);
    return P;
}

Polyhedron* triangulate_cone(Polyhedron *P, unsigned NbMaxCons)
{
    struct barvinok_options *options = barvinok_options_new_with_defaults();
    options->MaxRays = NbMaxCons;
    P = triangulate_cone_with_options(P, options);
    barvinok_options_free(options);
    return P;
}

Polyhedron* triangulate_cone_with_options(Polyhedron *P,
					  struct barvinok_options *options)
{
    const static int MAX_TRY=10;
    int i, j, r, n, t;
    Value tmp;
    unsigned dim = P->Dimension;
    Matrix *M = Matrix_Alloc(P->NbRays+1, dim+3);
    Matrix *M2, *M3;
    Polyhedron *L, *R, *T;
    assert(P->NbEq == 0);

    L = NULL;
    R = NULL;
    value_init(tmp);

    Vector_Set(M->p[0]+1, 0, dim+1);
    value_set_si(M->p[0][0], 1);
    value_set_si(M->p[0][dim+2], 1);
    Vector_Set(M->p[P->NbRays]+1, 0, dim+2);
    value_set_si(M->p[P->NbRays][0], 1);
    value_set_si(M->p[P->NbRays][dim+1], 1);

    for (i = 0, r = 1; i < P->NbRays; ++i) {
	if (value_notzero_p(P->Ray[i][dim+1]))
	    continue;
	Vector_Copy(P->Ray[i], M->p[r], dim+1);
	value_set_si(M->p[r][dim+2], 0);
	++r;
    }

    M2 = Matrix_Alloc(dim+1, dim+2);

    t = 0;
    if (options->try_Delaunay_triangulation) {
	/* Delaunay triangulation */
	for (r = 1; r < P->NbRays; ++r) {
	    Inner_Product(M->p[r]+1, M->p[r]+1, dim, &tmp);
	    value_assign(M->p[r][dim+1], tmp);
	}
	M3 = Matrix_Copy(M);
	L = Rays2Polyhedron(M3, options->MaxRays);
	Matrix_Free(M3);
	++t;
    } else {
try_again:
	/* Usually R should still be 0 */
	Domain_Free(R);
	Polyhedron_Free(L);
	for (r = 1; r < P->NbRays; ++r) {
	    value_set_si(M->p[r][dim+1], random_int((t+1)*dim*P->NbRays)+1);
	}
	M3 = Matrix_Copy(M);
	L = Rays2Polyhedron(M3, options->MaxRays);
	Matrix_Free(M3);
	++t;
    }
    assert(t <= MAX_TRY);

    R = NULL;
    n = 0;

    POL_ENSURE_FACETS(L);
    for (i = 0; i < L->NbConstraints; ++i) {
	/* Ignore perpendicular facets, i.e., facets with 0 z-coordinate */
	if (value_negz_p(L->Constraint[i][dim+1]))
	    continue;
	if (value_notzero_p(L->Constraint[i][dim+2]))
	    continue;
	for (j = 1, r = 1; j < M->NbRows; ++j) {
	    Inner_Product(M->p[j]+1, L->Constraint[i]+1, dim+1, &tmp);
	    if (value_notzero_p(tmp))
		continue;
	    if (r > dim)
		goto try_again;
	    Vector_Copy(M->p[j]+1, M2->p[r]+1, dim);
	    value_set_si(M2->p[r][0], 1);
	    value_set_si(M2->p[r][dim+1], 0);
	    ++r;
	}
	assert(r == dim+1);
	Vector_Set(M2->p[0]+1, 0, dim);
	value_set_si(M2->p[0][0], 1);
	value_set_si(M2->p[0][dim+1], 1);
	T = Rays2Polyhedron(M2, P->NbConstraints+1);
	T->next = R;
	R = T;
	++n;
    }
    Matrix_Free(M2);

    Polyhedron_Free(L);
    value_clear(tmp);
    Matrix_Free(M);

    return R;
}

void check_triangulization(Polyhedron *P, Polyhedron *T)
{
    Polyhedron *C, *D, *E, *F, *G, *U;
    for (C = T; C; C = C->next) {
	if (C == T)
	    U = C;
	else 
	    U = DomainConvex(DomainUnion(U, C, 100), 100);
	for (D = C->next; D; D = D->next) {
	    F = C->next;
	    G = D->next;
	    C->next = NULL;
	    D->next = NULL;
	    E = DomainIntersection(C, D, 600);
	    assert(E->NbRays == 0 || E->NbEq >= 1);
	    Polyhedron_Free(E);
	    C->next = F;
	    D->next = G;
	}
    }
    assert(PolyhedronIncludes(U, P));
    assert(PolyhedronIncludes(P, U));
}

/* Computes x, y and g such that g = gcd(a,b) and a*x+b*y = g */
void Extended_Euclid(Value a, Value b, Value *x, Value *y, Value *g)
{
    Value c, d, e, f, tmp;

    value_init(c);
    value_init(d);
    value_init(e);
    value_init(f);
    value_init(tmp);
    value_absolute(c, a);
    value_absolute(d, b);
    value_set_si(e, 1);
    value_set_si(f, 0);
    while(value_pos_p(d)) {
	value_division(tmp, c, d);
	value_multiply(tmp, tmp, f);
	value_subtract(e, e, tmp);
	value_division(tmp, c, d);
	value_multiply(tmp, tmp, d);
	value_subtract(c, c, tmp);
	value_swap(c, d);
	value_swap(e, f);
    }
    value_assign(*g, c);
    if (value_zero_p(a))
	value_set_si(*x, 0);
    else if (value_pos_p(a))
	value_assign(*x, e);
    else value_oppose(*x, e);
    if (value_zero_p(b))
	value_set_si(*y, 0);
    else {
	value_multiply(tmp, a, *x);
	value_subtract(tmp, c, tmp);
	value_division(*y, tmp, b);
    }
    value_clear(c);
    value_clear(d);
    value_clear(e);
    value_clear(f);
    value_clear(tmp);
}

static int unimodular_complete_1(Matrix *m) 
{
    Value g, b, c, old, tmp;
    unsigned i, j;
    int ok;

    value_init(b);
    value_init(c);
    value_init(g);
    value_init(old);
    value_init(tmp);
    value_assign(g, m->p[0][0]);
    for (i = 1; value_zero_p(g) && i < m->NbColumns; ++i) {
	for (j = 0; j < m->NbColumns; ++j) {
	    if (j == i-1)
		value_set_si(m->p[i][j], 1);
	    else
		value_set_si(m->p[i][j], 0);
	}
	value_assign(g, m->p[0][i]);
    }
    for (; i < m->NbColumns; ++i) {
	value_assign(old, g);
	Extended_Euclid(old, m->p[0][i], &c, &b, &g);
	value_oppose(b, b);
	for (j = 0; j < m->NbColumns; ++j) {
	    if (j < i) {
		value_multiply(tmp, m->p[0][j], b);
		value_division(m->p[i][j], tmp, old);
	    } else if (j == i)
		value_assign(m->p[i][j], c);
	    else
		value_set_si(m->p[i][j], 0);
	}
    }
    ok = value_one_p(g);
    value_clear(b);
    value_clear(c);
    value_clear(g);
    value_clear(old);
    value_clear(tmp);
    return ok;
}

int unimodular_complete(Matrix *M, int row)
{
    int r;
    int ok = 1;
    Matrix *H, *Q, *U;

    if (row == 1)
	return unimodular_complete_1(M);

    left_hermite(M, &H, &Q, &U);
    Matrix_Free(U);
    for (r = 0; ok && r < row; ++r)
	if (value_notone_p(H->p[r][r]))
	    ok = 0;
    Matrix_Free(H);
    for (r = row; r < M->NbRows; ++r)
	Vector_Copy(Q->p[r], M->p[r], M->NbColumns);
    Matrix_Free(Q);
    return ok;
}

/*
 * left_hermite may leave positive entries below the main diagonal in H.
 * This function postprocesses the output of left_hermite to make
 * the non-zero entries below the main diagonal negative.
 */
void neg_left_hermite(Matrix *A, Matrix **H_p, Matrix **Q_p, Matrix **U_p)
{
    int row, col, i, j;
    Matrix *H, *U, *Q;

    left_hermite(A, &H, &Q, &U);
    *H_p = H;
    *Q_p = Q;
    *U_p = U;

    for (row = 0, col = 0; col < H->NbColumns; ++col, ++row) {
	while (value_zero_p(H->p[row][col]))
	    ++row;
	for (i = 0; i < col; ++i) {
	    if (value_negz_p(H->p[row][i]))
		continue;

	    /* subtract column col from column i in H and U */
	    for (j = 0; j < H->NbRows; ++j)
		value_subtract(H->p[j][i], H->p[j][i], H->p[j][col]);
	    for (j = 0; j < U->NbRows; ++j)
		value_subtract(U->p[j][i], U->p[j][i], U->p[j][col]);

	    /* add row i to row col in Q */
	    for (j = 0; j < Q->NbColumns; ++j)
		value_addto(Q->p[col][j], Q->p[col][j], Q->p[i][j]);
	}
    }
}

/*
 * Returns a full-dimensional polyhedron with the same number
 * of integer points as P
 */
Polyhedron *remove_equalities(Polyhedron *P, unsigned MaxRays)
{
    Matrix M;
    Matrix *T;
    Polyhedron *Q = Polyhedron_Copy(P);

    if (Q->NbEq == 0)
	return Q;

    Q = DomainConstraintSimplify(Q, MaxRays);
    if (emptyQ2(Q))
	return Q;

    Polyhedron_Matrix_View(Q, &M, Q->NbEq);
    T = compress_variables(&M, 0);

    if (!T)
	P = NULL;
    else {
	P = Polyhedron_Preimage(Q, T, MaxRays);
	Matrix_Free(T);
    }

    Polyhedron_Free(Q);

    return P;
}

/*
 * Returns a full-dimensional polyhedron with the same number
 * of integer points as P
 * nvar specifies the number of variables
 * The remaining dimensions are assumed to be parameters
 * Destroys P
 * factor is NbEq x (nparam+2) matrix, containing stride constraints
 * on the parameters; column nparam is the constant;
 * column nparam+1 is the stride
 *
 * if factor is NULL, only remove equalities that don't affect
 * the number of points
 */
Polyhedron *remove_equalities_p(Polyhedron *P, unsigned nvar, Matrix **factor,
				unsigned MaxRays)
{
    Value g;
    Polyhedron *Q;
    unsigned dim = P->Dimension;
    Matrix *m1, *m2, *f;
    int i, j;

    if (P->NbEq == 0)
	return P;

    m1 = Matrix_Alloc(nvar, nvar);
    P = DomainConstraintSimplify(P, MaxRays);
    if (factor) {
	f = Matrix_Alloc(P->NbEq, dim-nvar+2);
	*factor = f;
    }
    value_init(g);
    for (i = 0, j = 0; i < P->NbEq; ++i) {
	if (First_Non_Zero(P->Constraint[i]+1, nvar) == -1)
	    continue;

	Vector_Gcd(P->Constraint[i]+1, nvar, &g);
	if (!factor && value_notone_p(g))
	    continue;

	if (factor) {
	    Vector_Copy(P->Constraint[i]+1+nvar, f->p[j], dim-nvar+1);
	    value_assign(f->p[j][dim-nvar+1], g);
	}

	Vector_Copy(P->Constraint[i]+1, m1->p[j], nvar);

	++j;
    }
    value_clear(g);

    unimodular_complete(m1, j);

    m2 = Matrix_Alloc(dim+1-j, dim+1);
    for (i = 0; i < nvar-j ; ++i)
	Vector_Copy(m1->p[i+j], m2->p[i], nvar);
    Matrix_Free(m1);
    for (i = nvar-j; i <= dim-j; ++i)
	value_set_si(m2->p[i][i+j], 1);

    Q = Polyhedron_Image(P, m2, MaxRays);
    Matrix_Free(m2);
    Polyhedron_Free(P);

    return Q;
}

void Line_Length(Polyhedron *P, Value *len)
{
    Value tmp, pos, neg;
    int p = 0, n = 0;
    int i;

    assert(P->Dimension == 1);

    if (P->NbEq > 0) {
	if (mpz_divisible_p(P->Constraint[0][2], P->Constraint[0][1]))
	    value_set_si(*len, 1);
	else
	    value_set_si(*len, 0);
	return;
    }

    value_init(tmp);
    value_init(pos);
    value_init(neg);

    for (i = 0; i < P->NbConstraints; ++i) {
	value_oppose(tmp, P->Constraint[i][2]);
	if (value_pos_p(P->Constraint[i][1])) {
	    mpz_cdiv_q(tmp, tmp, P->Constraint[i][1]);
	    if (!p || value_gt(tmp, pos))
		value_assign(pos, tmp);
	    p = 1;
	} else if (value_neg_p(P->Constraint[i][1])) {
	    mpz_fdiv_q(tmp, tmp, P->Constraint[i][1]);
	    if (!n || value_lt(tmp, neg))
		value_assign(neg, tmp);
	    n = 1;
	}
	if (n && p) {
	    value_subtract(tmp, neg, pos);
	    value_increment(*len, tmp);
	} else
	    value_set_si(*len, -1);
    }

    value_clear(tmp);
    value_clear(pos);
    value_clear(neg);
}

/* Update group[k] to the group column k belongs to.
 * When merging two groups, only the group of the current
 * group leader is changed.  Here we change the group of
 * the other members to also point to the group that the
 * old group leader now points to.
 */
static void update_group(int *group, int *cnt, int k)
{
	int g = group[k];
	while (cnt[g] == 0)
		g = group[g];
	group[k] = g;
}

/*
 * Factors the polyhedron P into polyhedra Q_i such that
 * the number of integer points in P is equal to the product
 * of the number of integer points in the individual Q_i
 *
 * If no factors can be found, NULL is returned.
 * Otherwise, a linked list of the factors is returned.
 *
 * If there are factors and if T is not NULL, then a matrix will be
 * returned through T expressing the old variables in terms of the
 * new variables as they appear in the sequence of factors.
 *
 * The algorithm works by first computing the Hermite normal form
 * and then grouping columns linked by one or more constraints together,
 * where a constraints "links" two or more columns if the constraint
 * has nonzero coefficients in the columns.
 */
Polyhedron* Polyhedron_Factor(Polyhedron *P, unsigned nparam, Matrix **T,
			      unsigned NbMaxRays)
{
    int i, j, k;
    Matrix *M, *H, *Q, *U;
    int *pos;		/* for each column: row position of pivot */
    int *group;		/* group to which a column belongs */
    int *cnt;		/* number of columns in the group */
    int *rowgroup;	/* group to which a constraint belongs */
    int nvar = P->Dimension - nparam;
    Polyhedron *F = NULL;

    if (nvar <= 1)
	return NULL;

    NALLOC(pos, nvar);
    NALLOC(group, nvar);
    NALLOC(cnt, nvar);
    NALLOC(rowgroup, P->NbConstraints);

    M = Matrix_Alloc(P->NbConstraints, nvar);
    for (i = 0; i < P->NbConstraints; ++i)
	Vector_Copy(P->Constraint[i]+1, M->p[i], nvar);
    left_hermite(M, &H, &Q, &U);
    Matrix_Free(M);
    Matrix_Free(Q);

    for (i = 0; i < P->NbConstraints; ++i)
	rowgroup[i] = -1;
    for (i = 0, j = 0; i < H->NbColumns; ++i) {
	for ( ; j < H->NbRows; ++j)
	    if (value_notzero_p(H->p[j][i]))
		break;
	pos[i] = j;
    }
    for (i = 0; i < nvar; ++i) {
	group[i] = i;
	cnt[i] = 1;
    }
    for (i = 0; i < H->NbColumns && cnt[0] < nvar; ++i) {
	if (pos[i] == H->NbRows)
	    continue; /* A line direction */
	if (rowgroup[pos[i]] == -1)
	    rowgroup[pos[i]] = i;
	for (j = pos[i]+1; j <  H->NbRows; ++j) {
	    if (value_zero_p(H->p[j][i]))
		continue;
	    if (rowgroup[j] != -1)
		continue;
	    rowgroup[j] = group[i];
	    for (k = i+1; k < H->NbColumns && j >= pos[k]; ++k) {
		update_group(group, cnt, k);
		update_group(group, cnt, i);
		if (group[k] != group[i] && value_notzero_p(H->p[j][k])) {
		    assert(cnt[group[k]] != 0);
		    assert(cnt[group[i]] != 0);
		    if (group[i] < group[k]) {
			cnt[group[i]] += cnt[group[k]];
			cnt[group[k]] = 0;
			group[group[k]] = group[i];
		    } else {
			cnt[group[k]] += cnt[group[i]];
			cnt[group[i]] = 0;
			group[group[i]] = group[k];
		    }
		}
	    }
	}
    }
    for (i = 1; i < nvar; ++i)
	update_group(group, cnt, i);

    if (cnt[0] != nvar) {
	/* Extract out pure context constraints separately */
	Polyhedron **next = &F;
	int tot_d = 0;
	if (T)
	    *T = Matrix_Alloc(nvar, nvar);
	for (i = nparam ? -1 : 0; i < nvar; ++i) {
	    int d;

	    if (i == -1) {
		for (j = 0, k = 0; j < P->NbConstraints; ++j)
		    if (rowgroup[j] == -1) {
			if (First_Non_Zero(P->Constraint[j]+1+nvar, 
					   nparam) == -1)
			    rowgroup[j] = -2;
			else 
			    ++k;
		    }
		if (k == 0)
		    continue;
		d = 0;
	    } else {
		if (cnt[i] == 0)
		    continue;
		d = cnt[i];
		for (j = 0, k = 0; j < P->NbConstraints; ++j)
		    if (rowgroup[j] >= 0 && group[rowgroup[j]] == i) {
			rowgroup[j] = i;
			++k;
		    }
	    }

	    if (T)
		for (j = 0; j < nvar; ++j) {
		    int l, m;
		    for (l = 0, m = 0; m < d; ++l) {
			if (group[l] != i)
			    continue;
			value_assign((*T)->p[j][tot_d+m++], U->p[j][l]);
		    }
		}

	    M = Matrix_Alloc(k, d+nparam+2);
	    for (j = 0, k = 0; j < P->NbConstraints; ++j) {
		int l, m;
		if (rowgroup[j] != i)
		    continue;
		value_assign(M->p[k][0], P->Constraint[j][0]);
		for (l = 0, m = 0; m < d; ++l) {
		    if (group[l] != i)
			continue;
		    value_assign(M->p[k][1+m++], H->p[j][l]);
		}
		Vector_Copy(P->Constraint[j]+1+nvar, M->p[k]+1+m, nparam+1);
		++k;
	    }
	    *next = Constraints2Polyhedron(M, NbMaxRays);
	    next = &(*next)->next;
	    Matrix_Free(M);
	    tot_d += d;
	}
    }
    Matrix_Free(U);
    Matrix_Free(H);
    free(pos);
    free(group);
    free(cnt);
    free(rowgroup);
    return F;
}

/* Computes the intersection of the contexts of a list of factors */
Polyhedron *Factor_Context(Polyhedron *F, unsigned nparam, unsigned MaxRays)
{
    Polyhedron *Q;
    Polyhedron *C = NULL;

    for (Q = F; Q; Q = Q->next) {
	Polyhedron *QC = Q;
	Polyhedron *next = Q->next;
	Q->next = NULL;

	if (Q->Dimension != nparam)
	    QC = Polyhedron_Project(Q, nparam);

	if (!C)
	    C = Q == QC ? Polyhedron_Copy(QC) : QC;
	else {
	    Polyhedron *C2 = C;
	    C = DomainIntersection(C, QC, MaxRays);
	    Polyhedron_Free(C2);
	    if (QC != Q)
		Polyhedron_Free(QC);
	}
	Q->next = next;
    }
    return C;
}

/*
 * Project on final dim dimensions
 */
Polyhedron* Polyhedron_Project(Polyhedron *P, int dim)
{
    int i;
    int remove = P->Dimension - dim;
    Matrix *T;
    Polyhedron *I;

    if (P->Dimension == dim)
	return Polyhedron_Copy(P);

    T = Matrix_Alloc(dim+1, P->Dimension+1);
    for (i = 0; i < dim+1; ++i)
	value_set_si(T->p[i][i+remove], 1);
    I = Polyhedron_Image(P, T, P->NbConstraints);
    Matrix_Free(T);
    return I;
}

/* Constructs a new constraint that ensures that
 * the first constraint is (strictly) smaller than
 * the second.
 */
static void smaller_constraint(Value *a, Value *b, Value *c, int pos, int shift,
			int len, int strict, Value *tmp)
{
    value_oppose(*tmp, b[pos+1]);
    value_set_si(c[0], 1);
    Vector_Combine(a+1+shift, b+1+shift, c+1, *tmp, a[pos+1], len-shift-1);
    if (strict)
	value_decrement(c[len-shift-1], c[len-shift-1]);
    ConstraintSimplify(c, c, len-shift, tmp);
}


/* For each pair of lower and upper bounds on the first variable,
 * calls fn with the set of constraints on the remaining variables
 * where these bounds are active, i.e., (stricly) larger/smaller than
 * the other lower/upper bounds, the lower and upper bound and the
 * call back data.
 *
 * If the first variable is equal to an affine combination of the
 * other variables then fn is called with both lower and upper
 * pointing to the corresponding equality.
 *
 * If there is no lower (or upper) bound, then NULL is passed
 * as the corresponding bound.
 */
void for_each_lower_upper_bound(Polyhedron *P,
				for_each_lower_upper_bound_init init,
				for_each_lower_upper_bound_fn fn,
				void *cb_data)
{
    unsigned dim = P->Dimension;
    Matrix *M;
    int *pos;
    int i, p, n, z;
    int k, l, k2, l2, q;
    Value g;

    if (value_zero_p(P->Constraint[0][0]) &&
	    value_notzero_p(P->Constraint[0][1])) {
	M = Matrix_Alloc(P->NbConstraints-1, dim-1+2);
	for (i = 1; i < P->NbConstraints; ++i) {
	    value_assign(M->p[i-1][0], P->Constraint[i][0]);
	    Vector_Copy(P->Constraint[i]+2, M->p[i-1]+1, dim);
	}
	if (init)
	    init(1, cb_data);
	fn(M, P->Constraint[0], P->Constraint[0], cb_data);
	Matrix_Free(M);
	return;
    }

    value_init(g);
    pos = ALLOCN(int, P->NbConstraints);

    for (i = 0, z = 0; i < P->NbConstraints; ++i)
	if (value_zero_p(P->Constraint[i][1]))
	    pos[P->NbConstraints-1 - z++] = i;
    /* put those with positive coefficients first; number: p */
    for (i = 0, p = 0, n = P->NbConstraints-z-1; i < P->NbConstraints; ++i)
	if (value_pos_p(P->Constraint[i][1]))
	    pos[p++] = i;
	else if (value_neg_p(P->Constraint[i][1]))
	    pos[n--] = i;
    n = P->NbConstraints-z-p;

    if (init)
	init(p*n, cb_data);

    M = Matrix_Alloc((p ? p-1 : 0) + (n ? n-1 : 0) + z + 1, dim-1+2);
    for (i = 0; i < z; ++i) {
	value_assign(M->p[i][0], P->Constraint[pos[P->NbConstraints-1 - i]][0]);
	Vector_Copy(P->Constraint[pos[P->NbConstraints-1 - i]]+2,
		    M->p[i]+1, dim);
    }
    for (k = p ? 0 : -1; k < p; ++k) {
	for (k2 = 0; k2 < p; ++k2) {
	    if (k2 == k)
		continue;
	    q = 1 + z + k2 - (k2 > k);
	    smaller_constraint(
		P->Constraint[pos[k]],
		P->Constraint[pos[k2]],
		M->p[q], 0, 1, dim+2, k2 > k, &g);
	}
	for (l = n ? p : p-1; l < p+n; ++l) {
	    Value *lower;
	    Value *upper;
	    for (l2 = p; l2 < p+n; ++l2) {
		if (l2 == l)
		    continue;
		q = 1 + z + l2-1 - (l2 > l);
		smaller_constraint(
		    P->Constraint[pos[l2]],
		    P->Constraint[pos[l]],
		    M->p[q], 0, 1, dim+2, l2 > l, &g);
	    }
	    if (p && n)
		smaller_constraint(P->Constraint[pos[k]],
				    P->Constraint[pos[l]],
				    M->p[z], 0, 1, dim+2, 0, &g);
	    lower = p ? P->Constraint[pos[k]] : NULL;
	    upper = n ? P->Constraint[pos[l]] : NULL;
	    fn(M, lower, upper, cb_data);
	}
    }
    Matrix_Free(M);

    free(pos);
    value_clear(g);
}

struct section { Polyhedron * D; evalue E; };

struct PLL_data {
    int nd;
    unsigned MaxRays;
    Polyhedron *C;
    evalue mone;
    struct section *s;
};

static void PLL_init(unsigned n, void *cb_data)
{
    struct PLL_data *data = (struct PLL_data *)cb_data;

    data->s = ALLOCN(struct section, n);
}

/* Computes ceil(-coef/abs(d)) */
static evalue* bv_ceil3(Value *coef, int len, Value d, Polyhedron *P)
{
    Value t;
    evalue *EP;
    Vector *val = Vector_Alloc(len);

    value_init(t);
    Vector_Oppose(coef, val->p, len);
    value_absolute(t, d);

    EP = ceiling(val->p, t, len-1, P);

    value_clear(t);
    Vector_Free(val);

    return EP;
}

static void PLL_cb(Matrix *M, Value *lower, Value *upper, void *cb_data)
{
    struct PLL_data *data = (struct PLL_data *)cb_data;
    unsigned dim = M->NbColumns-1;
    Matrix *M2;
    Polyhedron *T;
    evalue *L, *U;

    assert(lower);
    assert(upper);

    M2 = Matrix_Copy(M);
    T = Constraints2Polyhedron(M2, data->MaxRays);
    Matrix_Free(M2);
    data->s[data->nd].D = DomainIntersection(T, data->C, data->MaxRays);
    Domain_Free(T);

    POL_ENSURE_VERTICES(data->s[data->nd].D);
    if (emptyQ(data->s[data->nd].D)) {
	Polyhedron_Free(data->s[data->nd].D);
	return;
    }
    L = bv_ceil3(lower+1+1, dim-1+1, lower[0+1], data->s[data->nd].D);
    U = bv_ceil3(upper+1+1, dim-1+1, upper[0+1], data->s[data->nd].D);
    eadd(L, U);
    eadd(&data->mone, U);
    emul(&data->mone, U);
    data->s[data->nd].E = *U;
    evalue_free(L);
    free(U);
    ++data->nd;
}

static evalue *ParamLine_Length_mod(Polyhedron *P, Polyhedron *C, unsigned MaxRays)
{
    unsigned dim = P->Dimension;
    unsigned nvar = dim - C->Dimension;
    struct PLL_data data;
    evalue *F;
    int k;

    assert(nvar == 1);

    value_init(data.mone.d);
    evalue_set_si(&data.mone, -1, 1);

    data.nd = 0;
    data.MaxRays = MaxRays;
    data.C = C;
    for_each_lower_upper_bound(P, PLL_init, PLL_cb, &data);

    free_evalue_refs(&data.mone); 

    if (data.nd == 0) {
	free(data.s);
	return evalue_zero();
    }

    F = ALLOC(evalue);
    value_init(F->d);
    value_set_si(F->d, 0);
    F->x.p = new_enode(partition, 2*data.nd, dim-nvar);
    for (k = 0; k < data.nd; ++k) {
	EVALUE_SET_DOMAIN(F->x.p->arr[2*k], data.s[k].D);
	value_clear(F->x.p->arr[2*k+1].d);
	F->x.p->arr[2*k+1] = data.s[k].E;
    }
    free(data.s);

    return F;
}

evalue* ParamLine_Length(Polyhedron *P, Polyhedron *C,
			 struct barvinok_options *options)
{
    evalue* tmp;
    tmp = ParamLine_Length_mod(P, C, options->MaxRays);
    if (options->lookup_table) {
	evalue_mod2table(tmp, C->Dimension);
	reduce_evalue(tmp);
    }
    return tmp;
}

Bool isIdentity(Matrix *M)
{
    unsigned i, j;
    if (M->NbRows != M->NbColumns)
	return False;

    for (i = 0;i < M->NbRows; i ++)
	for (j = 0; j < M->NbColumns; j ++)
	    if (i == j) {
		if(value_notone_p(M->p[i][j]))
		    return False;
	    } else {
		if(value_notzero_p(M->p[i][j]))
		    return False;
	    }
    return True;
}

void Param_Polyhedron_Print(FILE* DST, Param_Polyhedron *PP,
				const char **param_names)
{
  Param_Domain *P;
  Param_Vertices *V;

  for(P=PP->D;P;P=P->next) {
    
    /* prints current val. dom. */
    fprintf(DST, "---------------------------------------\n");
    fprintf(DST, "Domain :\n");
    Print_Domain(DST, P->Domain, param_names);
    
    /* scan the vertices */
    fprintf(DST, "Vertices :\n");
    FORALL_PVertex_in_ParamPolyhedron(V,P,PP) {
	
      /* prints each vertex */
      Print_Vertex(DST, V->Vertex, param_names);
      fprintf(DST, "\n");
    }
    END_FORALL_PVertex_in_ParamPolyhedron;
  }
}

void Enumeration_Print(FILE *Dst, Enumeration *en, const char **params)
{
    for (; en; en = en->next) {
	Print_Domain(Dst, en->ValidityDomain, params);
	print_evalue(Dst, &en->EP, params);
    }
}

void Enumeration_Free(Enumeration *en)
{
  Enumeration *ee;

  while( en )
  {
	  free_evalue_refs( &(en->EP) );
	  Domain_Free( en->ValidityDomain );
	  ee = en ->next;
	  free( en );
	  en = ee;
  }
}

void Enumeration_mod2table(Enumeration *en, unsigned nparam)
{
    for (; en; en = en->next) {
	evalue_mod2table(&en->EP, nparam);
	reduce_evalue(&en->EP);
    }
}

size_t Enumeration_size(Enumeration *en)
{
    size_t s = 0;

    for (; en; en = en->next) {
	s += domain_size(en->ValidityDomain);
	s += evalue_size(&en->EP);
    }
    return s;
}

/* Check whether every set in D2 is included in some set of D1 */
int DomainIncludes(Polyhedron *D1, Polyhedron *D2)
{
    for ( ; D2; D2 = D2->next) {
	Polyhedron *P1;
	for (P1 = D1; P1; P1 = P1->next)
	    if (PolyhedronIncludes(P1, D2))
		break;
	if (!P1)
	    return 0;
    }
    return 1;
}

int line_minmax(Polyhedron *I, Value *min, Value *max)
{
    int i;

    if (I->NbEq >= 1) {
	value_oppose(I->Constraint[0][2], I->Constraint[0][2]);
	/* There should never be a remainder here */
	if (value_pos_p(I->Constraint[0][1]))
	    mpz_fdiv_q(*min, I->Constraint[0][2], I->Constraint[0][1]);
	else
	    mpz_fdiv_q(*min, I->Constraint[0][2], I->Constraint[0][1]);
	value_assign(*max, *min);
    } else for (i = 0; i < I->NbConstraints; ++i) {
	if (value_zero_p(I->Constraint[i][1])) {
	    Polyhedron_Free(I);
	    return 0;
	}

	value_oppose(I->Constraint[i][2], I->Constraint[i][2]);
	if (value_pos_p(I->Constraint[i][1]))
	    mpz_cdiv_q(*min, I->Constraint[i][2], I->Constraint[i][1]);
	else
	    mpz_fdiv_q(*max, I->Constraint[i][2], I->Constraint[i][1]);
    }
    Polyhedron_Free(I);
    return 1;
}

int DomainContains(Polyhedron *P, Value *list_args, int len, 
		   unsigned MaxRays, int set)
{
    int i;
    Value m;

    if (P->Dimension == len)
	return in_domain(P, list_args);

    assert(set); // assume list_args is large enough
    assert((P->Dimension - len) % 2 == 0);
    value_init(m);
    for (i = 0; i < P->Dimension - len; i += 2) {
	int j, k;
	for (j = 0 ; j < P->NbEq; ++j)
	    if (value_notzero_p(P->Constraint[j][1+len+i]))
		break;
	assert(j < P->NbEq);
	value_absolute(m, P->Constraint[j][1+len+i]);
	k = First_Non_Zero(P->Constraint[j]+1, len);
	assert(k != -1);
	assert(First_Non_Zero(P->Constraint[j]+1+k+1, len - k - 1) == -1);
	mpz_fdiv_q(list_args[len+i], list_args[k], m);
	mpz_fdiv_r(list_args[len+i+1], list_args[k], m);
    }
    value_clear(m);

    return in_domain(P, list_args);
}

Polyhedron *DomainConcat(Polyhedron *head, Polyhedron *tail)
{
    Polyhedron *S;
    if (!head)
	return tail;
    for (S = head; S->next; S = S->next)
	;
    S->next = tail;
    return head;
}

evalue *barvinok_lexsmaller_ev(Polyhedron *P, Polyhedron *D, unsigned dim,
			       Polyhedron *C, unsigned MaxRays)
{
    evalue *ranking;
    Polyhedron *RC, *RD, *Q;
    unsigned nparam = dim + C->Dimension;
    unsigned exist;
    Polyhedron *CA;

    RC = LexSmaller(P, D, dim, C, MaxRays);
    RD = RC->next;
    RC->next = NULL;

    exist = RD->Dimension - nparam - dim;
    CA = align_context(RC, RD->Dimension, MaxRays);
    Q = DomainIntersection(RD, CA, MaxRays);
    Polyhedron_Free(CA);
    Domain_Free(RD);
    Polyhedron_Free(RC);
    RD = Q;

    for (Q = RD; Q; Q = Q->next) {
	evalue *t;
	Polyhedron *next = Q->next;
	Q->next = 0;

	t = barvinok_enumerate_e(Q, exist, nparam, MaxRays);

	if (Q == RD)
	    ranking = t;
	else {
	    eadd(t, ranking);
	    evalue_free(t);
	}

	Q->next = next;
    }

    Domain_Free(RD);

    return ranking;
}

Enumeration *barvinok_lexsmaller(Polyhedron *P, Polyhedron *D, unsigned dim,
				 Polyhedron *C, unsigned MaxRays)
{
    evalue *EP = barvinok_lexsmaller_ev(P, D, dim, C, MaxRays);

    return partition2enumeration(EP);
}

/* "align" matrix to have nrows by inserting
 * the necessary number of rows and an equal number of columns in front
 */
Matrix *align_matrix(Matrix *M, int nrows)
{
    int i;
    int newrows = nrows - M->NbRows;
    Matrix *M2 = Matrix_Alloc(nrows, newrows + M->NbColumns);
    for (i = 0; i < newrows; ++i)
	value_set_si(M2->p[i][i], 1);
    for (i = 0; i < M->NbRows; ++i)
	Vector_Copy(M->p[i], M2->p[newrows+i]+newrows, M->NbColumns);
    return M2;
}

static void print_varlist(FILE *out, int n, char **names)
{
    int i;
    fprintf(out, "[");
    for (i = 0; i < n; ++i) {
	if (i)
	    fprintf(out, ",");
	fprintf(out, "%s", names[i]);
    }
    fprintf(out, "]");
}

static void print_term(FILE *out, Value v, int pos, int dim, int nparam,
		       char **iter_names, char **param_names, int *first)
{
    if (value_zero_p(v)) {
	if (first && *first && pos >= dim + nparam)
	    fprintf(out, "0");
	return;
    }

    if (first) {
	if (!*first && value_pos_p(v))
	    fprintf(out, "+");
	*first = 0;
    }
    if (pos < dim + nparam) {
	if (value_mone_p(v))
	    fprintf(out, "-");
	else if (!value_one_p(v))
	    value_print(out, VALUE_FMT, v);
	if (pos < dim)
	    fprintf(out, "%s", iter_names[pos]);
	else
	    fprintf(out, "%s", param_names[pos-dim]);
    } else
	value_print(out, VALUE_FMT, v);
}

char **util_generate_names(int n, const char *prefix)
{
    int i;
    int len = (prefix ? strlen(prefix) : 0) + 10;
    char **names = ALLOCN(char*, n);
    if (!names) {
	fprintf(stderr, "ERROR: memory overflow.\n");
	exit(1);
    }
    for (i = 0; i < n; ++i) {
	names[i] = ALLOCN(char, len);
	if (!names[i]) {
	    fprintf(stderr, "ERROR: memory overflow.\n");
	    exit(1);
	}
	if (!prefix)
	    snprintf(names[i], len, "%d", i);
	else
	    snprintf(names[i], len, "%s%d", prefix, i);
    }

    return names;
}

void util_free_names(int n, char **names)
{
    int i;
    for (i = 0; i < n; ++i)
	free(names[i]);
    free(names);
}

void Polyhedron_pprint(FILE *out, Polyhedron *P, int dim, int nparam,
		       char **iter_names, char **param_names)
{
    int i, j;
    Value tmp;

    assert(dim + nparam == P->Dimension);

    value_init(tmp);

    fprintf(out, "{ ");
    if (nparam) {
	print_varlist(out, nparam, param_names);
	fprintf(out, " -> ");
    }
    print_varlist(out, dim, iter_names);
    fprintf(out, " : ");

    if (emptyQ2(P))
	fprintf(out, "FALSE");
    else for (i = 0; i < P->NbConstraints; ++i) {
	int first = 1;
	int v = First_Non_Zero(P->Constraint[i]+1, P->Dimension);
	if (v == -1 && value_pos_p(P->Constraint[i][0]))
	    continue;
	if (i)
	    fprintf(out, " && ");
	if (v == -1 && value_notzero_p(P->Constraint[i][1+P->Dimension]))
	    fprintf(out, "FALSE");
	else if (value_pos_p(P->Constraint[i][v+1])) {
	    print_term(out, P->Constraint[i][v+1], v, dim, nparam, 
		       iter_names, param_names, NULL);
	    if (value_zero_p(P->Constraint[i][0]))
		fprintf(out, " = ");
	    else
		fprintf(out, " >= ");
	    for (j = v+1; j <= dim+nparam; ++j) {
		value_oppose(tmp, P->Constraint[i][1+j]);
		print_term(out, tmp, j, dim, nparam, 
			   iter_names, param_names, &first);
	    }
	} else {
	    value_oppose(tmp, P->Constraint[i][1+v]);
	    print_term(out, tmp, v, dim, nparam, 
		       iter_names, param_names, NULL);
	    fprintf(out, " <= ");
	    for (j = v+1; j <= dim+nparam; ++j)
		print_term(out, P->Constraint[i][1+j], j, dim, nparam, 
			   iter_names, param_names, &first);
	}
    }

    fprintf(out, " }\n");

    value_clear(tmp);
}

/* Construct a cone over P with P placed at x_d = 1, with
 * x_d the coordinate of an extra dimension
 *
 * It's probably a mistake to depend so much on the internal
 * representation.  We should probably simply compute the
 * vertices/facets first.
 */
Polyhedron *Cone_over_Polyhedron(Polyhedron *P)
{
    unsigned NbConstraints = 0;
    unsigned NbRays = 0;
    Polyhedron *C;
    int i;

    if (POL_HAS(P, POL_INEQUALITIES))
	NbConstraints = P->NbConstraints + 1;
    if (POL_HAS(P, POL_POINTS))
	NbRays = P->NbRays + 1;

    C = Polyhedron_Alloc(P->Dimension+1, NbConstraints, NbRays);
    if (POL_HAS(P, POL_INEQUALITIES)) {
	C->NbEq = P->NbEq;
	for (i = 0; i < P->NbConstraints; ++i)
	    Vector_Copy(P->Constraint[i], C->Constraint[i], P->Dimension+2);
	/* n >= 0 */
	value_set_si(C->Constraint[P->NbConstraints][0], 1);
	value_set_si(C->Constraint[P->NbConstraints][1+P->Dimension], 1);
    }
    if (POL_HAS(P, POL_POINTS)) {
	C->NbBid = P->NbBid;
	for (i = 0; i < P->NbRays; ++i)
	    Vector_Copy(P->Ray[i], C->Ray[i], P->Dimension+2);
	/* vertex 0 */
	value_set_si(C->Ray[P->NbRays][0], 1);
	value_set_si(C->Ray[P->NbRays][1+C->Dimension], 1);
    }
    POL_SET(C, POL_VALID);
    if (POL_HAS(P, POL_INEQUALITIES))
	POL_SET(C, POL_INEQUALITIES);
    if (POL_HAS(P, POL_POINTS))
	POL_SET(C, POL_POINTS);
    if (POL_HAS(P, POL_VERTICES))
	POL_SET(C, POL_VERTICES);
    return C;
}

/* Returns a (dim+nparam+1)x((dim-n)+nparam+1) matrix
 * mapping the transformed subspace back to the original space.
 * n is the number of equalities involving the variables
 * (i.e., not purely the parameters).
 * The remaining n coordinates in the transformed space would
 * have constant (parametric) values and are therefore not
 * included in the variables of the new space.
 */
Matrix *compress_variables(Matrix *Equalities, unsigned nparam)
{
    unsigned dim = (Equalities->NbColumns-2) - nparam;
    Matrix *M, *H, *Q, *U, *C, *ratH, *invH, *Ul, *T1, *T2, *T;
    Value mone;
    int n, i, j;
    int ok;

    for (n = 0; n < Equalities->NbRows; ++n)
	if (First_Non_Zero(Equalities->p[n]+1, dim) == -1)
	    break;
    if (n == 0)
	return Identity(dim+nparam+1);
    value_init(mone);
    value_set_si(mone, -1);
    M = Matrix_Alloc(n, dim);
    C = Matrix_Alloc(n+1, nparam+1);
    for (i = 0; i < n; ++i) {
	Vector_Copy(Equalities->p[i]+1, M->p[i], dim);
	Vector_Scale(Equalities->p[i]+1+dim, C->p[i], mone, nparam+1);
    }
    value_set_si(C->p[n][nparam], 1);
    left_hermite(M, &H, &Q, &U);
    Matrix_Free(M);
    Matrix_Free(Q);
    value_clear(mone);

    ratH = Matrix_Alloc(n+1, n+1);
    invH = Matrix_Alloc(n+1, n+1);
    for (i = 0; i < n; ++i)
	Vector_Copy(H->p[i], ratH->p[i], n);
    value_set_si(ratH->p[n][n], 1);
    ok = Matrix_Inverse(ratH, invH);
    assert(ok);
    Matrix_Free(H);
    Matrix_Free(ratH);
    T1 = Matrix_Alloc(n+1, nparam+1);
    Matrix_Product(invH, C, T1);
    Matrix_Free(C);
    Matrix_Free(invH);
    if (value_notone_p(T1->p[n][nparam])) {
	for (i = 0; i < n; ++i) {
	    if (!mpz_divisible_p(T1->p[i][nparam], T1->p[n][nparam])) {
		Matrix_Free(T1);
		Matrix_Free(U);
		return NULL;
	    }
	    /* compress_params should have taken care of this */
	    for (j = 0; j < nparam; ++j)
		assert(mpz_divisible_p(T1->p[i][j], T1->p[n][nparam]));
	    Vector_AntiScale(T1->p[i], T1->p[i], T1->p[n][nparam], nparam+1);
	}
	value_set_si(T1->p[n][nparam], 1);
    }
    Ul = Matrix_Alloc(dim+1, n+1);
    for (i = 0; i < dim; ++i)
	Vector_Copy(U->p[i], Ul->p[i], n);
    value_set_si(Ul->p[dim][n], 1);
    T2 = Matrix_Alloc(dim+1, nparam+1);
    Matrix_Product(Ul, T1, T2);
    Matrix_Free(Ul);
    Matrix_Free(T1);

    T = Matrix_Alloc(dim+nparam+1, (dim-n)+nparam+1);
    for (i = 0; i < dim; ++i) {
	Vector_Copy(U->p[i]+n, T->p[i], dim-n);
	Vector_Copy(T2->p[i], T->p[i]+dim-n, nparam+1);
    }
    for (i = 0; i < nparam+1; ++i)
	value_set_si(T->p[dim+i][(dim-n)+i], 1);
    assert(value_one_p(T2->p[dim][nparam]));
    Matrix_Free(U);
    Matrix_Free(T2);

    return T;
}

/* Computes the left inverse of an affine embedding M and, if Eq is not NULL,
 * the equalities that define the affine subspace onto which M maps
 * its argument.
 */
Matrix *left_inverse(Matrix *M, Matrix **Eq)
{
    int i, ok;
    Matrix *L, *H, *Q, *U, *ratH, *invH, *Ut, *inv;
    Vector *t;

    if (M->NbColumns == 1) {
	inv = Matrix_Alloc(1, M->NbRows);
	value_set_si(inv->p[0][M->NbRows-1], 1);
	if (Eq) {
	    *Eq = Matrix_Alloc(M->NbRows-1, 1+(M->NbRows-1)+1);
	    for (i = 0; i < M->NbRows-1; ++i) {
		value_oppose((*Eq)->p[i][1+i], M->p[M->NbRows-1][0]);
		value_assign((*Eq)->p[i][1+(M->NbRows-1)], M->p[i][0]);
	    }
	}
	return inv;
    }
    if (Eq)
	*Eq = NULL;
    L = Matrix_Alloc(M->NbRows-1, M->NbColumns-1);
    for (i = 0; i < L->NbRows; ++i)
	Vector_Copy(M->p[i], L->p[i], L->NbColumns);
    right_hermite(L, &H, &U, &Q);
    Matrix_Free(L);
    Matrix_Free(Q);
    t = Vector_Alloc(U->NbColumns);
    for (i = 0; i < U->NbColumns; ++i)
	value_oppose(t->p[i], M->p[i][M->NbColumns-1]);
    if (Eq) {
	*Eq = Matrix_Alloc(H->NbRows - H->NbColumns, 2 + U->NbColumns);
	for (i = 0; i < H->NbRows - H->NbColumns; ++i) {
	    Vector_Copy(U->p[H->NbColumns+i], (*Eq)->p[i]+1, U->NbColumns);
	    Inner_Product(U->p[H->NbColumns+i], t->p, U->NbColumns,
			  (*Eq)->p[i]+1+U->NbColumns);
	}
    }
    ratH = Matrix_Alloc(H->NbColumns+1, H->NbColumns+1);
    invH = Matrix_Alloc(H->NbColumns+1, H->NbColumns+1);
    for (i = 0; i < H->NbColumns; ++i)
	Vector_Copy(H->p[i], ratH->p[i], H->NbColumns);
    value_set_si(ratH->p[ratH->NbRows-1][ratH->NbColumns-1], 1);
    Matrix_Free(H);
    ok = Matrix_Inverse(ratH, invH);
    assert(ok);
    Matrix_Free(ratH);
    Ut = Matrix_Alloc(invH->NbRows, U->NbColumns+1);
    for (i = 0; i < Ut->NbRows-1; ++i) {
	Vector_Copy(U->p[i], Ut->p[i], U->NbColumns);
	Inner_Product(U->p[i], t->p, U->NbColumns, &Ut->p[i][Ut->NbColumns-1]);
    }
    Matrix_Free(U);
    Vector_Free(t);
    value_set_si(Ut->p[Ut->NbRows-1][Ut->NbColumns-1], 1);
    inv = Matrix_Alloc(invH->NbRows, Ut->NbColumns);
    Matrix_Product(invH, Ut, inv);
    Matrix_Free(Ut);
    Matrix_Free(invH);
    return inv;
}

/* Check whether all rays are revlex positive in the parameters
 */
int Polyhedron_has_revlex_positive_rays(Polyhedron *P, unsigned nparam)
{
    int r;
    for (r = 0; r < P->NbRays; ++r) {
	int i;
	if (value_notzero_p(P->Ray[r][P->Dimension+1]))
	    continue;
	for (i = P->Dimension-1; i >= P->Dimension-nparam; --i) {
	    if (value_neg_p(P->Ray[r][i+1]))
		return 0;
	    if (value_pos_p(P->Ray[r][i+1]))
		break;
	}
	/* A ray independent of the parameters */
	if (i < P->Dimension-nparam)
	    return 0;
    }
    return 1;
}

static Polyhedron *Recession_Cone(Polyhedron *P, unsigned nparam, unsigned MaxRays)
{
    int i;
    unsigned nvar = P->Dimension - nparam;
    Matrix *M = Matrix_Alloc(P->NbConstraints, 1 + nvar + 1);
    Polyhedron *R;
    for (i = 0; i < P->NbConstraints; ++i)
	Vector_Copy(P->Constraint[i], M->p[i], 1+nvar);
    R = Constraints2Polyhedron(M, MaxRays);
    Matrix_Free(M);
    return R;
}

int Polyhedron_is_unbounded(Polyhedron *P, unsigned nparam, unsigned MaxRays)
{
    int i;
    int is_unbounded;
    Polyhedron *R = Recession_Cone(P, nparam, MaxRays);
    POL_ENSURE_VERTICES(R);
    if (R->NbBid == 0)
	for (i = 0; i < R->NbRays; ++i)
	    if (value_zero_p(R->Ray[i][1+R->Dimension]))
		break;
    is_unbounded = R->NbBid > 0 || i < R->NbRays;
    Polyhedron_Free(R);
    return is_unbounded;
}

static void SwapColumns(Value **V, int n, int i, int j)
{
    int r;

    for (r = 0; r < n; ++r)
	value_swap(V[r][i], V[r][j]);
}

void Polyhedron_ExchangeColumns(Polyhedron *P, int Column1, int Column2)
{
    SwapColumns(P->Constraint, P->NbConstraints, Column1, Column2);
    SwapColumns(P->Ray, P->NbRays, Column1, Column2);
    if (P->NbEq) {
	Matrix M;
	Polyhedron_Matrix_View(P, &M, P->NbConstraints);
	Gauss(&M, P->NbEq, P->Dimension+1);
    }
}

/* perform transposition inline; assumes M is a square matrix */
void Matrix_Transposition(Matrix *M)
{
    int i, j;

    assert(M->NbRows == M->NbColumns);
    for (i = 0; i < M->NbRows; ++i)
	for (j = i+1; j < M->NbColumns; ++j)
	    value_swap(M->p[i][j], M->p[j][i]);
}

/* Matrix "view" of first rows rows */
void Polyhedron_Matrix_View(Polyhedron *P, Matrix *M, unsigned rows)
{
    M->NbRows = rows;
    M->NbColumns = P->Dimension+2;
    M->p_Init = P->p_Init;
    M->p = P->Constraint;
}

int Last_Non_Zero(Value *p, unsigned len)
{
	int i;

	for (i = len - 1; i >= 0; --i)
		if (value_notzero_p(p[i]))
			return i;

	return -1;
}
