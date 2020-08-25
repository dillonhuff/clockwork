#include <assert.h>
#include <barvinok/options.h>
#include "param_util.h"
#include "topcom.h"
#include "isl_param_util.h"
#include "config.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

void Param_Vertex_Common_Denominator(Param_Vertices *V)
{
    unsigned dim;
    Value lcm;
    int i;

    assert(V->Vertex->NbRows > 0);
    dim = V->Vertex->NbColumns-2;

    value_init(lcm);

    value_assign(lcm, V->Vertex->p[0][dim+1]);
    for (i = 1; i < V->Vertex->NbRows; ++i)
	value_lcm(lcm, V->Vertex->p[i][dim+1], lcm);

    for (i = 0; i < V->Vertex->NbRows; ++i) {
	if (value_eq(V->Vertex->p[i][dim+1], lcm))
	    continue;
	value_division(V->Vertex->p[i][dim+1], lcm, V->Vertex->p[i][dim+1]);
	Vector_Scale(V->Vertex->p[i], V->Vertex->p[i],
		     V->Vertex->p[i][dim+1], dim+1);
	value_assign(V->Vertex->p[i][dim+1], lcm);
    }

    value_clear(lcm);
}

/* Plug in the parametric vertex Vertex (nvar x (nparam + 2))
 * in the constraint constraint (1 + nvar + nparam + 1).
 * The result is stored in row (1 + nparam + 1),
 * with the denominator in position 0.
 */
void Param_Inner_Product(Value *constraint, Matrix *Vertex, Value *row)
{
    unsigned nparam = Vertex->NbColumns - 2;
    unsigned nvar = Vertex->NbRows;
    int j;
    Value tmp, tmp2;

    value_set_si(row[0], 1);
    Vector_Set(row+1, 0, nparam+1);

    value_init(tmp);
    value_init(tmp2);

    for (j = 0 ; j < nvar; ++j) {
	value_set_si(tmp, 1);
	value_assign(tmp2,  constraint[1+j]);
	if (value_ne(row[0], Vertex->p[j][nparam+1])) {
	    value_assign(tmp, row[0]);
	    value_lcm(row[0], row[0], Vertex->p[j][nparam+1]);
	    value_division(tmp, row[0], tmp);
	    value_multiply(tmp2, tmp2, row[0]);
	    value_division(tmp2, tmp2, Vertex->p[j][nparam+1]);
	}
	Vector_Combine(row+1, Vertex->p[j], row+1, tmp, tmp2, nparam+1);
    }
    value_set_si(tmp, 1);
    Vector_Combine(row+1, constraint+1+nvar, row+1, tmp, row[0], nparam+1);

    value_clear(tmp);
    value_clear(tmp2);
}

static Param_Polyhedron *PL_P2PP(Polyhedron *Din, Polyhedron *Cin,
					      struct barvinok_options *options)
{
    unsigned MaxRays = options->MaxRays;
    if (MaxRays & (POL_NO_DUAL | POL_INTEGER))
	MaxRays = 0;
    return Polyhedron2Param_Domain(Din, Cin, MaxRays);
}

/* Compute a dummy Param_Domain that contains all vertices of Param_Domain D
 * (which contains the vertices of P) that lie on the facet obtained by
 * saturating constraint c of P
 */
Param_Domain *Param_Polyhedron_Facet(Param_Polyhedron *PP, Param_Domain *D,
				     Value *constraint)
{
    int nv;
    Param_Vertices *V;
    unsigned nparam = PP->V->Vertex->NbColumns-2;
    Vector *row = Vector_Alloc(1+nparam+1);
    Param_Domain *FD = ALLOC(Param_Domain);
    FD->Domain = 0;
    FD->next = 0;

    nv = (PP->nbV - 1)/(8*sizeof(int)) + 1;
    FD->F = ALLOCN(unsigned, nv);
    memset(FD->F, 0, nv * sizeof(unsigned));

    FORALL_PVertex_in_ParamPolyhedron(V, D, PP) /* _i, _ix, _bx internal counters */
	Param_Inner_Product(constraint, V->Vertex, row->p);
	if (First_Non_Zero(row->p+1, nparam+1) == -1)
	    FD->F[_ix] |= _bx;
    END_FORALL_PVertex_in_ParamPolyhedron;

    Vector_Free(row);

    return FD;
}

#ifndef POINTS2TRIANGS_PATH
Param_Polyhedron *TC_P2PP(Polyhedron *P, Polyhedron *C,
			  struct barvinok_options *options)
{
    return NULL;
}
#endif

Param_Polyhedron *Polyhedron2Param_Polyhedron(Polyhedron *P, Polyhedron *C,
					      struct barvinok_options *options)
{
    switch(options->chambers) {
    case BV_CHAMBERS_POLYLIB:
	return PL_P2PP(P, C, options);
	break;
    case BV_CHAMBERS_TOPCOM:
	return TC_P2PP(P, C, options);
	break;
    case BV_CHAMBERS_ISL:
	return ISL_P2PP(P, C, options);
	break;
    default:
	assert(0);
    }
}

#define INT_BITS (sizeof(unsigned) * 8)

/* Wegner's method for counting the number of ones in a bit vector */
int bit_vector_count(unsigned *F, int F_len)
{
    int i;
    int count = 0;

    for (i = 0; i < F_len; ++i) {
	unsigned v = F[i];
	while (v) {
	    v &= v-1;
	    ++count;
	}
    }
    return count;
}

void Param_Vertex_Set_Facets(Param_Polyhedron *PP, Param_Vertices *V)
{
    if (!V->Facets) {
	unsigned nparam = V->Vertex->NbColumns - 2;
	int len = (PP->Constraints->NbRows+INT_BITS-1)/INT_BITS;
	int i, ix;
	unsigned bx;
	Vector *row = Vector_Alloc(1 + nparam + 1);

	V->Facets = (unsigned *)calloc(len, sizeof(unsigned));
	for (i = 0, ix = 0, bx = MSB; i < PP->Constraints->NbRows; ++i) {
	    Param_Inner_Product(PP->Constraints->p[i], V->Vertex, row->p);
	    if (First_Non_Zero(row->p+1, nparam+1) == -1)
		V->Facets[ix] |= bx;
	    NEXT(ix, bx);
	}
	Vector_Free(row);
    }
}

Polyhedron *Param_Vertex_Cone(Param_Polyhedron *PP, Param_Vertices *V,
			      struct barvinok_options *options)
{
    int i, j, ix;
    unsigned bx;
    int len = (PP->Constraints->NbRows+INT_BITS-1)/INT_BITS;
    int n;
    Matrix *M;
    Polyhedron *C;
    unsigned nvar = V->Vertex->NbRows;

    if (!V->Facets)
	Param_Vertex_Set_Facets(PP, V);
    n = bit_vector_count(V->Facets, len);

    M = Matrix_Alloc(n, 1+nvar+1);
    assert(M);
    for (i = 0, j = 0, ix = 0, bx = MSB; i < PP->Constraints->NbRows; ++i) {
	if (V->Facets[ix] & bx)
	    Vector_Copy(PP->Constraints->p[i], M->p[j++], 1+nvar);
	NEXT(ix, bx);
    }
    C = Constraints2Polyhedron(M, options->MaxRays);
    assert(C);
    Matrix_Free(M);
    return C;
}
