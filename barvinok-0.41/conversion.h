#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>
#include <barvinok/polylib.h>

using namespace NTL;

void value2zz(Value v, ZZ& z);
void zz2value(const ZZ& z, Value& v);
void values2zz(Value *p, vec_ZZ& v, int len);
void zz2values(const vec_ZZ& v, Value *p);
void matrix2zz(Matrix *M, mat_ZZ& m, unsigned nr, unsigned nc);
Matrix *rays(Polyhedron *C);
Matrix *rays2(Polyhedron *C);
Matrix *zz2matrix(const mat_ZZ& rays);
void rays(Polyhedron *C, mat_ZZ& rays);
void randomvector(Polyhedron *P, vec_ZZ& lambda, int nvar, int n_try);
