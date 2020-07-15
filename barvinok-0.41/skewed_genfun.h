#ifndef SKEWED_GENFUN_H
#define SKEWED_GENFUN_H

#include <assert.h>
#include <barvinok/genfun.h>
#include <barvinok/options.h>

struct skewed_gen_fun {
    gen_fun *gf;
    /* maps original space to space in which gf is defined */
    Matrix  *T;
    /* equalities in the original space that need to be satisfied for
     * gf to be valid
     */
    Matrix  *eq;
    /* divisibilities in the original space that need to be satisfied for
     * gf to be valid
     */
    Matrix  *div;

    skewed_gen_fun(gen_fun *gf, Matrix *T = NULL, Matrix *eq = NULL,
		   Matrix *div = NULL) :
		    gf(gf), T(T), eq(eq), div(div) {}
    ~skewed_gen_fun() {
	if (T)
	    Matrix_Free(T);
	if (eq)
	    Matrix_Free(eq);
	if (div)
	    Matrix_Free(div);
	delete gf;
    }

    void print(std::ostream& os, unsigned int nparam,
		const char **param_name) const;
    operator evalue *() const {
	assert(T == NULL && eq == NULL); /* other cases not supported for now */
	return *gf;
    }
    void coefficient(Value* params, Value* c, barvinok_options *options) const;
};

#endif
