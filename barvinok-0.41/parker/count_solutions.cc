#include <algorithm>
#include <vector>
#include <omega.h>

extern "C" {
/* Erin Parker (parker@cs.unc.edu), March 2004 */

#include "dfa.h"

/* Functions defined in construction.c */
DFA* build_DFA_eq(int, int*, int, int*);
DFA* build_DFA_ineq(int, int*, int, int*);

/* Function defined in count.c */
double count_accepting_paths(DFA*, int, int);
}

#include "count_solutions.h"

typedef std::vector<Variable_ID> varvector;

static void max_index(Constraint_Handle c, varvector& vv)
{
    for (Constr_Vars_Iter cvi(c); cvi; ++cvi) {
	Variable_ID var = (*cvi).var;
	if (find(vv.begin(), vv.end(), var) == vv.end())
	    vv.push_back(var);
    }
}

double count_solutions(Relation& r) 
{
    int dim;
    int max_size;

    r.simplify();

    varvector vv;
    if (r.is_set()) {
	dim = r.n_set();
	for (int j = 1; j <= r.n_set(); ++j)
	    vv.push_back(r.set_var(j));
    } else {
	dim = r.n_inp() + r.n_out();
	for (int j = 1; j <= r.n_inp(); ++j)
	    vv.push_back(r.input_var(j));
	for (int j = 1; j <= r.n_out(); ++j)
	    vv.push_back(r.output_var(j));
    }

    max_size = dim;
    for (DNF_Iterator di(r.query_DNF()); di; ++di) {
	vv.resize(dim);
	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei)
	    max_index((*ei), vv);
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi)
	    max_index((*gi), vv);
	if (vv.size() > max_size)
	    max_size = vv.size();
    }

    int *coeffs = new int[max_size];
    int *indices = new int[max_size];
    DFA* dfa = NULL;

    for (DNF_Iterator di(r.query_DNF()); di; ++di) {
	DFA* c = NULL;

	vv.resize(dim);

	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei)
	    max_index((*ei), vv);
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi)
	    max_index((*gi), vv);

	for (EQ_Iterator ei = (*di)->EQs(); ei; ++ei) {
	    int i, j;
	    for (i = 0, j = 0; i < vv.size(); ++i) {
		if ((*ei).get_coef(vv[i]) != 0) {
		    coeffs[j] = (*ei).get_coef(vv[i]);
		    indices[j++] = i;
		}
	    }
	    DFA *e = build_DFA_eq(j, coeffs, (*ei).get_const(), indices);
	    if (!c)
		c = e;
	    else {
		DFA *t = c;
		c = dfaMinimize(dfaProduct(c, e, dfaAND));
		dfaFree(t);
		dfaFree(e);
	    }
	}
	for (GEQ_Iterator gi = (*di)->GEQs(); gi; ++gi) {
	    int i, j;
	    for (i = 0, j = 0; i < vv.size(); ++i) {
		if ((*gi).get_coef(vv[i]) != 0) {
		    coeffs[j] = -(*gi).get_coef(vv[i]);
		    indices[j++] = i;
		}
	    }
	    DFA* e = build_DFA_ineq(j, coeffs, -(*gi).get_const()-1, indices);
	    if (!c)
		c = e;
	    else {
		DFA *t = c;
		c = dfaMinimize(dfaProduct(c, e, dfaAND));
		dfaFree(t);
		dfaFree(e);
	    }
	}

	assert(c);
	for (int i = dim; i < vv.size(); ++i) {
	    DFA *t = c;
	    c = dfaMinimize(dfaProject(c, i));
	    dfaFree(t);
	}

	if (!dfa)
	    dfa = c;
	else {
	    DFA *t = dfa;
	    dfa = dfaMinimize(dfaProduct(dfa, c, dfaOR));
	    dfaFree(t);
	    dfaFree(c);
	}
    }

    double c = count_accepting_paths(dfa, dfa->ns, dim);
    dfaFree(dfa);

    delete [] coeffs;
    delete [] indices;

    return c;
}
