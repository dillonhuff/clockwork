#include "matrix_read.h"

Matrix *Matrix_Read(std::istream& is)
{
    Matrix *M;
    int r, c;
    ZZ tmp;

    is >> r >> c;
    M = Matrix_Alloc(r, c);
    for (int i = 0; i < r; ++i)
	for (int j = 0; j < c; ++j) {
	    is >> tmp;
	    zz2value(tmp, M->p[i][j]);
	}
    return M;
}
