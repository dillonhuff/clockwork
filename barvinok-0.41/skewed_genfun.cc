#include <iostream>
#include "conversion.h"
#include "skewed_genfun.h"

using std::endl;

void skewed_gen_fun::print(std::ostream& os, unsigned int nparam,
			    const char **param_name) const
{
    mat_ZZ m;
    if (T) {
	os << "T:" << endl;
	matrix2zz(T, m, T->NbRows, T->NbColumns);
	os << m << endl;
    }
    if (eq) {
	os << "eq:" << endl;
	matrix2zz(eq, m, eq->NbRows, eq->NbColumns);
	os << m << endl;
    }
    if (div) {
	os << "div:" << endl;
	matrix2zz(div, m, div->NbRows, div->NbColumns);
	os << m << endl;
    }
    gf->print(os, nparam, param_name);
}

void skewed_gen_fun::coefficient(Value* params, Value* c,
				 barvinok_options *options) const
{
    if (eq) {
	for (int i = 0; i < eq->NbRows; ++i) {
	    Inner_Product(eq->p[i]+1, params, eq->NbColumns-2, eq->p[i]);
	    if (value_notzero_p(eq->p[i][0])) {
		value_set_si(*c, 0);
		return;
	    }
	}
    }
    if (div) {
	Value tmp;
	value_init(tmp);
	for (int i = 0; i < div->NbRows; ++i) {
	    Inner_Product(div->p[i], params, div->NbColumns-1, &tmp);
	    if (!mpz_divisible_p(tmp, div->p[i][div->NbColumns-1])) {
		value_set_si(*c, 0);
		return;
	    }
	}
	value_clear(tmp);
    }

    ZZ coeff;
    if (!T)
	coeff = gf->coefficient(params, options);
    else {
	Vector *p2 = Vector_Alloc(T->NbRows);
	Matrix_Vector_Product(T, params, p2->p);
	if (value_notone_p(p2->p[T->NbRows-1]))
	    Vector_AntiScale(p2->p, p2->p, p2->p[T->NbRows-1], T->NbRows);
	coeff = gf->coefficient(p2->p, options);
	Vector_Free(p2);
    }

    zz2value(coeff, *c);
}
