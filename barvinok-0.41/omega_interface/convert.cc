#include <algorithm>
#include "omega_interface/convert.h"

static void max_index(Constraint_Handle c, varvector& vv, varvector& params)
{
    for (Constr_Vars_Iter cvi(c); cvi; ++cvi) {
	Variable_ID var = (*cvi).var;
	if (find(vv.begin(), vv.end(), var) == vv.end() &&
	    find(params.begin(), params.end(), var) == params.end())
		vv.push_back(var);
    }
}

static void set_constraint(Matrix *M, int row,
			   Constraint_Handle c, varvector& vv, int geq)
{
    value_set_si(M->p[row][0], geq);
    for (int i = 0; i < vv.size(); ++i)
	value_set_si(M->p[row][1+i], c.get_coef(vv[i]));
    value_set_si(M->p[row][1+vv.size()], c.get_const());
}

Polyhedron *relation2Domain(Relation& r, varvector& vv, varvector& params,
				unsigned MaxRays)
{
    unsigned dim;
    unsigned max_size;
    Polyhedron *D = NULL;
    Polyhedron **next = &D;

    r.simplify();

    if (r.is_set())
	for (int j = 1; j <= r.n_set(); ++j)
	    vv.push_back(r.set_var(j));
    else {
	for (int j = 1; j <= r.n_inp(); ++j)
	    vv.push_back(r.input_var(j));
	for (int j = 1; j <= r.n_out(); ++j)
	    vv.push_back(r.output_var(j));
    }
    dim = vv.size();

    const Variable_ID_Tuple * globals = r.global_decls();
    for (int i = 0; i < globals->size(); ++i)
	params.push_back(r.get_local((*globals)[i+1]));

    max_size = dim;
    for (DNF_Iterator di(r.query_DNF()); di; ++di) {
	vv.resize(dim);
	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei)
	    max_index((*ei), vv, params);
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi)
	    max_index((*gi), vv, params);
	if (vv.size() > max_size)
	    max_size = vv.size();
    }

    for (DNF_Iterator di(r.query_DNF()); di; ++di) {
	int c = 0;

	vv.resize(dim);

	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei, ++c)
	    max_index((*ei), vv, params);
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi, ++c)
	    max_index((*gi), vv, params);
	for (int i = 0; i < params.size(); ++i)
	    vv.push_back(params[i]);

	Matrix *M = Matrix_Alloc(c, vv.size() + 2);
	int row = 0;
	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei)
	    set_constraint(M, row++, (*ei), vv, 0);
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi)
	    set_constraint(M, row++, (*gi), vv, 1);
	*next = Constraints2Polyhedron(M, MaxRays);
	Matrix_Free(M);
	next = &(*next)->next;
    }
    vv.resize(dim);
    return D;
}

typedef std::vector<Global_Var_Decl *> globalvector;

static void create_globals(globalvector& globals, unsigned nparam,
				const char **params)
{
    for (int i = 0; i < nparam; ++i)
	globals.push_back(new Global_Var_Decl(params[i]));
}

Relation Polyhedron2relation(Polyhedron *P,
			  unsigned exist, globalvector& globals)
{
    int nvar = P->Dimension - exist - globals.size();
    Relation r(nvar);
    varvector vars;

    F_Exists *e = r.add_exists();
    F_And *base = e->add_and();

    for (int j = 1; j <= r.n_set(); ++j)
	vars.push_back(r.set_var(j));
    for (int i = 0; i < exist; ++i)
	vars.push_back(e->declare());
    for (int i = 0; i < globals.size(); ++i)
	vars.push_back(r.get_local(globals[i]));

    for (int i = 0; i < P->NbConstraints; ++i) {
	Constraint_Handle h;
	if (value_notzero_p(P->Constraint[i][0]))
	    h = base->add_GEQ();
	else
	    h = base->add_EQ();
	for (int j = 1; j <= P->Dimension; ++j)
	    h.update_coef(vars[j-1], VALUE_TO_INT(P->Constraint[i][j]));
	h.update_const(VALUE_TO_INT(P->Constraint[i][1+P->Dimension]));
    }
    r.finalize();
    return r;
}

Relation Polyhedron2relation(Polyhedron *P,
			  unsigned exist, unsigned nparam, const char **params)
{
    globalvector globals;
    create_globals(globals, nparam, params);
    return Polyhedron2relation(P, exist, globals);
}

Relation Domain2relation(Polyhedron *D, unsigned nvar, unsigned nparam,
			 const char **params)
{
    globalvector globals;
    create_globals(globals, nparam, params);

    Relation r = Polyhedron2relation(D, D->Dimension - nvar - nparam,
					globals);
    for (Polyhedron *P = D->next; P; P = P->next) {
	Relation s = Polyhedron2relation(P, P->Dimension - nvar - nparam,
					    globals);
	r = Union(r, s);
    }
    return r;
}
