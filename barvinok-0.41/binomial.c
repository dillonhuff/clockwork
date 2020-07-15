#include "binomial.h"

struct binom {
    Vector	**binom;
    unsigned	size;
    unsigned	n;
};
static struct binom binom;

Value *binomial(unsigned n, unsigned k)
{
    int i, j;

    if (n < binom.n)
	return &binom.binom[n]->p[k];

    if (n >= binom.size) {
	int size = 3*(n + 5)/2;

	binom.binom = (Vector **)realloc(binom.binom, size*sizeof(Vector *));
	binom.size = size;
    }
    for (i = binom.n; i <= n; ++i) {
	binom.binom[i] = Vector_Alloc(i+1);
	if (!i)
	    value_set_si(binom.binom[0]->p[0], 1);
	else {
	    value_set_si(binom.binom[i]->p[0], 1);
	    value_set_si(binom.binom[i]->p[i], 1);
	    for (j = 1; j < i; ++j)
		value_addto(binom.binom[i]->p[j],
			    binom.binom[i-1]->p[j-1], binom.binom[i-1]->p[j]);
	}
    }
    binom.n = n+1;
    return &binom.binom[n]->p[k];
}

struct fact {
    Value 	*fact;
    unsigned	size;
    unsigned	n;
};
static struct fact fact;

Value *factorial(unsigned n)
{
    int i;

    if (n < fact.n)
	return &fact.fact[n];

    if (n >= fact.size) {
	int size = 3*(n + 5)/2;

	fact.fact = (Value *)realloc(fact.fact, size*sizeof(Value));
	fact.size = size;
    }
    for (i = fact.n; i <= n; ++i) {
	value_init(fact.fact[i]);
	if (!i)
	    value_set_si(fact.fact[0], 1);
	else
	    mpz_mul_ui(fact.fact[i], fact.fact[i-1], i);
    }
    fact.n = n+1;
    return &fact.fact[n];
}
