#include "param_polynomial.h"

using std::vector;

/* Expand "polynomial" as a sum of powers of the "nvar" variables,
 * and collect the terms in "terms".
 */
static void collect_terms(vector<struct param_term> &terms, vector<int> &powers,
			    const evalue *polynomial, unsigned nvar)
{
	if (EVALUE_IS_ZERO(*polynomial))
		return;

	if (value_zero_p(polynomial->d))
		assert(polynomial->x.p->type == ::polynomial);
	if (value_notzero_p(polynomial->d) || polynomial->x.p->pos > nvar) {
		struct param_term t;
		t.powers = powers;
		t.coeff = polynomial;
		terms.push_back(t);
		return;
	}

	for (int i = polynomial->x.p->size-1; i >= 0; --i) {
		powers[polynomial->x.p->pos-1] = i;
		collect_terms(terms, powers, &polynomial->x.p->arr[i], nvar);
	}
}

param_polynomial::param_polynomial(const evalue *polynomial, unsigned nvar)
{
	vector<int> powers(nvar);
	for (int i = 0; i < nvar; ++i)
		powers[i] = 0;
	collect_terms(terms, powers, polynomial, nvar);
}

unsigned param_polynomial::degree()
{
	unsigned max_degree = 0;

	for (int i = 0; i < terms.size(); ++i) {
		int sum = 0;
		for (int j = 0; j < terms[i].powers.size(); ++j)
			sum += terms[i].powers[j];
		if (sum > max_degree)
			max_degree = sum;
	}
	return max_degree;
}
