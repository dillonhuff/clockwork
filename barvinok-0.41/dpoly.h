#ifndef DPOLY_H
#define DPOLY_H

#include <barvinok/set.h>
#include <vector>
#include <gmp.h>
#include <NTL/ZZ.h>
#include <barvinok/polylib.h>
#include "conversion.h"

using namespace NTL;

class dpoly {
public:
    Vector *coeff;
    dpoly(const dpoly& o) {
	coeff = Vector_Alloc(o.coeff->Size);
	Vector_Copy(o.coeff->p, coeff->p, o.coeff->Size);
    }
    dpoly(int d) {
	coeff = Vector_Alloc(d+1);
    }
    dpoly(int d, const Value degree, int offset = 0);
    ~dpoly() {
	Vector_Free(coeff);
    }
    void operator += (const dpoly& t);
    void operator *= (const Value f);
    void operator *= (const dpoly& f);
    void div(const dpoly& d, mpq_t count, int sign);
    void div(const dpoly& d, mpq_t *count, const mpq_t& factor);
    Vector *div(const dpoly &d);
};

/* Each element in powers corresponds to a factor of the form (1 - z^b)
 * and indicates the exponent of this factor in the denominator.
 * The constants b are stored elsewhere (den_r in reducer::reducer).
 */
struct dpoly_r_term {
    std::vector<int>    powers;
    ZZ	    	    	coeff;
};

struct dpoly_r_term_lex_smaller {
    bool operator()(const dpoly_r_term* t1, const dpoly_r_term* t2) const {
	return t1->powers < t2->powers;
    }
};

typedef std::set<dpoly_r_term*, dpoly_r_term_lex_smaller> dpoly_r_term_list;

/* len: number of elements in c
 * each element in c is the coefficient of a power of t
 * in the MacLaurin expansion
 */
struct dpoly_r {
    dpoly_r_term_list	*c;
    int len;
    int dim;
    ZZ denom;

    void add_term(int i, const std::vector<int>& powers, const ZZ& coeff);
    dpoly_r(int len, int dim);
    dpoly_r(dpoly& num, int dim);
    dpoly_r(dpoly& num, dpoly& den, int pos, int dim);
    dpoly_r(const dpoly_r* num, dpoly& den, int pos, int dim);
    ~dpoly_r();
    dpoly_r *div(const dpoly& d) const;
    void dump(void);
};

#endif
