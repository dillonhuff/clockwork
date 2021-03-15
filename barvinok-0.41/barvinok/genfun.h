#ifndef GENFUN_H
#define GENFUN_H

#include <barvinok/set.h>
#include <iostream>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/evalue.h>
#include <barvinok/NTL_QQ.h>
#include <barvinok/options.h>

using namespace NTL;

struct short_rat {
    struct __short_rat_n {
	/* rows of power/columns of coeff: terms in numerator */
	vec_QQ	coeff;
	mat_ZZ	power;
    } n;
    struct __short_rat_d {
	/* rows: factors in denominator */
	mat_ZZ	power;
    } d;
    void add(const short_rat *rat);
    QQ coefficient(Value* params, barvinok_options *options) const;
    bool reduced();
    short_rat(const short_rat& r);
    short_rat(Value c);
    short_rat(const QQ& c, const vec_ZZ& num, const mat_ZZ& den);
    short_rat(const vec_QQ& c, const mat_ZZ& num, const mat_ZZ& den);
    void normalize();
    void print(std::ostream& os, unsigned int nparam,
		const char **param_name) const;
};

struct short_rat_lex_smaller_denominator {
  bool operator()(const short_rat* r1, const short_rat* r2) const;
};

typedef std::set<short_rat *, short_rat_lex_smaller_denominator > short_rat_list;

struct gen_fun {
    short_rat_list term;
    Polyhedron *context;

    void add(const QQ& c, const vec_ZZ& num, const mat_ZZ& den);
    void add(short_rat *r);
    /* add c times gf */
    void add(const QQ& c, const gen_fun *gf, barvinok_options *options);
    void substitute(Matrix *CP);
    gen_fun *Hadamard_product(const gen_fun *gf, barvinok_options *options);
    void add_union(gen_fun *gf, barvinok_options *options);
    void shift(const vec_ZZ& offset);
    void divide(const vec_ZZ& power);
    void print(std::ostream& os, unsigned int nparam,
		const char **param_name) const;
    static gen_fun *read(std::istream& is, barvinok_options *options);
    operator evalue *() const;
    ZZ coefficient(Value* params, barvinok_options *options) const;
    void coefficient(Value* params, Value* c) const;
    gen_fun *summate(int nvar, barvinok_options *options) const;
    bool summate(Value *sum) const;
    bool is_zero() const;

    gen_fun(const gen_fun *gf) {
	QQ one(1, 1);
	context = Polyhedron_Copy(gf->context);
	add(one, gf);
    }
    gen_fun(Value c);
    gen_fun(Polyhedron *C) : context(C) {}
    void clear_terms() {
	for (short_rat_list::iterator i = term.begin(); i != term.end(); ++i)
	    delete *i;
	term.clear();
    }
    ~gen_fun() {
	Polyhedron_Free(context);
	clear_terms();
    }
private:
    void extend_context(const gen_fun *gf, barvinok_options *options);
    void add(const QQ& c, const gen_fun *gf);
};

std::ostream & operator<< (std::ostream & os, const gen_fun& gf);

#endif
