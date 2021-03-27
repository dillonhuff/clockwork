#ifndef DECOMPOSER_H
#define DECOMPOSER_H

#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>
#include <barvinok/options.h>

using namespace NTL;

struct signed_cone {
    signed_cone(const mat_ZZ& rays, int sign, unsigned long det) :
			C(NULL), rays(rays), sign(sign), det(det) {}
    signed_cone(Polyhedron *C, const mat_ZZ& rays, int sign,
		unsigned long det = 0) :
			C(C), rays(rays), sign(sign), det(det) {}
    Polyhedron *C;
    const mat_ZZ& rays;
    int sign;
    unsigned long det;
};

struct signed_cone_consumer {
    virtual void handle(const signed_cone& sc, barvinok_options *options) = 0;
    virtual ~signed_cone_consumer() {}
};

struct vertex_decomposer {
    Param_Polyhedron *PP;
    Param_Vertices *V;	// current vertex
    int vert;		// current vertex index
    signed_cone_consumer& scc;

    vertex_decomposer(Param_Polyhedron *PP, signed_cone_consumer& scc) :
			PP(PP), scc(scc) {}
    void decompose_at_vertex(Param_Vertices *V, int _i, barvinok_options *options);
};

void barvinok_decompose(Polyhedron *C, signed_cone_consumer& scc,
			barvinok_options *options);

#endif
