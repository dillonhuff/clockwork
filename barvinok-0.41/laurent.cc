#include <assert.h>
#include <iostream>
#include <vector>
#include <barvinok/options.h>
#include <barvinok/util.h>
#include "binomial.h"
#include "decomposer.h"
#include "laurent.h"
#include "param_polynomial.h"
#include "param_util.h"
#include "reduce_domain.h"
#include "vertex_cone.h"

#define ALLOC(type) (type*)malloc(sizeof(type))

void multinomial(const std::vector<int> &k, Value *m);

using std::cerr;
using std::endl;
using std::ostream;
using std::vector;

template <typename T>
static ostream & operator<< (ostream & os, const vector<T> & v)
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

struct laurent_summator : public signed_cone_consumer,
			  public vertex_decomposer {
	const evalue *polynomial;
	unsigned dim;
	vertex_cone vc;
	param_polynomial poly;
	evalue *result;
	unsigned max_power;

	/* For each row, first column with non-zero element */
	vector<int> first;
	/* For each row, last column with non-zero element */
	vector<int> last;
	/* For each column, number of rows that have this column as first */
	vector<int> n_first;
	/* For each column, last row that has this column as first */
	vector<int> last_first;
	/* For each column i,
	 * sum_{j >= i} power[j] + n_first[j] - [ sum_k selected[k][j] ]_+
	 */
	vector<int> acc_power;
	/* The exponents that we still need to match by subsequent factors */
	vector<int> left;
	/* For each factor,variable, the minimum allowed exponent */
	vector< vector<int> > min;
	/* For each factor,variable, the maximum allowed exponent */
	vector< vector<int> > max;
	/* For each factor,variable, the currently selected exponent */
	vector< vector<int> > selected;

	laurent_summator(const evalue *e, unsigned dim,
				Param_Polyhedron *PP) :
			vertex_decomposer(PP, *this), polynomial(e), dim(dim),
			vc(dim), poly(e, dim) {
		max_power = dim + poly.degree();
		result = NULL;
		first = vector<int>(dim);
		last = vector<int>(dim);
		n_first = vector<int>(dim);
		last_first = vector<int>(dim);
		acc_power = vector<int>(dim);
		for (int i = 0; i < dim; ++i) {
			min.push_back(vector<int>(dim));
			max.push_back(vector<int>(dim));
			selected.push_back(vector<int>(dim));
		}
	}
	~laurent_summator() {
		if (result)
			evalue_free(result);
	}
	virtual void handle(const signed_cone& sc, barvinok_options *options);

	evalue *handle_term(vector<int> &power);
	void set_min_max(int row, int col);
	evalue *selection_contribution();
};

/* Change (row,col) to the previous entry in a dim x dim matrix */
static void prev(int &row, int &col, int dim, int &init)
{
	init = 0;
	if (--col >= 0)
		return;
	--row;
	col = dim - 1;
}

/* Change (row,col) to the next entry in a dim x dim matrix */
static void next(int &row, int &col, int dim, int &init)
{
	init = 1;
	if (++col < dim)
		return;
	++row;
	col = 0;
}

/* Set min[row][col] and max[row][col] to the minimum and maximum
 * possible exponents for variable col in factor row, given a choice
 * of exponents for the previous factors and the previous variables in
 * the same factor.
 *
 * There are two kinds of terms in each factor i.
 * In the first kind, the exponent a_ij of first[i] is negative
 * and equal to -1 - sum_{k > j} a_ik
 * In the second kind, all exponents are non-negative.
 *
 * If the coefficient of the corresponding ray is zero, in particular
 * if col < first[row], then we can only construct terms that are
 * constant in the given variable, i.e., min = max = 0.
 *
 * If col == first[row], then we can assign both negative and
 * positive exponents to this variable.
 * If we assign a negative exponent a_ij, then we need to make
 * sure that we can distribute -a_ij - 1 over the remaining variables.
 * The total sum of exponents we can distribute is equal to
 *	the total sum in the target exponents for the subsequent variables
 *	+ the total number of times any of the subsequent variables is
 *		the first variable with non-zero coefficient in a ray
 *		(since we can increase the total exponent by one,
 *		 by making the exponent negative)
 *	- the total sum of (positive) exponents we have already selected
 *		for these variables in earlier factors.
 * This total sum is maintained in acc_power[col + 1].
 * However, if this column is not only the first, but also the last (and only)
 * non-zero column, then the only negative exponent we can allocate is -1.
 *
 * If col > first[row], then we can only assign non-negative exponents,
 * so we set min[row][col] to 0.
 *
 * The maximal exponent is the target exponent minus the exponents we
 * have already selected in previous factors.
 * However, if the given column appears first in at least one row,
 * then we can move exponents of later columns to this column by selecting
 * a negative exponent in later factors, and then the upper bound is
 * given by acc_power[col].  If the current factor corresponds to one
 * of these rows, then we can subtract 1 from acc_power[col], because
 * if the current exponent is non-negative, then it cannot be used
 * to increase the total exponent by 1.
 *
 * If the current column is not the first non-zero column and
 * a negative exponent was chosen for the first non-zero column,
 * then we need to make sure that we don't exceed
 * -selected[row][first[row]] - 1 in this row.  The maximal exponent
 * is adjusted accordingly.
 * Furthermore, if this is the last column in such a row, then we
 * have to select what is left and adjust the minimal exponent accordingly.
 *
 * Finally, if this is the last row, then we have to select what is left.
 * The minimum and maximum exponent are adjusted accordingly.
 */
void laurent_summator::set_min_max(int row, int col)
{
	if (col == first[row]) {
		if (col < last[row])
			min[row][col] = -acc_power[col + 1] - 1;
		else
			min[row][col] = -1;
		max[row][col] = acc_power[col] - 1;
	}
	if (col < first[row]) {
		min[row][col] = 0;
		max[row][col] = 0;
	}
	if (col > first[row]) {
		min[row][col] = 0;
		max[row][col] = n_first[col] > 0 ? acc_power[col] : left[col];
	}
	if (value_zero_p(vc.Rays.p[row][col])) {
		if (max[row][col] > 0)
			max[row][col] = 0;
		if (min[row][col] < 0)
			min[row][col] = 0;
	}
	if (col > first[row] && selected[row][first[row]] < 0) {
		int l = -selected[row][first[row]] - 1;
		for (int i = first[row] + 1; i < col; ++i)
			l -= selected[row][i];
		if (l < max[row][col])
			max[row][col] = l;
		if (col >= last[row] && l > min[row][col])
			min[row][col] = l;
	}
	if (row == dim - 1 || (col == first[row] && last_first[col] == row)) {
		if (left[col] < max[row][col])
			max[row][col] = left[col];
		if (left[col] > min[row][col])
			min[row][col] = left[col];
	}
}

/* Compute and return the contribution of the selected distribution of
 * exponents over the factors.  The total contribution is the product
 * of the contribution of each factor.
 * The contributions of a factor depends on whether the first exponent
 * is negative or not.
 *
 * If the first exponent is negative, then it is equal to
 * -m = - 1 - \sum_k n_k, with n_k the remaining exponents.
 * The contribution of this factor is then
 *
 *	(m-1 \choose n) (-1)^m b_j^n b_{jf}^{-m}
 *
 * Otherwise, i.e., when all exponents are non-negative, let
 * m = 1 + \sum_k n_k, with n_k all exponents.
 * Then the contribution of this factor is
 *
 *	bernoulli(m, s_j)/(m * \prod_k n_k!) b_j^n
 *
 * In these formulae, b_j represents the coefficients of ray j
 * and s_j is such that the exponent of the numerator of the
 * vertex cone is w = <s_j, b_j>.
 */
evalue *laurent_summator::selection_contribution()
{
	evalue *c = NULL;

	for (int i = 0; i < dim; ++i) {
		evalue *f = ALLOC(evalue);
		value_init(f->d);
		evalue_set_si(f, 1, 1);
		if (selected[i][first[i]] < 0) {
			int d_exp = -selected[i][first[i]];
			selected[i][first[i]] = 0;
			multinomial(selected[i], &f->x.n);
			selected[i][first[i]] = -d_exp;
			if (d_exp % 2)
				value_oppose(f->x.n, f->x.n);
			for (int j = first[i] + 1; j < dim; ++j) {
				if (selected[i][j] == 0)
					continue;
				value_multiply(f->x.n, f->x.n,
				    *(*vc.coeff_power[i][j])[selected[i][j]]);
			}
			value_multiply(f->d, f->d,
				*(*vc.coeff_power[i][first[i]])[d_exp]);
			if (value_neg_p(f->d)) {
				value_oppose(f->d, f->d);
				value_oppose(f->x.n, f->x.n);
			}
		} else {
			int sum = 0;
			for (int j = 0; j < dim; ++j)
				sum += selected[i][j];
			value_set_si(f->x.n, -1);
			value_set_si(f->d, 1 + sum);
			for (int j = 0; j < dim; ++j) {
				if (selected[i][j] == 0)
					continue;
				value_multiply(f->x.n, f->x.n,
				    *(*vc.coeff_power[i][j])[selected[i][j]]);
				value_multiply(f->d, f->d,
					*factorial(selected[i][j]));
			}
			emul(vc.get_bernoulli(1 + sum, i), f);
		}
		if (!c)
			c = f;
		else {
			emul(f, c);
			evalue_free(f);
		}
	}
	return c;
}

/* Compute and return the coefficient of the term with exponents "power"
 * in the Laurent expansion.
 *
 * We perform a depth-first search over all distributions of "power"
 * over the factors and collect (sum) all the corresponding coefficients.
 * Every time we enter a node for the first time, we compute the minimum
 * and maximum possible exponent and select the minimum.
 * Every time we return to the node during backtracking, we increase
 * the exponent by 1 until we have reached the maximum.
 */
evalue *laurent_summator::handle_term(vector<int> &power)
{
	evalue *s = NULL;

	left = power;
	for (int i = 0; i < dim; ++i)
		n_first[i] = 0;
	for (int i = 0; i < dim; ++i) {
		first[i] = First_Non_Zero(vc.Rays.p[i], dim);
		last[i] = Last_Non_Zero(vc.Rays.p[i], dim);
		n_first[first[i]]++;
		last_first[first[i]] = i;
	}
	acc_power[dim - 1] = power[dim - 1] + n_first[dim - 1];
	for (int i = dim - 2; i >= 0; --i)
		acc_power[i] = power[i] + n_first[i] + acc_power[i + 1];

	int row = 0, col = 0, init = 1;

	while (row >= 0) {
		if (row >= dim) {
			evalue *t;

			t = selection_contribution();
			if (!s)
				s = t;
			else {
				eadd(t, s);
				evalue_free(t);
			}
			prev(row, col, dim, init);
		}
		if (init) {
			set_min_max(row, col);
			if (max[row][col] < min[row][col]) {
				prev(row, col, dim, init);
				continue;
			}
			selected[row][col] = min[row][col];
			left[col] -= selected[row][col];
			if (selected[row][col] >= 0)
				acc_power[col] -= selected[row][col];
		} else {
			if (selected[row][col] >= max[row][col]) {
				left[col] += selected[row][col];
				if (selected[row][col] >= 0)
					acc_power[col] += selected[row][col];
				prev(row, col, dim, init);
				continue;
			}
			if (selected[row][col] >= 0)
				acc_power[col]--;
			selected[row][col]++;
			left[col]--;
		}
		next(row, col, dim, init);
	}

	return s;
}

/* Compute and accumulate the contribution of the given vertex cone
 * to the total sum.
 *
 * We compute the corresponding coefficient in the Laurent expansion
 * and divide it by n!, with n the vector of exponents.
 */
void laurent_summator::handle(const signed_cone& sc, barvinok_options *options)
{
	assert(sc.det == 1);

	vc.init(sc.rays, V, max_power);
	for (int i = 0; i < poly.terms.size(); ++i) {
		evalue *t, *f;

		t = handle_term(poly.terms[i].powers);

		f = evalue_dup(poly.terms[i].coeff);
		if (sc.sign < 0)
			evalue_negate(f);
		for (int j = 0; j < dim; ++j)
			evalue_mul(f, *factorial(poly.terms[i].powers[j]));
		evalue_shift_variables(f, 0, -dim);
		emul(f, t);
		evalue_free(f);
		if (!result)
			result = t;
		else {
			eadd(t, result);
			evalue_free(t);
		}
	}
	vc.clear();
}

evalue *laurent_summate(Polyhedron *P, evalue *e, unsigned nvar,
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
		laurent_summator ls(e, nvar, PP);

		FORALL_PVertex_in_ParamPolyhedron(V, PD, PP) // _i internal
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
