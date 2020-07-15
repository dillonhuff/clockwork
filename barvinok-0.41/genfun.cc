#include <iostream>
#include <iomanip>
#include <vector>
#include <assert.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/genfun.h>
#include <barvinok/barvinok.h>
#include "conversion.h"
#include "counter.h"
#include "genfun_constructor.h"
#include "mat_util.h"
#include "matrix_read.h"
#include "remove_equalities.h"

using std::cout;
using std::cerr;
using std::endl;
using std::pair;
using std::vector;

bool short_rat_lex_smaller_denominator::operator()(const short_rat* r1,
						   const short_rat* r2) const
{
    return lex_cmp(r1->d.power, r2->d.power) < 0;
}

static void lex_order_terms(struct short_rat* rat)
{
    for (int i = 0; i < rat->n.power.NumRows(); ++i) {
	int m = i;
	for (int j = i+1; j < rat->n.power.NumRows(); ++j)
	    if (lex_cmp(rat->n.power[j], rat->n.power[m]) < 0)
		m = j;
	if (m != i) {
	    vec_ZZ tmp = rat->n.power[m];
	    rat->n.power[m] = rat->n.power[i];
	    rat->n.power[i] = tmp;
	    QQ tmp_coeff = rat->n.coeff[m];
	    rat->n.coeff[m] = rat->n.coeff[i];
	    rat->n.coeff[i] = tmp_coeff;
	}
    }
}

short_rat::short_rat(const short_rat& r)
{
    n.coeff = r.n.coeff;
    n.power = r.n.power;
    d.power = r.d.power;
}

short_rat::short_rat(Value c)
{
    n.coeff.SetLength(1);
    value2zz(c, n.coeff[0].n);
    n.coeff[0].d = 1;
    n.power.SetDims(1, 0);
    d.power.SetDims(0, 0);
}

short_rat::short_rat(const QQ& c, const vec_ZZ& num, const mat_ZZ& den)
{
    n.coeff.SetLength(1);
    ZZ g = GCD(c.n, c.d);
    n.coeff[0].n = c.n/g;
    n.coeff[0].d = c.d/g;
    n.power.SetDims(1, num.length());
    n.power[0] = num;
    d.power = den;
    normalize();
}

short_rat::short_rat(const vec_QQ& c, const mat_ZZ& num, const mat_ZZ& den)
{
    n.coeff = c;
    n.power = num;
    d.power = den;
    normalize();
}

void short_rat::normalize()
{
    /* Make all powers in denominator reverse-lexico-positive */
    for (int i = 0; i < d.power.NumRows(); ++i) {
	int j;
	for (j = d.power.NumCols()-1; j >= 0; --j)
	    if (!IsZero(d.power[i][j]))
		break;
	assert(j >= 0);
	if (sign(d.power[i][j]) < 0) {
	    negate(d.power[i], d.power[i]);
	    for (int k = 0; k < n.coeff.length(); ++k) {
		negate(n.coeff[k].n, n.coeff[k].n);
		n.power[k] += d.power[i];
	    }
	}
    }

    /* Order powers in denominator */
    lex_order_rows(d.power);
}

void short_rat::add(const short_rat *r)
{
    for (int i = 0; i < r->n.power.NumRows(); ++i) {
	int len = n.coeff.length();
	int j;
	for (j = 0; j < len; ++j)
	    if (r->n.power[i] == n.power[j])
		break;
	if (j < len) {
	    n.coeff[j] += r->n.coeff[i];
	    if (n.coeff[j].n == 0) {
		if (j < len-1) {
		    n.power[j] = n.power[len-1];
		    n.coeff[j] = n.coeff[len-1];
		}
		int dim = n.power.NumCols();
		n.coeff.SetLength(len-1);
		n.power.SetDims(len-1, dim);
	    }
	} else {
	    int dim = n.power.NumCols();
	    n.coeff.SetLength(len+1);
	    n.power.SetDims(len+1, dim);
	    n.coeff[len] = r->n.coeff[i];
	    n.power[len] = r->n.power[i];
	}
    }
}

QQ short_rat::coefficient(Value* params, barvinok_options *options) const
{
    unsigned nvar = d.power.NumRows();
    unsigned nparam = d.power.NumCols();
    Matrix *C = Matrix_Alloc(nparam + nvar, 1 + nvar + 1); 
    Value tmp;
    value_init(tmp);

    QQ c(0, 1);

    for (int j = 0; j < n.coeff.length(); ++j) {
	C->NbRows = nparam+nvar;
	for (int r = 0; r < nparam; ++r) {
	    value_set_si(C->p[r][0], 0);
	    for (int c = 0; c < nvar; ++c) {
		zz2value(d.power[c][r], C->p[r][1+c]);
	    }
	    zz2value(n.power[j][r], C->p[r][1+nvar]);
	    value_subtract(C->p[r][1+nvar], C->p[r][1+nvar], params[r]);
	}
	for (int r = 0; r < nvar; ++r) {
	    value_set_si(C->p[nparam+r][0], 1);
	    Vector_Set(&C->p[nparam+r][1], 0, nvar + 1);
	    value_set_si(C->p[nparam+r][1+r], 1);
	}
	Polyhedron *P = Constraints2Polyhedron(C, options->MaxRays);
	if (emptyQ2(P)) {
	    Polyhedron_Free(P);
	    continue;
	}
	barvinok_count_with_options(P, &tmp, options);
	Polyhedron_Free(P);
	if (value_zero_p(tmp))
	    continue;
	QQ c2(0, 1);
	value2zz(tmp, c2.n);
	c2 *= n.coeff[j];
	c += c2;
    }
    Matrix_Free(C);
    value_clear(tmp);
    return c;
}

bool short_rat::reduced()
{
    int dim = n.power.NumCols();
    lex_order_terms(this);
    if (n.power.NumRows() % 2 == 0) {
	if (n.coeff[0].n == -n.coeff[1].n &&
	    n.coeff[0].d == n.coeff[1].d) {
	    vec_ZZ step = n.power[1] - n.power[0];
	    int k;
	    for (k = 1; k < n.power.NumRows()/2; ++k) {
		if (n.coeff[2*k].n != -n.coeff[2*k+1].n ||
		    n.coeff[2*k].d != n.coeff[2*k+1].d)
		    break;
		if (step != n.power[2*k+1] - n.power[2*k])
		    break;
	    }
	    if (k == n.power.NumRows()/2) {
		for (k = 0; k < d.power.NumRows(); ++k)
		    if (d.power[k] == step)
			break;
		if (k < d.power.NumRows()) {
		    for (++k; k < d.power.NumRows(); ++k)
			d.power[k-1] = d.power[k];
		    d.power.SetDims(k-1, dim);
		    for (k = 1; k < n.power.NumRows()/2; ++k) {
			n.coeff[k] = n.coeff[2*k];
			n.power[k] = n.power[2*k];
		    }
		    n.coeff.SetLength(k);
		    n.power.SetDims(k, dim);
		    return true;
		}
	    }
	}
    }
    return false;
}

gen_fun::gen_fun(Value c)
{
    short_rat *r = new short_rat(c);
    context = Universe_Polyhedron(0);
    term.insert(r);
}

void gen_fun::add(const QQ& c, const vec_ZZ& num, const mat_ZZ& den)
{
    if (c.n == 0)
	return;

    add(new short_rat(c, num, den));
}

void gen_fun::add(short_rat *r)
{
    short_rat_list::iterator i = term.find(r);
    while (i != term.end()) {
	(*i)->add(r);
	if ((*i)->n.coeff.length() == 0) {
	    delete *i;
	    term.erase(i);
	} else if ((*i)->reduced()) {
	    delete r;
	    /* we've modified term[i], so remove it
	     * and add it back again
	     */
	    r = *i;
	    term.erase(i);
	    i = term.find(r);
	    continue;
	}
	delete r;
	return;
    }

    term.insert(r);
}

/* Extend the context of "this" to include the one of "gf".
 */
void gen_fun::extend_context(const gen_fun *gf, barvinok_options *options)
{
    Polyhedron *U = DomainUnion(context, gf->context, options->MaxRays);
    Polyhedron *C = DomainConvex(U, options->MaxRays);
    Domain_Free(U);
    Domain_Free(context);
    context = C;
}

/* Add the generating "gf" to "this" on the union of their domains.
 */
void gen_fun::add(const QQ& c, const gen_fun *gf, barvinok_options *options)
{
    extend_context(gf, options);
    add(c, gf);
}

void gen_fun::add(const QQ& c, const gen_fun *gf)
{
    QQ p;
    for (short_rat_list::iterator i = gf->term.begin(); i != gf->term.end(); ++i) {
	for (int j = 0; j < (*i)->n.power.NumRows(); ++j) {
	    p = c;
	    p *= (*i)->n.coeff[j];
	    add(p, (*i)->n.power[j], (*i)->d.power);
	}
    }
}

static void split_param_compression(Matrix *CP, mat_ZZ& map, vec_ZZ& offset)
{
    Matrix *T = Transpose(CP);
    matrix2zz(T, map, T->NbRows-1, T->NbColumns-1);
    values2zz(T->p[T->NbRows-1], offset, T->NbColumns-1);
    Matrix_Free(T);
}

/*
 * Perform the substitution specified by CP
 *
 * CP is a homogeneous matrix that maps a set of "compressed parameters"
 * to the original set of parameters.
 *
 * This function is applied to a gen_fun computed with the compressed parameters
 * and adapts it to refer to the original parameters.
 *
 * That is, if y are the compressed parameters and x = A y + b are the original
 * parameters, then we want the coefficient of the monomial t^y in the original
 * generating function to be the coefficient of the monomial u^x in the resulting
 * generating function.  
 * The original generating function has the form
 *
 *        a t^m/(1-t^n) = a t^m + a t^{m+n} + a t^{m+2n} + ...
 * 
 * Since each term t^y should correspond to a term u^x, with x = A y + b, we want
 *
 *         a u^{A m + b} + a u^{A (m+n) + b} + a u^{A (m+2n) +b} + ... = 
 *        
 *         = a u^{A m + b}/(1-u^{A n})
 *
 * Therefore, we multiply the powers m and n in both numerator and denominator by A
 * and add b to the power in the numerator.
 * Since the above powers are stored as row vectors m^T and n^T,
 * we compute, say, m'^T = m^T A^T to obtain m' = A m.
 *
 * The pair (map, offset) contains the same information as CP.
 * map is the transpose of the linear part of CP, while offset is the constant part.
 */
void gen_fun::substitute(Matrix *CP)
{
    mat_ZZ map;
    vec_ZZ offset;
    split_param_compression(CP, map, offset);
    Polyhedron *C = Polyhedron_Image(context, CP, 0);
    Polyhedron_Free(context);
    context = C;

    short_rat_list new_term;
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i) {
	short_rat *r = (*i);
	r->d.power *= map;
	r->n.power *= map;
	for (int j = 0; j < r->n.power.NumRows(); ++j)
	    r->n.power[j] += offset;
	r->normalize();
	new_term.insert(r);
    }
    term.swap(new_term);
}

static int Matrix_Equal(Matrix *M1, Matrix *M2)
{
    int i, j;

    if (M1->NbRows != M2->NbRows)
	return 0;
    if (M1->NbColumns != M2->NbColumns)
	return 0;
    for (i = 0; i < M1->NbRows; ++i)
	for (j = 0; j < M1->NbColumns; ++j)
	    if (value_ne(M1->p[i][j], M2->p[i][j]))
		return 0;

    return 1;
}

struct parallel_cones {
    int	    *pos;
    vector<pair<Vector *, QQ> >	    vertices;
    parallel_cones(int *pos) : pos(pos) {}
};

/* This structure helps in computing the generating functions
 * of polytopes with pairwise parallel hyperplanes more efficiently.
 * These occur when computing hadamard products of pairs of generating
 * functions with the same denominators.
 * If there are many such pairs then the same vertex cone
 * may appear more than once.  We therefore keep a list of all
 * vertex cones and only compute the corresponding generating function
 * once.
 * However, even HPs of generating functions with the same denominators
 * can result in polytopes of different "shapes", making them incomparable.
 * In particular, they can have different equalities among the parameters
 * and the variables.  In such cases, only polytopes of the first "shape"
 * that is encountered are kept in this way.  The others are handled
 * in the usual, non-optimized way.
 */
struct parallel_polytopes {
    gf_base *red;
    Polyhedron *context;
    Matrix *Constraints;
    Matrix *CP, *T;
    int dim;
    int nparam;
    unsigned reduced_nparam;
    vector<parallel_cones>    cones;
    barvinok_options	*options;

    parallel_polytopes(int n, Polyhedron *context, int nparam,
		       barvinok_options *options) :
			context(context), dim(-1), nparam(nparam),
			options(options) {
	red = NULL;
	Constraints = NULL;
	CP = NULL;
	T = NULL;
    }
    bool add(const QQ& c, Polyhedron *P) {
	int i;

	for (i = 0; i < P->NbEq; ++i)
	    if (First_Non_Zero(P->Constraint[i]+1,
			       P->Dimension-nparam) == -1)
		break;
	if (i < P->NbEq)
	    return false;

	Polyhedron *Q = remove_equalities_p(Polyhedron_Copy(P), P->Dimension-nparam,
					    NULL, options->MaxRays);
	POL_ENSURE_VERTICES(Q);
	if (emptyQ(Q)) {
	    Polyhedron_Free(Q);
	    return true;
	}

	if (Q->Dimension == 0) {
	    Polyhedron_Free(Q);
	    return false;
	}

	if (Q->NbEq != 0) {
	    Matrix *Q_CP;
	    Polyhedron *R = Q;

	    remove_all_equalities(&Q, NULL, &Q_CP, NULL, nparam,
				  options->MaxRays);

	    POL_ENSURE_VERTICES(Q);
	    if (emptyQ(Q) || Q->NbEq > 0 || Q->Dimension == 0) {
		if (Q_CP)
		    Matrix_Free(Q_CP);
		Polyhedron_Free(R);
		Polyhedron_Free(Q);
		return emptyQ(Q);
	    }

	    if (red) {
		if ((!CP ^ !Q_CP) || (CP && !Matrix_Equal(CP, Q_CP))) {
		    Matrix_Free(Q_CP);
		    Polyhedron_Free(R);
		    Polyhedron_Free(Q);
		    return false;
		}
		Matrix_Free(Q_CP);
	    } else {
		CP = Q_CP;
		T = align_matrix(CP, R->Dimension+1);
	    }

	    reduced_nparam = CP->NbColumns-1;
	    Polyhedron_Free(R);
	} else {
	    if (red && CP) {
		Polyhedron_Free(Q);
		return false;
	    }
	    reduced_nparam = nparam;
	}

	if (First_Non_Zero(Q->Constraint[Q->NbConstraints-1]+1, Q->Dimension) == -1)
	    Q->NbConstraints--;

	if (!Constraints) {
	    Polyhedron *reduced_context;
	    dim = Q->Dimension;
	    if (CP)
		reduced_context = Polyhedron_Preimage(context, CP, options->MaxRays);
	    else
		reduced_context = Polyhedron_Copy(context);
	    red = gf_base::create(reduced_context, dim, reduced_nparam, options);
	    red->base->init(Q, 0);
	    Constraints = Matrix_Alloc(Q->NbConstraints, Q->Dimension);
	    for (int i = 0; i < Q->NbConstraints; ++i) {
		Vector_Copy(Q->Constraint[i]+1, Constraints->p[i], Q->Dimension);
	    }
	} else {
	    if (Q->Dimension != dim) {
		Polyhedron_Free(Q);
		return false;
	    }
	    assert(Q->Dimension == dim);
	    for (int i = 0; i < Q->NbConstraints; ++i) {
		int j;
		for (j = 0; j < Constraints->NbRows; ++j)
		    if (Vector_Equal(Q->Constraint[i]+1, Constraints->p[j],
					Q->Dimension))
			break;
		if (j >= Constraints->NbRows) {
		    Matrix_Extend(Constraints, Constraints->NbRows+1);
		    Vector_Copy(Q->Constraint[i]+1,
				Constraints->p[Constraints->NbRows-1],
				Q->Dimension);
		}
	    }
	}

	for (int i = 0; i < Q->NbRays; ++i) {
	    if (!value_pos_p(Q->Ray[i][dim+1]))
		continue;

	    Polyhedron *C = supporting_cone(Q, i);

	    if (First_Non_Zero(C->Constraint[C->NbConstraints-1]+1, 
			       C->Dimension) == -1)
		C->NbConstraints--;

	    int *pos = new int[1+C->NbConstraints];
	    int l = 0;
	    for (int k = 0; k < Constraints->NbRows; ++k) {
		for (int j = 0; j < C->NbConstraints; ++j) {
		    if (Vector_Equal(C->Constraint[j]+1, Constraints->p[k], 
				     C->Dimension)) {
			pos[1+l++] = k;
			break;
		    }
		}
	    }
	    pos[0] = l;

	    int j;
	    for (j = 0; j < cones.size(); ++j)
		if (!memcmp(pos, cones[j].pos, (1+C->NbConstraints)*sizeof(int)))
		    break;
	    if (j == cones.size())
		cones.push_back(parallel_cones(pos));
	    else
		delete [] pos;

	    Polyhedron_Free(C);

	    int k;
	    for (k = 0; k < cones[j].vertices.size(); ++k)
		if (Vector_Equal(Q->Ray[i]+1, cones[j].vertices[k].first->p,
				 Q->Dimension+1))
		    break;

	    if (k == cones[j].vertices.size()) {
		Vector *vertex = Vector_Alloc(Q->Dimension+1);
		Vector_Copy(Q->Ray[i]+1, vertex->p, Q->Dimension+1);
		cones[j].vertices.push_back(pair<Vector*,QQ>(vertex, c));
	    } else {
		cones[j].vertices[k].second += c;
		if (cones[j].vertices[k].second.n == 0) {
		    int size = cones[j].vertices.size();
		    Vector_Free(cones[j].vertices[k].first);
		    if (k < size-1)
			cones[j].vertices[k] = cones[j].vertices[size-1];
		    cones[j].vertices.pop_back();
		}
	    }
	}

	Polyhedron_Free(Q);
	return true;
    }
    gen_fun *compute() {
	if (!red)
	    return NULL;
	for (int i = 0; i < cones.size(); ++i) {
	    Matrix *M = Matrix_Alloc(cones[i].pos[0], 1+Constraints->NbColumns+1);
	    Polyhedron *Cone;
	    for (int j = 0; j <cones[i].pos[0]; ++j) {
		value_set_si(M->p[j][0], 1);
		Vector_Copy(Constraints->p[cones[i].pos[1+j]], M->p[j]+1,
			    Constraints->NbColumns);
	    }
	    Cone = Constraints2Polyhedron(M, options->MaxRays);
	    Matrix_Free(M);
	    for (int j = 0; j < cones[i].vertices.size(); ++j) {
		red->base->do_vertex_cone(cones[i].vertices[j].second,
					  Polyhedron_Copy(Cone),
					  cones[i].vertices[j].first->p, options);
	    }
	    Polyhedron_Free(Cone);
	}
	if (CP)
	    red->gf->substitute(CP);
	return red->gf;
    }
    void print(std::ostream& os) const {
	for (int i = 0; i < cones.size(); ++i) {
	    os << "[";
	    for (int j = 0; j < cones[i].pos[0]; ++j) {
		if (j)
		    os << ", ";
		os << cones[i].pos[1+j];
	    }
	    os << "]" << endl;
	    for (int j = 0; j < cones[i].vertices.size(); ++j) {
		Vector_Print(stderr, P_VALUE_FMT, cones[i].vertices[j].first);
		os << cones[i].vertices[j].second << endl;
	    }
	}
    }
    ~parallel_polytopes() {
	for (int i = 0; i < cones.size(); ++i) {
	    delete [] cones[i].pos;
	    for (int j = 0; j < cones[i].vertices.size(); ++j)
		Vector_Free(cones[i].vertices[j].first);
	}
	if (Constraints)
	    Matrix_Free(Constraints);
	if (CP)
	    Matrix_Free(CP);
	if (T)
	    Matrix_Free(T);
	delete red;
    }
};

gen_fun *gen_fun::Hadamard_product(const gen_fun *gf, barvinok_options *options)
{
    QQ one(1, 1);
    Polyhedron *C = DomainIntersection(context, gf->context, options->MaxRays);
    gen_fun *sum = new gen_fun(C);

    int j = 0;
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i, j++) {
	int k = 0;
	for (short_rat_list::iterator i2 = gf->term.begin();
		i2 != gf->term.end();
		++i2, k++) {
	    int d = (*i)->d.power.NumCols();
	    int k1 = (*i)->d.power.NumRows();
	    int k2 = (*i2)->d.power.NumRows();
	    assert((*i)->d.power.NumCols() == (*i2)->d.power.NumCols());

	    if (options->verbose)
		fprintf(stderr, "HP: %d/%zd %d/%zd \r",
				    j, term.size(), k, gf->term.size());

	    parallel_polytopes pp((*i)->n.power.NumRows() *
				  (*i2)->n.power.NumRows(),
				  sum->context, d, options);

	    for (int j = 0; j < (*i)->n.power.NumRows(); ++j) {
		for (int j2 = 0; j2 < (*i2)->n.power.NumRows(); ++j2) {
		    Matrix *M = Matrix_Alloc(k1+k2+d+d, 1+k1+k2+d+1);
		    for (int k = 0; k < k1+k2; ++k) {
			value_set_si(M->p[k][0], 1);
			value_set_si(M->p[k][1+k], 1);
		    }
		    for (int k = 0; k < d; ++k) {
			value_set_si(M->p[k1+k2+k][1+k1+k2+k], -1);
			zz2value((*i)->n.power[j][k], M->p[k1+k2+k][1+k1+k2+d]);
			for (int l = 0; l < k1; ++l)
			    zz2value((*i)->d.power[l][k], M->p[k1+k2+k][1+l]);
		    }
		    for (int k = 0; k < d; ++k) {
			value_set_si(M->p[k1+k2+d+k][1+k1+k2+k], -1);
			zz2value((*i2)->n.power[j2][k], 
				 M->p[k1+k2+d+k][1+k1+k2+d]);
			for (int l = 0; l < k2; ++l)
			    zz2value((*i2)->d.power[l][k], 
				     M->p[k1+k2+d+k][1+k1+l]);
		    }
		    Polyhedron *P = Constraints2Polyhedron(M, options->MaxRays);
		    Matrix_Free(M);

		    QQ c = (*i)->n.coeff[j];
		    c *= (*i2)->n.coeff[j2];
		    if (!pp.add(c, P)) {
			gen_fun *t = barvinok_enumerate_series(P, C->Dimension, options);
			sum->add(c, t);
			delete t;
		    }

		    Polyhedron_Free(P);
		}
	    }

	    gen_fun *t = pp.compute();
	    if (t) {
		sum->add(one, t);
		delete t;
	    }
	}
    }
    return sum;
}

/* Assuming "this" and "gf" are generating functions for sets,
 * replace "this" by the generating function for the union of these sets.
 *
 * In particular, compute
 *
 *	this + gf - gen_fun(intersection of sets)
 */
void gen_fun::add_union(gen_fun *gf, barvinok_options *options)
{
    QQ one(1, 1), mone(-1, 1);

    gen_fun *hp = Hadamard_product(gf, options);
    extend_context(gf, options);
    add(one, gf);
    add(mone, hp);
    delete hp;
}

static void Polyhedron_Shift(Polyhedron *P, Vector *offset)
{
    Value tmp;
    value_init(tmp);
    for (int i = 0; i < P->NbConstraints; ++i) {
	Inner_Product(P->Constraint[i]+1, offset->p, P->Dimension, &tmp);
	value_subtract(P->Constraint[i][1+P->Dimension],
		       P->Constraint[i][1+P->Dimension], tmp);
    }
    for (int i = 0; i < P->NbRays; ++i) {
	if (value_notone_p(P->Ray[i][0]))
	    continue;
	if (value_zero_p(P->Ray[i][1+P->Dimension]))
	    continue;
	Vector_Combine(P->Ray[i]+1, offset->p, P->Ray[i]+1,
		       P->Ray[i][0], P->Ray[i][1+P->Dimension], P->Dimension);
    }
    value_clear(tmp);
}

void gen_fun::shift(const vec_ZZ& offset)
{
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
	for (int j = 0; j < (*i)->n.power.NumRows(); ++j)
	    (*i)->n.power[j] += offset;

    Vector *v = Vector_Alloc(offset.length());
    zz2values(offset, v->p);
    Polyhedron_Shift(context, v);
    Vector_Free(v);
}

/* Divide the generating functin by 1/(1-z^power).
 * The effect on the corresponding explicit function f(x) is
 * f'(x) = \sum_{i=0}^\infty f(x - i * power)
 */
void gen_fun::divide(const vec_ZZ& power)
{
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i) {
	int r = (*i)->d.power.NumRows();
	int c = (*i)->d.power.NumCols();
	(*i)->d.power.SetDims(r+1, c);
	(*i)->d.power[r] = power;
    }

    Vector *v = Vector_Alloc(1+power.length()+1);
    value_set_si(v->p[0], 1);
    zz2values(power, v->p+1);
    Polyhedron *C = AddRays(v->p, 1, context, context->NbConstraints+1);
    Vector_Free(v);
    Polyhedron_Free(context);
    context = C;
}

static void print_power(std::ostream& os, const QQ& c, const vec_ZZ& p, 
			unsigned int nparam, const char **param_name)
{
    bool first = true;

    for (int i = 0; i < p.length(); ++i) {
	if (p[i] == 0)
	    continue;
	if (first) {
	    if (c.n == -1 && c.d == 1)
		os << "-";
	    else if (c.n != 1 || c.d != 1) {
		os << c.n;
		if (c.d != 1)
		    os << "/" << c.d;
		os << "*";
	    }
	    first = false;
	} else
	    os << "*";
	if (i < nparam)
	    os << param_name[i];
	else
	    os << "x" << i;
	if (p[i] == 1)
	    continue;
	if (p[i] < 0)
	    os << "^(" << p[i] << ")";
	else
	    os << "^" << p[i];
    }
    if (first) {
	os << c.n;
	if (c.d != 1)
	    os << "/" << c.d;
    }
}

void short_rat::print(std::ostream& os, unsigned int nparam,
			const char **param_name) const
{
    QQ mone(-1, 1);
    os << "(";
    for (int j = 0; j < n.coeff.length(); ++j) {
	if (j != 0 && n.coeff[j].n >= 0)
	    os << "+";
	print_power(os, n.coeff[j], n.power[j], nparam, param_name);
    }
    os << ")";
    if (d.power.NumRows() == 0)
	return;
    os << "/(";
    for (int j = 0; j < d.power.NumRows(); ++j) {
	if (j != 0)
	    os << " * ";
	os << "(1";
	print_power(os, mone, d.power[j], nparam, param_name);
	os << ")";
    }
    os << ")";
}

void gen_fun::print(std::ostream& os, unsigned int nparam,
			const char **param_name) const
{
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i) {
	if (i != term.begin())
	    os << " + ";
	(*i)->print(os, nparam, param_name);
    }
}

std::ostream & operator<< (std::ostream & os, const short_rat& r)
{
    os << r.n.coeff << endl;
    os << r.n.power << endl;
    os << r.d.power << endl;
    return os;
}

extern "C" { typedef void (*gmp_free_t)(void *, size_t); }

std::ostream & operator<< (std::ostream & os, const Polyhedron& P)
{
    char *str;
    gmp_free_t gmp_free;
    mp_get_memory_functions(NULL, NULL, &gmp_free);
    os << P.NbConstraints << " " << P.Dimension+2 << endl;
    for (int i = 0; i < P.NbConstraints; ++i) {
	for (int j = 0; j < P.Dimension+2; ++j) {
	    str = mpz_get_str(0, 10, P.Constraint[i][j]);
	    os << std::setw(4) << str << " ";
	    (*gmp_free)(str, strlen(str)+1);
	}
	os << endl;
    }
    return os;
}

std::ostream & operator<< (std::ostream & os, const gen_fun& gf)
{
    os << *gf.context << endl;
    os << endl;
    os << gf.term.size() << endl;
    for (short_rat_list::iterator i = gf.term.begin(); i != gf.term.end(); ++i)
	os << **i;
    return os;
}

gen_fun *gen_fun::read(std::istream& is, barvinok_options *options)
{
    Matrix *M = Matrix_Read(is);
    Polyhedron *C = Constraints2Polyhedron(M, options->MaxRays);
    Matrix_Free(M);

    gen_fun *gf = new gen_fun(C);

    int n;
    is >> n;

    vec_QQ c;
    mat_ZZ num;
    mat_ZZ den;
    for (int i = 0; i < n; ++i) {
	is >> c >> num >> den;
	gf->add(new short_rat(c, num, den));
    }

    return gf;
}

gen_fun::operator evalue *() const
{
    evalue *EP = NULL;
    evalue factor;
    value_init(factor.d);
    value_init(factor.x.n);
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i) {
	unsigned nvar = (*i)->d.power.NumRows();
	unsigned nparam = (*i)->d.power.NumCols();
	Matrix *C = Matrix_Alloc(nparam + nvar, 1 + nvar + nparam + 1); 
	mat_ZZ& d = (*i)->d.power;
	Polyhedron *U = context;

	for (int j = 0; j < (*i)->n.coeff.length(); ++j) {
	    for (int r = 0; r < nparam; ++r) {
		value_set_si(C->p[r][0], 0);
		for (int c = 0; c < nvar; ++c) {
		    zz2value(d[c][r], C->p[r][1+c]);
		}
		Vector_Set(&C->p[r][1+nvar], 0, nparam);
		value_set_si(C->p[r][1+nvar+r], -1);
		zz2value((*i)->n.power[j][r], C->p[r][1+nvar+nparam]);
	    }
	    for (int r = 0; r < nvar; ++r) {
		value_set_si(C->p[nparam+r][0], 1);
		Vector_Set(&C->p[nparam+r][1], 0, nvar + nparam + 1);
		value_set_si(C->p[nparam+r][1+r], 1);
	    }
	    Polyhedron *P = Constraints2Polyhedron(C, 0);
	    evalue *E = barvinok_enumerate_ev(P, U, 0);
	    Polyhedron_Free(P);
	    if (EVALUE_IS_ZERO(*E)) {
		evalue_free(E);
		continue;
	    }
	    zz2value((*i)->n.coeff[j].n, factor.x.n);
	    zz2value((*i)->n.coeff[j].d, factor.d);
	    emul(&factor, E);
	    if (!EP)
		EP = E;
	    else {
		eadd(E, EP);
		evalue_free(E);
	    }
	}
	Matrix_Free(C);
    }
    value_clear(factor.d);
    value_clear(factor.x.n);
    return EP ? EP : evalue_zero();
}

ZZ gen_fun::coefficient(Value* params, barvinok_options *options) const
{
    if (!in_domain(context, params))
	return ZZ::zero();

    QQ sum(0, 1);

    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
	sum += (*i)->coefficient(params, options);

    assert(sum.d == 1);
    return sum.n;
}

void gen_fun::coefficient(Value* params, Value* c) const
{
    barvinok_options *options = barvinok_options_new_with_defaults();

    ZZ coeff = coefficient(params, options);

    zz2value(coeff, *c);

    barvinok_options_free(options);
}

gen_fun *gen_fun::summate(int nvar, barvinok_options *options) const
{
    int n_try;
    int dim = context->Dimension;
    int nparam = dim - nvar;
    reducer *red;
    gen_fun *gf;

    if (nparam == 0) {
	bool finite;
	Value c;
	value_init(c);
	finite = summate(&c);
	assert(finite);
	gf = new gen_fun(c);
	value_clear(c);
	return gf;
    }

    if (options->incremental_specialization == 1) {
    	red = new partial_ireducer(Polyhedron_Project(context, nparam), dim, nparam);
    } else
    	red = new partial_reducer(Polyhedron_Project(context, nparam), dim, nparam);
    n_try = 0;
    for (;;) {
	try {
	    red->init(context, n_try);
	    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
		red->reduce((*i)->n.coeff, (*i)->n.power, (*i)->d.power);
	    break;
	} catch (OrthogonalException &e) {
	    red->reset();
	    n_try++;
	}
    }
    gf = red->get_gf();
    delete red;
    return gf;
}

/* returns true if the set was finite and false otherwise */
bool gen_fun::summate(Value *sum) const
{
    if (term.size() == 0) {
	value_set_si(*sum, 0);
	return true;
    }

    int maxlen = 0;
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
	if ((*i)->d.power.NumRows() > maxlen)
	    maxlen = (*i)->d.power.NumRows();

    infinite_counter cnt((*term.begin())->d.power.NumCols(), maxlen);
    cnt.init(context, 0);
    for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
	cnt.reduce((*i)->n.coeff, (*i)->n.power, (*i)->d.power);

    for (int i = 1; i <= maxlen; ++i)
	if (value_notzero_p(mpq_numref(cnt.count[i]))) {
	    value_set_si(*sum, -1);
	    return false;
	}

    assert(value_one_p(mpq_denref(cnt.count[0])));
    value_assign(*sum, mpq_numref(cnt.count[0]));
    return true;
}

bool gen_fun::is_zero() const
{
    bool empty;
    Value c;

    value_init(c);

    empty = summate(&c) && value_zero_p(c);

    value_clear(c);

    return empty;
}
