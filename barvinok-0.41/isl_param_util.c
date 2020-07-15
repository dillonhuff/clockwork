#include <isl_aff_polylib.h>
#include <isl_set_polylib.h>
#include <isl/vertices.h>
#include "isl_param_util.h"

#define INT_BITS (sizeof(unsigned) * 8)

static isl_stat add_vertex(__isl_take isl_vertex *vertex, void *user)
{
	Param_Vertices ***next_V = (Param_Vertices ***) user;
	Param_Vertices *V;
	Polyhedron *D;
	isl_basic_set *dom;
	isl_multi_aff *expr;
	isl_ctx *ctx;

	ctx = isl_vertex_get_ctx(vertex);

	dom = isl_vertex_get_domain(vertex);
	D = isl_basic_set_to_polylib(dom);
	isl_basic_set_free(dom);

	expr = isl_vertex_get_expr(vertex);

	V = isl_alloc_type(ctx, Param_Vertices);
	V->Vertex = isl_multi_aff_to_polylib(expr);
	V->Domain = Polyhedron2Constraints(D);
	V->Facets = NULL;
	V->next = NULL;

	Polyhedron_Free(D);
	isl_multi_aff_free(expr);

	**next_V = V;
	*next_V = &V->next;

	isl_vertex_free(vertex);

	return isl_stat_ok;
}

struct bv_add_chamber_data {
	Param_Domain **next_D;
	int vertex_len;
	Param_Domain *dom;
};

static isl_stat add_chamber_vertex(__isl_take isl_vertex *vertex, void *user)
{
	struct bv_add_chamber_data *data = (struct bv_add_chamber_data *)user;
	unsigned v;

	v = isl_vertex_get_id(vertex);
	data->dom->F[v / INT_BITS] |= 1u << (INT_BITS - (v % INT_BITS) - 1);

	isl_vertex_free(vertex);

	return isl_stat_ok;
}

static isl_stat add_chamber(__isl_take isl_cell *cell, void *user)
{
	struct bv_add_chamber_data *data = (struct bv_add_chamber_data *)user;
	isl_ctx *ctx;
	isl_basic_set *domain;

	ctx = isl_cell_get_ctx(cell);

	domain = isl_cell_get_domain(cell);

	data->dom = isl_alloc_type(ctx, Param_Domain);
	data->dom->Domain = isl_basic_set_to_polylib(domain);
	data->dom->F = isl_calloc_array(ctx, unsigned, data->vertex_len);
	data->dom->next = NULL;

	isl_basic_set_free(domain);

	*data->next_D = data->dom;
	data->next_D = &data->dom->next;

	isl_cell_foreach_vertex(cell, &add_chamber_vertex, data);

	isl_cell_free(cell);

	return isl_stat_ok;
}

Param_Polyhedron *ISL_P2PP(Polyhedron *P, Polyhedron *C,
			  struct barvinok_options *options)
{
	isl_ctx *ctx = isl_ctx_alloc();
	isl_space *space;
	isl_basic_set *bset, *context;
	isl_vertices *vertices;
	unsigned nparam = C->Dimension;
	unsigned nvar = P->Dimension - nparam;
	Param_Polyhedron *PP = isl_calloc_type(ctx, Param_Polyhedron);
	Param_Vertices **next_V;
	struct bv_add_chamber_data data;

	space = isl_space_set_alloc(ctx, nparam, nvar);
	bset = isl_basic_set_new_from_polylib(P, space);
	space = isl_space_params_alloc(ctx, nparam);
	context = isl_basic_set_new_from_polylib(C, space);

	bset = isl_basic_set_intersect_params(bset, context);

	vertices = isl_basic_set_compute_vertices(bset);
	isl_basic_set_free(bset);

	PP->Rays = NULL;
	PP->nbV = isl_vertices_get_n_vertices(vertices);
	PP->Constraints = Polyhedron2Constraints(P);

	next_V = &PP->V;
	isl_vertices_foreach_vertex(vertices, &add_vertex, &next_V);

	data.next_D = &PP->D;
	data.vertex_len = (PP->nbV + INT_BITS - 1)/INT_BITS;
	isl_vertices_foreach_cell(vertices, &add_chamber, &data);

	isl_vertices_free(vertices);

	isl_ctx_free(ctx);

	return PP;
}
