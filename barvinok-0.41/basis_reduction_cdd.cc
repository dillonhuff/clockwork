#include <assert.h>
#define GMPRATIONAL
#include <setoper.h>
#include <cdd.h>
#include <barvinok/basis_reduction.h>
#include "initcdd.h"

struct CDD_LP {
    Polyhedron *P;
    Value      *obj;
    dd_LPType  *lp;
    Matrix     *eq;
    int	        neq;

    CDD_LP(Polyhedron *P);
    void set_obj(Value *row, int dim);
    int solve();
    void get_obj_val(mytype *F);
    int add_row(Value *row, int dim);
    void get_alpha(int row, mytype *alpha);
    void del_row();
    ~CDD_LP() {
	if (lp)
	    dd_FreeLPData(lp);
	Matrix_Free(eq);
    }
};

#define GBR_LP			    	    CDD_LP
#define GBR_type		    	    mytype
#define GBR_init(v)		    	    dd_init(v)
#define GBR_clear(v)		    	    dd_clear(v)
#define GBR_set(a,b)			    dd_set(a,b)
#define GBR_set_ui(a,b)			    mpq_set_ui(a,b,1)
#define GBR_mul(a,b,c)			    dd_mul(a,b,c)
#define GBR_lt(a,b)			    (dd_cmp(a,b) < 0)
#define GBR_floor(a,b)			    mpz_fdiv_q(a,mpq_numref(b),mpq_denref(b))
#define GBR_ceil(a,b)			    mpz_cdiv_q(a,mpq_numref(b),mpq_denref(b))
#define GBR_lp_init(P)		    	    new CDD_LP(P)
#define GBR_lp_set_obj(lp, obj, dim)	    lp->set_obj(obj, dim)
#define GBR_lp_solve(lp)		    lp->solve()
#define GBR_lp_get_obj_val(lp, F)	    lp->get_obj_val(F)
#define GBR_lp_delete(lp)		    delete lp
#define GBR_lp_next_row(lp)		    lp->neq
#define GBR_lp_add_row(lp, row, dim)	    lp->add_row(row, dim)
#define GBR_lp_get_alpha(lp, row, alpha)    lp->get_alpha(row, alpha)
#define GBR_lp_del_row(lp)		    lp->del_row()
#define Polyhedron_Reduced_Basis    	    cdd_Polyhedron_Reduced_Basis
#include "basis_reduction_templ.c"

CDD_LP::CDD_LP(Polyhedron *P)
{
    INIT_CDD;

    this->P = P;
    lp = NULL;
    eq = Matrix_Alloc(P->Dimension, P->Dimension);
    neq = 0;
}

void CDD_LP::set_obj(Value *row, int dim)
{
    assert(P->Dimension == dim);
    obj = row;
}

int CDD_LP::solve()
{
    if (lp)
	dd_FreeLPData(lp);

    dd_rowrange irev = 2 * P->NbConstraints + neq;
    dd_rowrange rows = irev + 2 * P->NbEq + neq + 1;
    dd_colrange cols = 1 + 2*P->Dimension;
    lp = dd_CreateLPData(dd_LPmax, dd_Rational, rows, cols);
    lp->Homogeneous = dd_FALSE;
    lp->objective = dd_LPmax;
    for (int i = 0; i < 2; ++i) {
	for (dd_rowrange j = 0; j < P->NbConstraints; ++j) {
	    dd_rowrange row = j+i*P->NbConstraints;
	    for (dd_colrange k = 0; k < P->Dimension; ++k) {
		dd_colrange col = 1+k+i*P->Dimension;
		mpq_set_z(lp->A[row][col], P->Constraint[j][1+k]);
	    }
	    mpq_set_z(lp->A[row][0], P->Constraint[j][1+P->Dimension]);
	    if (j < P->NbEq) {
		set_addelem(lp->equalityset, row+1);
		for (dd_colrange k = 0; k < P->Dimension; ++k) {
		    dd_colrange col = 1+k+i*P->Dimension;
		    dd_neg(lp->A[irev][col], lp->A[row][col]);
		}
		dd_neg(lp->A[irev][0], lp->A[row][0]);
		++irev;
	    }
	}
    }
    for (int i = 0; i < neq; ++i) {
	dd_rowrange row = 2*P->NbConstraints+i;
	set_addelem(lp->equalityset, row+1);
	for (int j = 0; j < P->Dimension; ++j) {
	    mpq_set_z(lp->A[row][1+j], eq->p[i][j]);
	    dd_neg(lp->A[row][1+P->Dimension+j], lp->A[row][1+j]);
	    dd_neg(lp->A[irev][1+j], lp->A[row][1+j]);
	    dd_set(lp->A[irev][1+P->Dimension+j], lp->A[row][1+j]);
	}
	++irev;
    }
    /* objective function */
    for (dd_colrange k = 0; k < P->Dimension; ++k) {
	mpq_set_z(lp->A[rows-1][1+k], obj[k]);
	dd_neg(lp->A[rows-1][1+P->Dimension+k], lp->A[rows-1][1+k]);
    }
    dd_ErrorType err = dd_NoError;
    dd_LPSolve(lp, dd_DualSimplex, &err);
    assert(err == dd_NoError);
    /* We only call this function on a polytope that is known
     * to be (rationally) non-empty.
     * A bug in cddlib 0.94d can sometimes make cddlib claim
     * that the polytope is empty.  We can't continue if we
     * hit this bug.
     */
    assert(lp->LPS != dd_Inconsistent);

    return lp->LPS == dd_DualInconsistent;
}

void CDD_LP::get_obj_val(mytype *F)
{
    dd_set(*F, lp->optvalue);
    assert(dd_sgn(*F) >= 0);
}

int CDD_LP::add_row(Value *row, int dim)
{
    assert(P->Dimension == dim);
    Vector_Copy(row, eq->p[neq], dim);
    return neq++;
}

void CDD_LP::get_alpha(int row, mytype *alpha)
{
    row += 2 * P->NbConstraints;
    /* Value for basic variable is zero, right ?
     */
    dd_set(*alpha, dd_zero);
    for (int j = 1; j < lp->d; j++) {
	if (lp->nbindex[j+1] == row+1) {
	    dd_set(*alpha, lp->dsol[j]);
	    break;
	} else if (lp->nbindex[j+1] == row+neq+2*P->NbEq+1) {
	    dd_neg(*alpha, lp->dsol[j]);
	    break;
	}
    }
}

void CDD_LP::del_row()
{
    assert(neq > 0);
    neq--;
}
