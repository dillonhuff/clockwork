#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include "reducer.h"

struct counter_base: public np_base {
    Vector *lambda;
    Matrix *den;
    Matrix *num;
    mpq_t count;
    Value tmp;

    counter_base(unsigned dim, unsigned long max_index) : np_base(dim) {
	mpq_init(count);
	num = Matrix_Alloc(max_index, 1);
	den = Matrix_Alloc(dim, 1);
	lambda = Vector_Alloc(dim);
	value_init(tmp);
    }

    virtual void init(Polyhedron *P, int n_try) {
	vec_ZZ l;
	randomvector(P, l, dim, n_try);
	zz2values(l, lambda->p);
    }

    virtual void reset() {
	mpq_set_si(count, 0, 0);
    }

    ~counter_base() {
	Matrix_Free(num);
	Matrix_Free(den);
	Vector_Free(lambda);
	mpq_clear(count);
	value_clear(tmp);
    }

    virtual void add_lattice_points(int sign) = 0;

    virtual void handle(const mat_ZZ& rays, Value *vertex, const QQ& c,
			unsigned long det, barvinok_options *options);
    virtual void get_count(Value *result) {
	assert(value_one_p(&count[0]._mp_den));
	value_assign(*result, &count[0]._mp_num);
    }
};

struct counter : public counter_base {
    counter(unsigned dim, unsigned long max_index) :
	counter_base(dim, max_index) {}

    virtual void add_lattice_points(int sign);
};

struct tcounter : public counter_base {
    mpq_t tcount;
    dpoly todd;
    Vector *todd_denom;
    Value denom;

    tcounter(unsigned dim, unsigned long max_index) :
		counter_base(dim, max_index), todd(dim) {
	mpq_init(tcount);
	setup_todd(dim);
	value_init(denom);
    }

    void setup_todd(unsigned dim);

    void adapt_todd(dpoly& t, const Value c);
    void add_powers(dpoly& n, const Value c);

    ~tcounter() {
	mpq_clear(tcount);
	Vector_Free(todd_denom);
	value_clear(denom);
    }

    virtual void add_lattice_points(int sign);
};

/* A counter for possibly infinite sets.
 * Rather than just keeping track of the constant term
 * of the Laurent expansions, we also keep track of the
 * coefficients of negative powers.
 * If any of these is non-zero, then the counted set is infinite.
 */
struct infinite_counter {
    /* an array of coefficients; count[i] is the coeffient of
     * the term with power -i.
     */
    vec_ZZ lambda;
    mpq_t *count;
    unsigned maxlen;
    Value tz;

    infinite_counter(unsigned dim, unsigned maxlen) : maxlen(maxlen) {
	count = new mpq_t[maxlen+1];
	for (int i = 0; i <= maxlen; ++i)
	    mpq_init(count[i]);
	value_init(tz);
    }

    void init(Polyhedron *context, int n_try);

    void reduce(const vec_QQ& c, const mat_ZZ& num, const mat_ZZ& den_f);

    ~infinite_counter() {
	for (int i = 0; i <= maxlen; ++i)
	    mpq_clear(count[i]);
	delete [] count;
	value_clear(tz);
    }
};
