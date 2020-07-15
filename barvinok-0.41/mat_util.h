#include <NTL/vec_ZZ.h>
#include <NTL/mat_ZZ.h>

using namespace NTL;

int lex_cmp(const vec_ZZ& a, const vec_ZZ& b);
void lex_order_rows(mat_ZZ& mat);
int lex_cmp(const mat_ZZ& a, const mat_ZZ& b);
