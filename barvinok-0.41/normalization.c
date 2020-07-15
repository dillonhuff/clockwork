#include <assert.h>
#include <barvinok/util.h>
#include "normalization.h"

static int is_unit_row(Value *row, int pos, int len)
{
    if (!value_one_p(row[pos]) && !value_mone_p(row[pos]))
	return 0;
    return First_Non_Zero(row+pos+1, len-(pos+1)) == -1;
}

/* Transform the constraints C to "standard form".
 * In particular, if C is described by
 *		A x + b(p) >= 0
 * then this function returns a matrix H = A U, A = H Q, such
 * that D x' = D Q x >= -b(p), with D a diagonal matrix with
 * positive entries.  The calling function can then construct
 * the standard form H' x' - I s + b(p) = 0, with H' the rows of H
 * that are not positive multiples of unit vectors
 * (since those correspond to D x' >= -b(p)).
 * The number of rows in H' is returned in *rows_p.
 * Optionally returns the matrix that maps the new variables
 * back to the old variables x = U x'.
 * Note that the rows of H (and C) may be reordered by this function.
 */
Matrix *standard_constraints(Matrix *C, unsigned nparam, int *rows_p,
			     Matrix **T)
{
    unsigned dim = C->NbColumns - 2;
    unsigned nvar = dim - nparam;
    int i, j, d;
    int rows;
    Matrix *M;
    Matrix *H, *U, *Q;

    /* move constraints only involving parameters down
     * and move unit vectors (if there are any) to the right place.
     */
    for (d = 0, j = C->NbRows; d < j; ++d) {
	int index;
	index = First_Non_Zero(C->p[d]+1, nvar);
	if (index != -1) {
	    if (index != d &&
		is_unit_row(C->p[d]+1, index, nvar)) {
		Vector_Exchange(C->p[d], C->p[index], dim+2);
		if (index > d)
		    --d;
	    }
	    continue;
	}
	while (d < --j && First_Non_Zero(C->p[j]+1, nvar) == -1)
	    ;
	if (d >= j)
	    break;
	Vector_Exchange(C->p[d], C->p[j], dim+2);
    }
    M = Matrix_Alloc(d, nvar);
    for (j = 0; j < d; ++j)
	Vector_Copy(C->p[j]+1, M->p[j], nvar);

    neg_left_hermite(M, &H, &Q, &U);
    Matrix_Free(M);
    Matrix_Free(Q);
    if (T)
	*T = U;
    else
	Matrix_Free(U);

    /* Rearrange rows such that top of H is lower diagonal and
     * compute the number of non (multiple of) unit-vector rows.
     */
    rows = H->NbRows-nvar;
    for (i = 0; i < H->NbColumns; ++i) {
	for (j = i; j < H->NbRows; ++j)
	    if (value_notzero_p(H->p[j][i]))
		break;
	if (j != i) {
	    Vector_Exchange(C->p[i], C->p[j], dim+2);
	    Vector_Exchange(H->p[i], H->p[j], H->NbColumns);
	}
	if (First_Non_Zero(H->p[i], i) != -1)
	    rows++;
    }
    if (rows_p)
	*rows_p = rows;

    return H;
}

/*
 * Transform the constraints of PE involving existentially
 * quantified variables, placed in front in PE, to "standard form".
 *
 * The resulting matrix has the existential variables after
 * the unquantified variables again.
 */
static Matrix *exist_standard_constraints(Polyhedron *PE, unsigned nvar)
{
    int i, i1, i2;
    unsigned exist = PE->Dimension - nvar;
    Matrix *M = Matrix_Alloc(PE->NbConstraints, 2+PE->Dimension);
    Matrix *M2 = Matrix_Alloc(PE->NbConstraints, 2+PE->Dimension);
    Matrix *S2;
    Value c;

    for (i = i1 = i2 = 0; i < PE->NbConstraints; ++i) {
	if (First_Non_Zero(PE->Constraint[i]+1, exist) == -1) {
	    value_assign(M->p[i1][0], PE->Constraint[i][0]);
	    Vector_Copy(PE->Constraint[i]+1+exist, M->p[i1]+1, nvar);
	    value_assign(M->p[i1][1+PE->Dimension],
			 PE->Constraint[i][1+PE->Dimension]);
	    ++i1;
	} else {
	    Vector_Copy(PE->Constraint[i], M2->p[i2], M2->NbColumns);
	    ++i2;
	}
    }
    M->NbRows = i1;
    M2->NbRows = i2;

    S2 = standard_constraints(M2, nvar, NULL, NULL);

    for (i = 0; i < M2->NbRows; ++i) {
	value_assign(M->p[M->NbRows+i][0], M2->p[i][0]);
	Vector_Copy(M2->p[i]+1+exist, M->p[M->NbRows+i]+1, nvar);
	Vector_Copy(S2->p[i], M->p[M->NbRows+i]+1+nvar, exist);
	value_assign(M->p[M->NbRows+i][1+PE->Dimension],
			M2->p[i][1+PE->Dimension]);
    }

    /* Make sure "standard" constraints for existential variables
     * have only non-positive coefficients for the variables.
     */
    assert(M2->NbRows >= exist);
    value_init(c);
    for (i = 0; i < exist; ++i) {
	assert(value_pos_p(S2->p[i][i]));
	for (i1 = 0; i1 < nvar; ++i1) {
	    if (value_negz_p(M->p[M->NbRows+i][1+i1]))
		continue;
	    mpz_cdiv_q(c, M->p[M->NbRows+i][1+i1], S2->p[i][i]);
	    value_oppose(c, c);
	    for (i2 = i; i2 < M2->NbRows; ++i2)
		value_addmul(M->p[M->NbRows+i2][1+i1], c, S2->p[i2][i]);
	}
    }
    value_clear(c);
    M->NbRows += M2->NbRows;

    Matrix_Free(M2);

    return M;
}

/*
 * For those variables x that may attain negative values,
 * compute a translations t such that x' = x + t is sure
 * to attain only non-negative values, i.e., if M is
 *
 *		A x + b >= 0
 *
 * then the x' in
 *
 *		A x' + b - A t >= 0
 *
 * are sure to attain only non-negative values.
 *
 * The first nvar shifts have already been set prior to
 * calling this function.
 */
static void compute_shifts(Matrix *M, unsigned nvar, Vector *shifts)
{
    int c, r;
    unsigned dim = M->NbColumns-2;
    for (c = nvar, r = 0; c < dim; ++c) {
	for ( ; r < M->NbRows; ++r) {
	    if (value_notzero_p(M->p[r][1+c]))
		break;
	}
	assert(r < M->NbRows);
	assert(value_pos_p(M->p[r][1+c]));
	if (c > 0)
	    Inner_Product(M->p[r]+1, shifts->p+1, c, &shifts->p[1+c]);
	value_subtract(shifts->p[1+c], M->p[r][1+dim], shifts->p[1+c]);
	if (value_pos_p(shifts->p[1+c]))
	    mpz_cdiv_q(shifts->p[1+c], shifts->p[1+c], M->p[r][1+c]);
	else
	    value_set_si(shifts->p[1+c], 0);
    }
}

/*
 * Move the existential variables before the unquantified variables.
 */
static Polyhedron *move_exists_in_front(Polyhedron *D, unsigned nvar,
					unsigned MaxRays)
{
    Polyhedron *P;
    Polyhedron *DE = NULL;
    Polyhedron **next = &DE;

    for (P = D; P; P = P->next) {
	int i;
	unsigned exist = P->Dimension - nvar;
	Matrix *M = Matrix_Alloc(P->NbConstraints, 2+P->Dimension);

	for (i = 0; i < P->NbConstraints; ++i) {
	    value_assign(M->p[i][0], P->Constraint[i][0]);
	    Vector_Copy(P->Constraint[i]+1, M->p[i]+1+exist, nvar);
	    Vector_Copy(P->Constraint[i]+1+nvar, M->p[i]+1, exist);
	    value_assign(M->p[i][1+P->Dimension],
			 P->Constraint[i][1+P->Dimension]);
	}

	*next = Constraints2Polyhedron(M, MaxRays);
	Matrix_Free(M);

	next = &(*next)->next;
    }

    return DE;
}

/*
 * Compute the shifts s for the variables x, such that x + s >= 0.
 * DE is a union of polyhedra with the existential variables first.
 *
 * We simply project out the existential variables, compute
 * the convex hull and then compute the minimal coordinate
 * in each direction of all the vertices.
 * The shift is the opposite of this minimal coordinate or zero.
 */
static Vector *compute_var_shifts(Polyhedron *DE, unsigned nvar,
					unsigned MaxRays)
{
    Polyhedron *PE;
    Polyhedron *D = NULL;
    Polyhedron **next = &D;
    Polyhedron *C;
    Vector *shifts;
    int i, j;
    Value tmp;

    for (PE = DE; PE; PE = PE->next) {
	*next = Polyhedron_Project(PE, nvar);
	next = &(*next)->next;
    }
    C = DomainConvex(D, MaxRays);
    Domain_Free(D);
    POL_ENSURE_VERTICES(C);

    shifts = Vector_Alloc(C->Dimension);
    value_init(tmp);
    for (i = 0; i < C->Dimension; ++i) {
	for (j = 0; j < C->NbRays; ++j) {
	    assert(value_notzero_p(C->Ray[j][1+C->Dimension]));
	    if (value_posz_p(C->Ray[j][1+i]))
		continue;
	    mpz_fdiv_q(tmp, C->Ray[j][1+i], C->Ray[j][1+C->Dimension]);
	    if (value_lt(tmp, shifts->p[i]))
		value_assign(shifts->p[i], tmp);
	}
	value_oppose(shifts->p[i], shifts->p[i]);
    }
    value_clear(tmp);
    Polyhedron_Free(C);

    return shifts;
}

/*
 * Given a union of polyhedra, with possibly existentially
 * quantified variables, but no parameters, apply a unimodular
 * transformation with constant translation to the variables,
 * and a unimodular transformation with a translation possibly
 * depending on the variables to the existentially quantified variables,
 * such that all variables and all existentially quantified variables
 * attain only non-negative values.
 *
 * The projection onto the variables is assumed to be a polytope.
 */
Polyhedron *skew_to_positive_orthant(Polyhedron *D, unsigned nvar,
					unsigned MaxRays)
{
    Polyhedron *PE;
    Polyhedron *R = NULL;
    Polyhedron **next = &R;
    Vector *var_shifts;
    Polyhedron *DE;

    DE = move_exists_in_front(D, nvar, MaxRays);
    var_shifts = compute_var_shifts(DE, nvar, MaxRays);

    for (PE = DE; PE; PE = PE->next) {
	Matrix *M, *C;
	Vector *shifts, *offsets;
	int i;

	M = exist_standard_constraints(PE, nvar);
	shifts = Vector_Alloc(M->NbColumns);
	Vector_Copy(var_shifts->p, shifts->p+1, nvar);
	compute_shifts(M, nvar, shifts);

	offsets = Vector_Alloc(M->NbRows);
	Matrix_Vector_Product(M, shifts->p, offsets->p);
	Vector_Free(shifts);

	C = Matrix_Alloc(M->NbRows, M->NbColumns);
	for (i = 0; i < M->NbRows; ++i) {
	    value_assign(C->p[i][0], M->p[i][0]);
	    Vector_Copy(M->p[i]+1, C->p[i]+1, M->NbColumns-2);
	    value_subtract(C->p[i][M->NbColumns-1],
			    M->p[i][M->NbColumns-1], offsets->p[i]);
	}
	Vector_Free(offsets);
	Matrix_Free(M);

	*next = Constraints2Polyhedron(C, MaxRays);
	Matrix_Free(C);

	next = &(*next)->next;
    }
    Vector_Free(var_shifts);
    Domain_Free(DE);
    return R;
}
