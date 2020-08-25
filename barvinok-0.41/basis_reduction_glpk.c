#include <assert.h>
#include <math.h>
#include <glpk.h>
#include <barvinok/basis_reduction.h>

static glp_prob *init_lp(Polyhedron *P);
static void set_lp_obj(glp_prob *lp, Value *row, int dim);
static int solve_lp(glp_prob *lp);
static void get_obj_val(glp_prob* lp, double *F);
static int add_lp_row(glp_prob *lp, Value *row, int dim);
static void get_alpha(glp_prob* lp, int row, double *alpha);
static void del_lp_row(glp_prob *lp);

#define GBR_LP			    	    glp_prob
#define GBR_type		    	    double
#define GBR_init(v)		    	    do { } while(0)
#define GBR_clear(v)		    	    do { } while(0)
#define GBR_set(a,b)			    a = b
#define GBR_set_ui(a,b)			    a = b
#define GBR_mul(a,b,c)			    a = b * c
#define GBR_lt(a,b)			    (a < b)
#define GBR_floor(a,b)			    value_set_si(a,(int)floor(b+1e-10))
#define GBR_ceil(a,b)			    value_set_si(a,(int)ceil(b-1e-10))
#define GBR_lp_init(P)		    	    init_lp(P)
#define GBR_lp_set_obj(lp, obj, dim)	    set_lp_obj(lp, obj, dim)
#define GBR_lp_solve(lp)		    solve_lp(lp)
#define GBR_lp_get_obj_val(lp, F)	    get_obj_val(lp, F)
#define GBR_lp_delete(lp)		    glp_delete_prob(lp)
#define GBR_lp_next_row(lp)		    glp_get_num_rows(lp)+1
#define GBR_lp_add_row(lp, row, dim)	    add_lp_row(lp, row, dim)
#define GBR_lp_get_alpha(lp, row, alpha)    get_alpha(lp, row, alpha)
#define GBR_lp_del_row(lp)		    del_lp_row(lp);
#define Polyhedron_Reduced_Basis    	    glpk_Polyhedron_Reduced_Basis
#include "basis_reduction_templ.c"

static glp_prob *init_lp(Polyhedron *P)
{
    glp_prob *lp;
    int *ind;
    double *val;
    int i, j, k, l;

    ind = ALLOCN(int, 1+P->Dimension);
    val = ALLOCN(double, 1+P->Dimension);
    lp = glp_create_prob();
    glp_set_obj_dir(lp, GLP_MAX);
    glp_add_rows(lp, 2*P->NbConstraints);
    glp_add_cols(lp, 2*P->Dimension);
    for (i = 0; i < 2; ++i) {
	for (j = 0; j < P->NbConstraints; ++j) {
	    int type = j < P->NbEq ? GLP_FX : GLP_LO;
	    for (k = 0, l = 0; k < P->Dimension; ++k) {
		if (value_zero_p(P->Constraint[j][1+k]))
		    continue;
		ind[1+l] = 1+i*P->Dimension+k;
		val[1+l] = VALUE_TO_DOUBLE(P->Constraint[j][1+k]);
		++l;
	    }
	    glp_set_mat_row(lp, 1+i*P->NbConstraints+j, l, ind, val);
	    glp_set_row_bnds(lp, 1+i*P->NbConstraints+j, type,
			     -VALUE_TO_DOUBLE(P->Constraint[j][1+P->Dimension]), 0);
	}
	for (k = 0, l = 0; k < P->Dimension; ++k) {
	    glp_set_col_bnds(lp, 1+i*P->Dimension+k, GLP_FR, 0, 0);
	}
    }
    free(ind);
    free(val);
    return lp;
}

static void set_lp_obj(glp_prob *lp, Value *row, int dim)
{
    int j;
    for (j = 0; j < dim; ++j) {
	glp_set_obj_coef(lp, 1+j, VALUE_TO_DOUBLE(row[j]));
	glp_set_obj_coef(lp, 1+dim+j, -VALUE_TO_DOUBLE(row[j]));
    }
}

static int solve_lp(glp_prob *lp)
{
    glp_smcp parm;
    glp_adv_basis(lp, 0);
    glp_init_smcp(&parm);
    parm.msg_lev = GLP_MSG_OFF;
    glp_simplex(lp, &parm);
    return glp_get_status(lp) == GLP_UNBND;
}

static void get_obj_val(glp_prob* lp, double *F)
{
    assert(glp_get_status(lp) == GLP_OPT);
    *F = glp_get_obj_val(lp);
    assert(*F > -1e-10);
    if (*F < 0)
	*F = 0;
}

static int add_lp_row(glp_prob *lp, Value *row, int dim)
{
    int j, l;
    int nr = glp_add_rows(lp, 1);
    int *ind;
    double *val;

    ind = ALLOCN(int, 1+2*dim);
    val = ALLOCN(double, 1+2*dim);
    for (j = 0, l = 0; j < dim; ++j) {
	if (value_zero_p(row[j]))
	    continue;
	ind[1+l] = 1+j;
	val[1+l] = VALUE_TO_DOUBLE(row[j]);
	ind[1+l+1] = 1+dim+j;
	val[1+l+1] = -VALUE_TO_DOUBLE(row[j]);
	l += 2;
    }
    glp_set_mat_row(lp, nr, l, ind, val);
    glp_set_row_bnds(lp, nr, GLP_FX, 0, 0);
    free(ind);
    free(val);

    return nr;
}

static void get_alpha(glp_prob* lp, int row, double *alpha)
{
    *alpha = -glp_get_row_dual(lp, row);
}

static void del_lp_row(glp_prob *lp)
{
    int rows[2];
    rows[1] = glp_get_num_rows(lp);
    glp_del_rows(lp, 1, rows);
}

