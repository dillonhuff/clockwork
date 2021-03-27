#ifndef PARAM_POLYNOMIAL_H
#define PARAM_POLYNOMIAL_H

#include <vector>
#include <barvinok/evalue.h>

/* A term in the parametric polynomial */
struct param_term {
	std::vector<int> powers;
	const evalue *coeff;
};

struct param_polynomial {
	std::vector<struct param_term> terms;

	param_polynomial(const evalue *polynomial, unsigned nvar);
	unsigned degree();
};

#endif
