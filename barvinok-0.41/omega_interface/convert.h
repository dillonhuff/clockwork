#include <barvinok/barvinok.h>
#include <omega.h>
#include <vector>

typedef std::vector<Variable_ID> varvector;

Polyhedron *relation2Domain(Relation& r, varvector& vv, varvector& params,
				unsigned MaxRays);
Relation Polyhedron2relation(Polyhedron *P,
			  unsigned exist, unsigned nparam, const char **params);
Relation Domain2relation(Polyhedron *D, unsigned nvar, unsigned nparam,
			 const char **params);
