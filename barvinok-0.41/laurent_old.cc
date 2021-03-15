#include <assert.h>
#include <iostream>
#include <vector>
#include <barvinok/options.h>
#include "binomial.h"
#include "conversion.h"
#include "decomposer.h"
#include "laurent_old.h"
#include "param_polynomial.h"
#include "param_util.h"
#include "reduce_domain.h"
#include "vertex_cone.h"
#include "config.h"

using std::cerr;
using std::ostream;
using std::endl;
using std::vector;

#if defined HAVE_UNORDERED_MAP

#include <unordered_map>

#define HASH_MAP std::unordered_map

namespace std
{
        template<> struct hash< std::vector<int> >
        {
                size_t operator()( const std::vector<int>& x ) const
                {
			unsigned long __h = 0;
			for (int i = 0; i < x.size(); ++i)
			    __h = 5 * __h + x[i];
                        return size_t(__h);
                }
        };
}

#elif defined HAVE_GNUCXX_HASHMAP

#include <ext/hash_map>

#define HASH_MAP __gnu_cxx::hash_map

namespace __gnu_cxx
{
        template<> struct hash< std::vector<int> >
        {
                size_t operator()( const std::vector<int>& x ) const
                {
			unsigned long __h = 0;
			for (int i = 0; i < x.size(); ++i)
			    __h = 5 * __h + x[i];
                        return size_t(__h);
                }
        };
}

#else

#warning "no hash_map available"
#include <map>
#define HASH_MAP std::map

#endif

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

static ostream & operator<< (ostream & os, const vector<int> & v)
	__attribute__((unused));
static ostream & operator<< (ostream & os, const vector<int> & v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        if (i)
            os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}

struct todd_product {
    vertex_cone &vc;
    unsigned dim;
    /* The non-zero coefficients in the rays of the vertex cone */
    vector< vector<int> > mask;
    /* For each ray, the power of each variable it contributes */
    vector< vector<int> > selected;
    /* The powers of each variable that still need to be selected */
    vector<int> left;
    /* For each variable, the last ray that has a non-zero coefficient */
    vector<int> last_level;

    HASH_MAP<vector<int>, const evalue *> cache;

    todd_product(vertex_cone &vc);
    evalue *add(evalue *sum);
    const evalue *get_coefficient(const vector<int> &powers);

    ~todd_product() {
	HASH_MAP<vector<int>, const evalue *>::iterator j;
	for (j = cache.begin(); j != cache.end(); ++j)
	    if ((*j).second)
		evalue_free(const_cast<evalue *>((*j).second));
    }
};

todd_product::todd_product(vertex_cone &vc) : vc(vc)
{
    dim = vc.dim;
    for (int i = 0; i < dim; ++i) {
	mask.push_back(vector<int>(dim));
	selected.push_back(vector<int>(dim));
    }
    last_level = vector<int>(dim);
    for (int i = 0; i < dim; ++i) {
	for (int j = 0; j < dim; ++j) {
	    if (vc.coeff_power[i][j]) {
		mask[i][j] = 1;
		last_level[j] = i;
	    }
	}
    }
}

void multinomial(const vector<int> &k, Value *m)
{
    int s = 0;
    value_set_si(*m, 1);
    for (int i = 0; i < k.size(); ++i) {
	if (k[i] == 0)
	    continue;
	s += k[i];
	value_multiply(*m, *m, *binomial(s, k[i]));
    }
}

/* Add coefficient of selected powers of variables to sum
 * and return the result.
 * The contribution of each ray j of the vertex cone is
 *
 *                       (      \sum k      )
 *   b(\sum k, \ceil{v}) ( k_1, \ldots, k_n ) c_1^{k_1} \cdots c_n^{k_n}
 *
 *   with k_i the selected powers, c_i the coefficients of the ray
 *   and \ceil{v} the coordinate E_vertex[j] corresponding to the ray.
 */
evalue *todd_product::add(evalue *sum)
{
    evalue *c = NULL;
    for (int i = 0; i < dim; ++i) {
	int s = 0;
	evalue *f = ALLOC(evalue);
	value_init(f->d);
	evalue_set_si(f, 1, 1);
	for (int j = 0; j < dim; ++j) {
	    if (!selected[i][j])
		continue;
	    value_multiply(f->x.n, f->x.n,
				*(*vc.coeff_power[i][j])[selected[i][j]]);
	    value_multiply(f->d, f->d, *factorial(selected[i][j]));
	    s += selected[i][j];
	}
	if (s > 0)
	    emul(vc.get_bernoulli(s, i), f);
	if (!c)
	    c = f;
	else {
	    emul(f, c);
	    evalue_free(f);
	}
    }
    if (!sum)
	sum = c;
    else {
	eadd(c, sum);
	evalue_free(c);
    }
    return sum;
}

static int first_non_zero(const vector<int>& row)
{
    for (int i = 0; i < row.size(); ++i)
	if (row[i] != 0)
	    return i;
    return -1;
}

/* Return coefficient of the term with exponents powers by
 * iterating over all combinations of exponents for each ray
 * that sum up to the given exponents.
 */
const evalue *todd_product::get_coefficient(const vector<int> &powers)
{
    evalue *c = NULL;

    HASH_MAP<vector<int>, const evalue *>::iterator i;
    i = cache.find(powers);
    if (i != cache.end())
	return (*i).second;

    for (int i = 0; i < vc.dim; ++i)
	for (int j = 0; j < vc.dim; ++j)
	    selected[i][j] = 0;

    left = powers;
    int nz = first_non_zero(left);
    int level = last_level[nz];
    int p = nz;
    while (level >= 0) {
	if (mask[level][p] && left[p] > 0) {
	    selected[level][p]++;
	    left[p]--;
	    /* Fill out remaining powers and make sure we backtrack from
	     * the right position.
	     */
	    for (int i = 0; i < vc.dim; ++i) {
		if (left[i] == 0)
		    continue;
		selected[last_level[i]][i] += left[i];
		left[i] = 0;
		if (last_level[i] >= level) {
		    level = last_level[i];
		    p = i;
		}
	    }

	    c = add(c);
	}
	if (selected[level][p]) {
	    left[p] += selected[level][p];
	    selected[level][p] = 0;
	}
	if (--p < 0) {
	    --level;
	    p = dim-1;
	}
    }
    cache[powers] = c;
    return c;
}

/* Maintains the coefficients of the reciprocals of the
 * (negated) rays of the vertex cone vc.
 */
struct reciprocal {
    vertex_cone &vc;

    /* can_borrow_from[i][j] = 1 if there is a ray
     * with first non-zero coefficient i and a subsequent
     * non-zero coefficient j.
     */
    vector< vector<int> > can_borrow_from;
    /* Total exponent that a variable can borrow from subsequent vars */
    vector<int> can_borrow;
    /* has_borrowed_from[i][j] is the exponent borrowed by i from j */
    vector< vector<int> > has_borrowed_from;
    /* Total exponent borrowed from subsequent vars */
    vector<int> has_borrowed;
    /* The last variable that can borrow from subsequent vars */
    int last;

    /* Position of the first non-zero coefficient in each ray. */
    vector<int> neg;

    /* Power without any "borrowing" */
    vector<int> base_power;
    /* Power after "borrowing" */
    vector<int> power;

    /* The non-zero coefficients in the rays of the vertex cone,
     * except the first.
     */
    vector< vector<int> > mask;
    /* For each ray, the (positive) power of each variable it contributes */
    vector< vector<int> > selected;
    /* The powers of each variable that still need to be selected */
    vector<int> left;

    HASH_MAP<vector<int>, const evalue *> cache;

    reciprocal(vertex_cone &vc);
    void start(vector<int> &power);
    int next();

    evalue *add(evalue *sum);
    const evalue *get_coefficient();
    ~reciprocal() {
	HASH_MAP<vector<int>, const evalue *>::iterator j;
	for (j = cache.begin(); j != cache.end(); ++j)
	    if ((*j).second)
		evalue_free(const_cast<evalue *>((*j).second));
    }
};

reciprocal::reciprocal(vertex_cone &vc) : vc(vc)
{
    for (int i = 0; i < vc.dim; ++i) {
	can_borrow_from.push_back(vector<int>(vc.dim));
	has_borrowed_from.push_back(vector<int>(vc.dim));
	mask.push_back(vector<int>(vc.dim));
	selected.push_back(vector<int>(vc.dim));
    }
    can_borrow = vector<int>(vc.dim);
    has_borrowed = vector<int>(vc.dim);
    neg = vector<int>(vc.dim);
    left = vector<int>(vc.dim);

    for (int i = 0; i < vc.dim; ++i) {
	int pos = First_Non_Zero(vc.coeff[i]->p, vc.coeff[i]->Size);
	neg[i] = pos;
	for (int j = pos+1; j < vc.dim; ++j)
	    if (value_notzero_p(vc.coeff[i]->p[j])) {
		mask[i][j] = 1;
		can_borrow_from[neg[i]][j] = 1;
	    }
    }
}

/* Initialize power to the exponent of the todd product
 * required to compute the coefficient in the full product
 * of the term with exponent req_power, without any
 * "borrowing".
 */
void reciprocal::start(vector<int> &req_power)
{
    power = req_power;
    for (int j = 0; j < vc.dim; ++j)
	power[neg[j]]++;

    base_power = power;

    last = -1;
    for (int i = 0; i < vc.dim; ++i) {
	can_borrow[i] = 0;
	has_borrowed[i] = 0;
	for (int j = i+1; j < vc.dim; ++j) {
	    has_borrowed_from[i][j] = 0;
	    if (can_borrow_from[i][j])
		can_borrow[i] += power[j];
	}
	if (can_borrow[i])
	    last = i;
    }
}

/* Set power to the next exponent of the todd product required
 * and return 1 as long as there is any such exponent left.
 */
int reciprocal::next()
{
    int p = last;
    while (p >= 0) {
	if (has_borrowed[p] < can_borrow[p]) {
	    int j;
	    for (j = p+1; j < vc.dim; ++j)
		if (can_borrow_from[p][j]) {
		    if (power[j] > 0)
			break;
		    else if (has_borrowed_from[p][j]) {
			power[j] += has_borrowed_from[p][j];
			power[p] -= has_borrowed_from[p][j];
			has_borrowed[p] -= has_borrowed_from[p][j];
			has_borrowed_from[p][j] = 0;
		    }
		}
	    if (j < vc.dim) {
		has_borrowed_from[p][j]++;
		has_borrowed[p]++;
		power[p]++;
		power[j]--;
		return 1;
	    }
	}
	if (has_borrowed[p]) {
	    for (int j = p+1; j < vc.dim; ++j)
		if (has_borrowed_from[p][j]) {
		    power[j] += has_borrowed_from[p][j];
		    has_borrowed_from[p][j] = 0;
		}
	    power[p] -= has_borrowed[p];
	    has_borrowed[p] = 0;
	}
	--p;
    }
    return 0;
}

/* Add coefficient of selected powers of variables to sum
 * and return the result.
 * The contribution of each ray j of the vertex cone is
 *
 *  (          K           )
 *  ( k_{f+1}, \ldots, k_n ) (-1)^{K+1}
 *  			c_f^{-K-1} c_{f+1}^{k_{f+1}} \cdots c_n^{k_n}
 *
 * K = \sum_{i=f+1}^n k_i
 */
evalue *reciprocal::add(evalue *sum)
{
    evalue *t = NULL;
    for (int i = 0; i < vc.dim; ++i) {
	evalue *c = ALLOC(evalue);
	value_init(c->d);
	value_init(c->x.n);
	value_set_si(c->d, 1);
	multinomial(selected[i], &c->x.n);
	int s = 0;
	for (int j = 0; j < vc.dim; ++j) {
	    if (selected[i][j] == 0)
		continue;
	    value_multiply(c->x.n, c->x.n,
				*(*vc.coeff_power[i][j])[selected[i][j]]);
	    s += selected[i][j];
	}
	value_multiply(c->d, c->d, *(*vc.coeff_power[i][neg[i]])[s+1]);
	if (!(s % 2))
	    value_oppose(c->x.n, c->x.n);
	if (value_neg_p(c->d)) {
	    value_oppose(c->d, c->d);
	    value_oppose(c->x.n, c->x.n);
	}
	if (!t)
	    t = c;
	else {
	    emul(c, t);
	    evalue_free(c);
	}
    }
    if (!sum)
	sum = t;
    else {
	eadd(t, sum);
	evalue_free(t);
    }
    return sum;
}

/* Return coefficient of the term with exponents powers by
 * iterating over all combinations of exponents for each ray
 * that sum up to the given exponents.
 */
const evalue *reciprocal::get_coefficient()
{
    evalue *c = NULL;

    for (int j = 0; j < vc.dim; ++j)
	left[j] = base_power[j] - power[j];

    HASH_MAP<vector<int>, const evalue *>::iterator i;
    i = cache.find(left);
    if (i != cache.end())
	return (*i).second;

    int nz = first_non_zero(left);
    if (nz == -1)
	return cache[power] = add(c);
    if (left[nz] > 0)
	return NULL;

    for (int i = 0; i < vc.dim; ++i)
	for (int j = 0; j < vc.dim; ++j)
	    selected[i][j] = 0;

    int level = vc.dim-1;
    int p = vc.dim-1;
    while (level >= 0) {
	int nz = first_non_zero(left);
	if (nz < neg[level] || (nz == neg[level] && left[nz] > 0)) {
	    assert(p == vc.dim-1);
	    --level;
	    continue;
	}
	if (nz == neg[level] && mask[level][p]) {
	    selected[level][p]++;
	    left[p]--;
	    left[neg[level]]++;
	    int nz = first_non_zero(left);
	    if (nz == -1)
		c = add(c);
	    else if (left[nz] < 0) {
		level = vc.dim-1;
		p = vc.dim-1;
		continue;
	    }
	}
	if (selected[level][p]) {
	    left[p] += selected[level][p];
	    left[neg[level]] -= selected[level][p];
	    selected[level][p] = 0;
	}
	if (--p < 0) {
	    --level;
	    p = vc.dim-1;
	}
    }
    cache[left] = c;

    return c;
}

struct laurent_summator_old : public signed_cone_consumer,
			  public vertex_decomposer {
    const evalue *polynomial;
    unsigned dim;
    vertex_cone vc;
    param_polynomial poly;
    evalue *result;
    unsigned max_power;

    laurent_summator_old(const evalue *e, unsigned dim, Param_Polyhedron *PP) :
			vertex_decomposer(PP, *this), polynomial(e), dim(dim),
			vc(dim), poly(e, dim) {
	max_power = dim + poly.degree();
	result = NULL;
    }
    ~laurent_summator_old() {
	if (result)
	    evalue_free(result);
    }
    virtual void handle(const signed_cone& sc, barvinok_options *options);
};

void laurent_summator_old::handle(const signed_cone& sc, barvinok_options *options)
{
    assert(sc.det == 1);

    vc.init(sc.rays, V, max_power);
    reciprocal recip(vc);
    todd_product tp(vc);
    for (int i = 0; i < poly.terms.size(); ++i) {
	recip.start(poly.terms[i].powers);
	do {
	    const evalue *c = recip.get_coefficient();
	    if (!c)
		continue;

	    const evalue *t = tp.get_coefficient(recip.power);

	    evalue *f = evalue_dup(poly.terms[i].coeff);
	    if (sc.sign < 0)
		evalue_negate(f);
	    for (int j = 0; j < dim; ++j)
		evalue_mul(f, *factorial(poly.terms[i].powers[j]));
	    evalue_shift_variables(f, 0, -dim);
	    emul(c, f);
	    emul(t, f);
	    if (!result)
		result = f;
	    else {
		eadd(f, result);
		evalue_free(f);
	    }
	} while (recip.next());
    }
    vc.clear();
}

evalue *laurent_summate_old(Polyhedron *P, evalue *e, unsigned nvar,
				   struct barvinok_options *options)
{
    Polyhedron *U, *TC;
    Param_Polyhedron *PP;
    struct evalue_section *s;
    int nd = -1;
    Param_Domain *PD;
    evalue *sum;

    U = Universe_Polyhedron(P->Dimension - nvar);
    PP = Polyhedron2Param_Polyhedron(P, U, options);

    for (nd = 0, PD = PP->D; PD; ++nd, PD = PD->next);
    s = ALLOCN(struct evalue_section, nd);

    TC = true_context(P, U, options->MaxRays);
    FORALL_REDUCED_DOMAIN(PP, TC, nd, options, i, PD, rVD)
	Param_Vertices *V;
	laurent_summator_old ls(e, nvar, PP);

	FORALL_PVertex_in_ParamPolyhedron(V, PD, PP) // _i internal counter
	    ls.decompose_at_vertex(V, _i, options);
	END_FORALL_PVertex_in_ParamPolyhedron;

	s[i].D = rVD;
	s[i].E = ls.result;
	ls.result = NULL;
    END_FORALL_REDUCED_DOMAIN
    Polyhedron_Free(TC);
    Polyhedron_Free(U);
    Param_Polyhedron_Free(PP);

    sum = evalue_from_section_array(s, nd);
    free(s);

    return sum;
}
