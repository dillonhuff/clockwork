#include <iostream>
#include <vector>
#include <barvinok/evalue.h>
#include <barvinok/options.h>
#include "lexmin.h"

struct EDomain_floor {
    bool     substituted; // see substitute method
    int	     refcount;
    evalue  *e;
    /* first element is denominator */
    Vector  *v;

    EDomain_floor(const evalue *f, int dim);
    ~EDomain_floor() {
	free_evalue_refs(e);
	delete e;
	Vector_Free(v);
    }
    EDomain_floor *ref() {
	++refcount;
	return this;
    }
    static void unref(EDomain_floor* floor) {
	if (!--floor->refcount)
	    delete floor;
    }
    void print(std::ostream& os, char **p) const;
    void eval(Value *values, Value *res) const;
    void substitute(evalue **sub, Matrix *T);
};

struct EDomain;

struct ge_constraint {
    const EDomain * const D;
    Matrix *M;
    std::vector<EDomain_floor *> new_floors;
    bool simplified;

    ge_constraint(const EDomain *const D) : D(D) {}
    ~ge_constraint() {
	for (int i = 0; i < new_floors.size(); ++i)
	    EDomain_floor::unref(new_floors[i]);
	Matrix_Free(M);
    }
};

struct EDomain {
    Polyhedron		*D;
    Vector		*sample;
    std::vector<EDomain_floor *>	floors;

    EDomain(Polyhedron *D) {
	this->D = Polyhedron_Copy(D);
	sample = NULL;
    }
    EDomain(Polyhedron *D, std::vector<EDomain_floor *>floors) {
	this->D = Polyhedron_Copy(D);
	add_floors(floors);
	sample = NULL;
    }
    EDomain(EDomain *ED) {
	this->D = Polyhedron_Copy(ED->D);
	add_floors(ED->floors);
	sample = NULL;
    }
    static EDomain *new_from_ge_constraint(ge_constraint *ge, int sign,
					   barvinok_options *options);
    EDomain(Polyhedron *D, const EDomain *const ED,
	    std::vector<EDomain_floor *>floors) {
	this->D = Polyhedron_Copy(D);
	add_floors(ED->floors);
	add_floors(floors);
	sample = NULL;
    }
    void add_floors(std::vector<EDomain_floor *>floors) {
	for (int i = 0; i < floors.size(); ++i)
	    this->floors.push_back(floors[i]->ref());
    }
    int find_floor(evalue *needle) const {
	for (int i = 0; i < floors.size(); ++i)
	    if (eequal(needle, floors[i]->e))
		return i;
	return -1;
    }
    //void print(FILE *out, char **p);
    void print_constraints(std::ostream& os, char **p,
			   barvinok_options *options) const;
    ~EDomain() {
	for (int i = 0; i < floors.size(); ++i)
	    EDomain_floor::unref(floors[i]);
	Polyhedron_Free(D);
	if (sample)
	    Vector_Free(sample);
    }

    unsigned dimension() const {
	return D->Dimension - floors.size();
    }
    bool contains(Value *point, int len) const;

    ge_constraint *compute_ge_constraint(evalue *constraint) const;
    void substitute(evalue **sub, Matrix *T, Matrix *Eq, unsigned MaxRays);
    bool not_empty(lexmin_options *options);
};

int evalue2constraint(EDomain *D, evalue *E, Value *cons, int len);
