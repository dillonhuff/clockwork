#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct barvinok_options;

Param_Polyhedron *Polyhedron2Param_Polyhedron(Polyhedron *Din, Polyhedron *Cin,
					      struct barvinok_options *options);
void Param_Vertex_Common_Denominator(Param_Vertices *V);
void Param_Inner_Product(Value *constraint, Matrix *Vertex, Value *row);
Param_Domain *Param_Polyhedron_Facet(Param_Polyhedron *PP, Param_Domain *D,
				     Value *constraint);
void Param_Vertex_Set_Facets(Param_Polyhedron *PP, Param_Vertices *V);
Polyhedron *Param_Vertex_Cone(Param_Polyhedron *PP, Param_Vertices *V,
			      struct barvinok_options *options);

int bit_vector_count(unsigned *F, int F_len);

#if defined(__cplusplus)
}
#endif
