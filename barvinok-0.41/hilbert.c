#include <assert.h>
#include <stdlib.h>
#define Vector ZSolveVector
#define Matrix ZSolveMatrix
#include "zsolve/libzsolve.h"
#undef Vector
#undef Matrix
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "hilbert.h"
#include "normalization.h"
#include "polysign.h"
#include "remove_equalities.h"

static ZSolveMatrix Matrix2zsolve(Matrix *M)
{
    int i, j;
    ZSolveMatrix zmatrix;

    zmatrix = createMatrix(M->NbColumns-2, M->NbRows);
    for (i = 0; i < M->NbRows; ++i)
	for (j = 0; j < M->NbColumns-2; ++j) {
	    assert(mpz_cmp_si(M->p[i][1+j], -MAXINT) > 0);
	    assert(mpz_cmp_si(M->p[i][1+j], MAXINT) < 0);
	    zmatrix->Data[i*zmatrix->Width+j] = mpz_get_si(M->p[i][1+j]);
	}

    return zmatrix;
}

static Matrix *VectorArray2Matrix(VectorArray array, unsigned cols)
{
    int i, j;
    Matrix *M = Matrix_Alloc(array->Size, cols+1);

    for (i = 0; i < array->Size; ++i) {
	for (j = 0; j < cols; ++j)
	    value_set_si(M->p[i][j], array->Data[i][j]);
	value_set_si(M->p[i][cols], 1);
    }
    return M;
}

static void Polyhedron_Remove_Positivity_Constraint(Polyhedron *P)
{
    int i;

    for (i = 0; i < P->NbConstraints; ++i) {
	if (First_Non_Zero(P->Constraint[i]+1, P->Dimension) != -1)
	    continue;
	if (i < P->NbConstraints-1)
	    Vector_Exchange(P->Constraint[i],
			    P->Constraint[P->NbConstraints-1],
			    P->Dimension+2);
	P->NbConstraints--;
	--i;
    }
}

/* Return
 *             T 0
 *             0 1
 */
static Matrix *homogenize(Matrix *T)
{
    int i;
    Matrix *H = Matrix_Alloc(T->NbRows+1, T->NbColumns+1);

    for (i = 0; i < T->NbRows; ++i)
	Vector_Copy(T->p[i], H->p[i], T->NbColumns);
    value_set_si(H->p[T->NbRows][T->NbColumns], 1);
    return H;
}

static Matrix *Polyhedron2standard_form(Polyhedron *P, Matrix **T)
{
    int i, j;
    int rows;
    unsigned dim = P->Dimension;
    Matrix *M2;
    Matrix *H, *U;
    Matrix M;

    assert(P->NbEq == 0);
    Polyhedron_Remove_Positivity_Constraint(P);
    for (i = 0; i < P->NbConstraints; ++i)
	assert(value_zero_p(P->Constraint[i][1+dim]));

    Polyhedron_Matrix_View(P, &M, P->NbConstraints);
    H = standard_constraints(&M, 0, &rows, &U);
    *T = homogenize(U);
    Matrix_Free(U);

    M2 = Matrix_Alloc(rows, 2+dim+rows);

    for (i = dim; i < H->NbRows; ++i) {
	Vector_Copy(H->p[i], M2->p[i-dim]+1, dim);
	value_set_si(M2->p[i-dim][1+i], -1);
    }
    for (i = 0, j = H->NbRows-dim; i < dim; ++i) {
	if (First_Non_Zero(H->p[i], i) == -1)
	    continue;
	Vector_Oppose(H->p[i], M2->p[j]+1, dim);
	value_set_si(M2->p[j][1+j+dim], 1);
	++j;
    }
    Matrix_Free(H);
    return M2;
}

/* Assumes C is a linear cone (i.e. with apex zero).
 * All equalities are removed first to speed up the computation
 * in zsolve.
 */
Matrix *Cone_Hilbert_Basis(Polyhedron *C, unsigned MaxRays)
{
    unsigned dim;
    int i;
    Matrix *M2, *M3, *T;
    Matrix *CV = NULL;
    LinearSystem initialsystem;
    ZSolveMatrix matrix;
    ZSolveVector rhs;
    ZSolveContext ctx;

    remove_all_equalities(&C, NULL, NULL, &CV, 0, MaxRays);
    dim = C->Dimension;

    for (i = 0; i < C->NbConstraints; ++i)
	assert(value_zero_p(C->Constraint[i][1+dim]) ||
	       First_Non_Zero(C->Constraint[i]+1, dim) == -1);

    M2 = Polyhedron2standard_form(C, &T);
    matrix = Matrix2zsolve(M2);
    Matrix_Free(M2);

    rhs = createVector(matrix->Height);
    for (i = 0; i < matrix->Height; i++)
	rhs[i] = 0;

    initialsystem = createLinearSystem();
    setLinearSystemMatrix(initialsystem, matrix);
    deleteMatrix(matrix);

    setLinearSystemRHS(initialsystem, rhs);
    deleteVector(rhs);

    setLinearSystemLimit(initialsystem, -1, 0, MAXINT, 0);
    setLinearSystemEquationType(initialsystem, -1, EQUATION_EQUAL, 0);

    ctx = createZSolveContextFromSystem(initialsystem, NULL, 0, 0, NULL, NULL);
    zsolveSystem(ctx, 0);

    M2 = VectorArray2Matrix(ctx->Homs, C->Dimension);
    deleteZSolveContext(ctx, 1);
    Matrix_Transposition(T);
    M3 = Matrix_Alloc(M2->NbRows, M2->NbColumns);
    Matrix_Product(M2, T, M3);
    Matrix_Free(M2);
    Matrix_Free(T);

    if (CV) {
	Matrix *T, *M;
	T = Transpose(CV);
	M = Matrix_Alloc(M3->NbRows, T->NbColumns);
	Matrix_Product(M3, T, M);
	Matrix_Free(M3);
	Matrix_Free(CV);
	Matrix_Free(T);
	Polyhedron_Free(C);
	M3 = M;
    }

    return M3;
}

/* Assumes no two arrays of values are the same, so we can just
 * look for the first different elements, without knowing the
 * length of the arrays.
 */
static int lex_cmp(const void *va, const void *vb)
{
    int i;
    const Value *a = *(const Value **)va;
    const Value *b = *(const Value **)vb;

    for (i = 0; ; ++i) {
	int sign = mpz_cmp(a[i], b[i]);
	if (sign)
	    return sign;
    }
}

/* Compute integer hull of truncated linear cone C, i.e., of C with
 * the origin removed.
 * Here, we do this by first computing the Hilbert basis of C
 * and then discarding elements from this basis that are rational
 * overconvex combinations of other elements in the basis.
 */
Matrix *Cone_Hilbert_Integer_Hull(Polyhedron *C,
				  struct barvinok_options *options)
{
    int i, j, k;
    Matrix *hilbert = Cone_Hilbert_Basis(C, options->MaxRays);
    Matrix *rays, *hull;
    unsigned dim = C->Dimension;
    Value tmp;
    unsigned MaxRays = options->MaxRays;

    /* When checking for redundant points below, we want to
     * check if there are any _rational_ solutions.
     */
    POL_UNSET(options->MaxRays, POL_INTEGER);

    POL_ENSURE_VERTICES(C);
    rays = Matrix_Alloc(C->NbRays-1, C->Dimension);
    for (i = 0, j = 0; i < C->NbRays; ++i) {
	if (value_notzero_p(C->Ray[i][1+C->Dimension]))
	    continue;
	Vector_Copy(C->Ray[i]+1, rays->p[j++], C->Dimension);
    }

    /* We only sort the pointers into the big Value array */
    qsort(rays->p, rays->NbRows, sizeof(Value *), lex_cmp);
    qsort(hilbert->p, hilbert->NbRows, sizeof(Value *), lex_cmp);

    /* Remove rays from Hilbert basis */
    for (i = 0, j = 0, k = 0; i < hilbert->NbRows && j < rays->NbRows; ++i) {
	if (Vector_Equal(hilbert->p[i], rays->p[j], C->Dimension))
	    ++j;
	else
	    hilbert->p[k++] = hilbert->p[i];
    }
    hilbert->NbRows = k;

    /* Now remove points that are overconvex combinations of other points */
    value_init(tmp);
    for (i = 0; hilbert->NbRows > 1 && i < hilbert->NbRows; ++i) {
	Matrix *LP;
	Vector *obj;
	int nray = rays->NbRows;
	int npoint = hilbert->NbRows;
	enum lp_result result;

	LP = Matrix_Alloc(dim + 1 + nray + (npoint-1), 2 + nray + (npoint-1));
	for (j = 0; j < dim; ++j) {
	    for (k = 0; k < nray; ++k)
		value_assign(LP->p[j][k+1], rays->p[k][j]);
	    for (k = 0; k < npoint; ++k) {
		if (k == i)
		    value_oppose(LP->p[j][1+nray+npoint-1], hilbert->p[k][j]);
		else
		    value_assign(LP->p[j][1+nray+k-(k>i)], hilbert->p[k][j]);
	    }
	}
	value_set_si(LP->p[dim][0], 1);
	for (k = 0; k < nray+npoint-1; ++k)
	    value_set_si(LP->p[dim][1+k], 1);
	value_set_si(LP->p[dim][LP->NbColumns-1], -1);
	for (k = 0; k < LP->NbColumns-2; ++k) {
	    value_set_si(LP->p[dim+1+k][0], 1);
	    value_set_si(LP->p[dim+1+k][1+k], 1);
	}

	/* Somewhat arbitrary objective function. */
	obj = Vector_Alloc(LP->NbColumns-1);
	value_set_si(obj->p[0], 1);
	value_set_si(obj->p[obj->Size-1], 1);

	result = constraints_opt(LP, obj->p, obj->p[0], lp_min, &tmp,
				 options);

	/* If the LP is not empty, the point can be discarded */
	if (result != lp_empty) {
	    hilbert->NbRows--;
	    if (i < hilbert->NbRows)
		hilbert->p[i] = hilbert->p[hilbert->NbRows];
	    --i;
	}

	Matrix_Free(LP);
	Vector_Free(obj);
    }
    value_clear(tmp);

    hull = Matrix_Alloc(rays->NbRows + hilbert->NbRows, dim+1);
    for (i = 0; i < rays->NbRows; ++i) {
	Vector_Copy(rays->p[i], hull->p[i], dim);
	value_set_si(hull->p[i][dim], 1);
    }
    for (i = 0; i < hilbert->NbRows; ++i) {
	Vector_Copy(hilbert->p[i], hull->p[rays->NbRows+i], dim);
	value_set_si(hull->p[rays->NbRows+i][dim], 1);
    }
    Matrix_Free(rays);
    Matrix_Free(hilbert);

    options->MaxRays = MaxRays;
    return hull;
}
