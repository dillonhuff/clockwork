#include <assert.h>
#include <barvinok/util.h>
#include "remove_equalities.h"

static void transform(Polyhedron **P, Polyhedron **C, Matrix *CP, int free,
		      unsigned MaxRays)
{
    Polyhedron *Q = *P;
    Polyhedron *D = *C;
    Matrix *T;

    T = align_matrix(CP, Q->Dimension+1);
    *P = Polyhedron_Preimage(Q, T, MaxRays);
    if (free)
	Polyhedron_Free(Q);
    Matrix_Free(T);
    if (!D)
	return;
    *C = Polyhedron_Preimage(D, CP, MaxRays);
    if (free)
	Polyhedron_Free(D);
}

static Matrix *compose_transformations(Matrix *first, Matrix *second)
{
    Matrix *combined;

    if (!first)
	return second;

    combined = Matrix_Alloc(first->NbRows, second->NbColumns);
    Matrix_Product(first, second, combined);
    Matrix_Free(first);
    Matrix_Free(second);
    return combined;
}

static Polyhedron *replace_by_empty_polyhedron(Polyhedron *Q, int free)
{
    unsigned dim = Q->Dimension;
    if (free)
	Polyhedron_Free(Q);
    return Empty_Polyhedron(dim);
}

static int first_parameter_equality(Polyhedron *Q, unsigned nparam)
{
    int i;

    if (emptyQ(Q))
	return Q->NbEq;

    for (i = 0; i < Q->NbEq; ++i)
	if (First_Non_Zero(Q->Constraint[i]+1, Q->Dimension-nparam) == -1)
	    break;

    return i;
}

static void remove_parameter_equalities(Polyhedron **Q, Polyhedron **D,
					Matrix **CP, unsigned *nparam,
					int free, unsigned MaxRays)
{
    int i;

    /* We need to loop until we can't find any more equalities
     * because the transformation may enable a simplification of the
     * constraints resulting in new implicit equalities.
     */
    while ((i = first_parameter_equality(*Q, *nparam)) < (*Q)->NbEq) {
	Matrix *M = Matrix_Alloc((*Q)->NbEq, 1+*nparam+1);
	Matrix *T;
	int n = 0;

	for (; i < (*Q)->NbEq; ++i) {
	    if (First_Non_Zero((*Q)->Constraint[i]+1, (*Q)->Dimension-*nparam) == -1)
		Vector_Copy((*Q)->Constraint[i]+1+(*Q)->Dimension-*nparam,
			    M->p[n++]+1, *nparam+1);
	}
	M->NbRows = n;
	T = compress_variables(M, 0);
	Matrix_Free(M);
	if (!T) {
	    *Q = replace_by_empty_polyhedron(*Q, free);
	    break;
	} else {
	    transform(Q, D, T, free, MaxRays);
	    *nparam = T->NbColumns-1;
	    *CP = compose_transformations(*CP, T);
	    free = 1;
	}
    }
}

static int is_translation(Matrix *M)
{
    unsigned i, j;

    if (M->NbRows != M->NbColumns)
	return 0;

    for (i = 0; i < M->NbRows; ++i)
	for (j = 0; j < M->NbColumns-1; ++j)
	    if (i == j ? value_notone_p(M->p[i][j])
		       : value_notzero_p(M->p[i][j]))
		return 0;

    return 1;
}

/* Remove all equalities in P and the context C (if not NULL).
 * Does not destroy P (or C).
 * Returns transformation on the parameters in the Matrix pointed to by CPP
 * (unless NULL) and transformation on the variables in the Matrix pointed to
 * by CVP (unless NULL).
 * Each of these transformation matrices maps the new parameters/variables
 * back to the original ones.
 * If it can be shown that there is no integer point in P, then
 * an empty polyhedron will be returned.
 */
int remove_all_equalities(Polyhedron **P, Polyhedron **C, Matrix **CPP, Matrix **CVP,
			  unsigned nparam, unsigned MaxRays)
{
    Matrix *CV = NULL;
    Matrix *CP = NULL;
    Polyhedron *Q = *P;
    Polyhedron *D = NULL;
    Polyhedron *R;
    int changed;
    Matrix M;

    if (C) {
	D = *C;
	assert(D->Dimension == nparam);
    }

    if (Q->NbEq == 0 && (!D || D->NbEq == 0))
	return 0;

    if (D && D->NbEq) {
	Polyhedron_Matrix_View(D, &M, D->NbEq);
	CP = compress_variables(&M, 0);
	if (!CP) {
	    *C = replace_by_empty_polyhedron(D, D != *C);
	    return 1;
	}
	transform(&Q, &D, CP, Q != *P, MaxRays);
	nparam = CP->NbColumns-1;
    }

    /* compress_parms doesn't like equalities that only involve parameters */
    remove_parameter_equalities(&Q, &D, &CP, &nparam, Q != *P, MaxRays);

    /* We need to loop until we can't find any more equalities
     * because the transformation may enable a simplification of the
     * constraints resulting in new implicit equalities.
     */
    while (!emptyQ2(Q) && Q->NbEq) {
	Matrix *T;

	do {
	    Polyhedron_Matrix_View(Q, &M, Q->NbEq);
	    T = compress_parms(&M, nparam);
	    if (!T) {
		Q = replace_by_empty_polyhedron(Q, Q != *P);
	    } else if (is_translation(T)) {
		Matrix_Free(T);
		T = NULL;
	    } else {
		transform(&Q, &D, T, Q != *P, MaxRays);
		CP = compose_transformations(CP, T);
		nparam = CP->NbColumns-1;
		remove_parameter_equalities(&Q, &D, &CP, &nparam, Q != *P, MaxRays);
	    }
	} while (!emptyQ(Q) && Q->NbEq && T);

	if (emptyQ(Q) || !Q->NbEq)
	    break;

	Polyhedron_Matrix_View(Q, &M, Q->NbEq);
	T = compress_variables(&M, nparam);
	if (!T) {
	    Q = replace_by_empty_polyhedron(Q, Q != *P);
	} else if (isIdentity(T)) {
	    Matrix_Free(T);
	} else {
	    R = Polyhedron_Preimage(Q, T, MaxRays);
	    CV = compose_transformations(CV, T);
	    if (Q != *P)
		Polyhedron_Free(Q);
	    Q = R;
	}
    }

    changed = *P != Q;
    *P = Q;
    if (C)
	*C = D;
    if (CPP)
	*CPP = CP;
    else if (CP)
	Matrix_Free(CP);
    if (CVP)
	*CVP = CV;
    else if (CV)
	Matrix_Free(CV);
    return changed;
}
