#include <assert.h>
#include <iostream>
#include <barvinok/barvinok.h>
#include <barvinok/genfun.h>

/* This program computes the generating function of the holes in a semigroup.
 * The input is a matrix with the generators m_i of the semigroup as columns.
 * The output is the generating function for the set
 *
 *	(L \cap \cone { m_i }_i) \setminus S,
 *
 * with
 *	S = { \sum_i \lambda_i m_i | \lambda_i \in \Z_+ }
 * and
 *	L = { \sum_i \lambda_i m_i | \lambda_i \in \Z }
 */

using std::cout;
using std::cerr;
using std::endl;

/* Compute cone { m_i }_i, with m_i the columsn of generators.
 */
static Polyhedron *compute_cone(Matrix *generators, barvinok_options *options)
{
	Matrix *M;
	Polyhedron *cone;

	M = Matrix_Alloc(generators->NbColumns + 1, 1 + generators->NbRows + 1);
	assert(M);
	value_set_si(M->p[0][0], 1);
	value_set_si(M->p[0][M->NbColumns - 1], 1);
	for (int i = 0; i < generators->NbColumns; ++i) {
		value_set_si(M->p[1 + i][0], 1);
		for (int j = 0; j < generators->NbRows; ++j)
			value_assign(M->p[1 + i][1 + j], generators->p[j][i]);
	}
	cone = Rays2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);
	return cone;
}

/* Compute the generating function of L \cap \cone { m_i }_i, with
 * m_i the columns of generators and
 *
 *	L = { \sum_i \lambda_i m_i | \lambda_i \in \Z }
 *
 * We first compute the cone C = \cone { m_i }_i = { x | A x + b >= 0 }.
 * and we compute a minimal set of generators of the lattice by
 * computing the Hermite normal form H of generators.
 * Finally, we compute the generating function for the set
 *
 *	{ x | \exists y : A x + b >= 0, x = H y }
 *
 * Since the number of columns in H is less that or equal to the number
 * of rows, no projection needs to be performed during the computation
 * of this generating function.
 */
static gen_fun *compute_lattice_gf(Matrix *generators,
	barvinok_options *options)
{
	Matrix *H;
	Matrix *M;
	Polyhedron *cone, *L;
	int col, row;
	gen_fun *gf;

	cone = compute_cone(generators, options);

	left_hermite(generators, &H, NULL, NULL);

	for (row = col = 0; col < H->NbColumns; ++col) {
		while (row < H->NbRows && value_zero_p(H->p[row][col]))
			++row;
		if (row >= H->NbRows)
			break;
	}

	M = Matrix_Alloc(cone->NbConstraints + cone->Dimension,
			 1 + col + cone->Dimension + 1);
	assert(M);
	for (int i = 0; i < cone->NbConstraints; ++i) {
		value_assign(M->p[i][0], cone->Constraint[i][0]);
		for (int j = 0; j < cone->Dimension + 1; ++j)
			value_assign(M->p[i][1 + col + j],
					cone->Constraint[i][1 + j]);
	}
	for (int i = 0; i < cone->Dimension; ++i) {
		int row = cone->NbConstraints + i;
		value_set_si(M->p[row][1 + col + i], -1);
		for (int j = 0; j < col; ++j)
			value_assign(M->p[row][1 + j], H->p[i][j]);
	}
	Matrix_Free(H);
	Polyhedron_Free(cone);
	L = Constraints2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);
	gf = barvinok_enumerate_e_series(L, col, generators->NbRows, options);
	Polyhedron_Free(L);
	return gf;
}

/* Compute the generating function of
 *
 *	S = { x | \exists \lambda_i: x = \sum_i \lambda_i m_i, \lambda_i >= 0 }
 *
 * with m_i the columns of generators.
 */
static gen_fun *compute_semigroup_gf(Matrix *generators,
	barvinok_options *options)
{
	Matrix *M;
	Polyhedron *S;
	gen_fun *gf;

	M = Matrix_Alloc(generators->NbRows + generators->NbColumns,
			 1 + generators->NbColumns + generators->NbRows + 1);
	assert(M);
	for (int i = 0; i < generators->NbRows; ++i) {
		value_set_si(M->p[i][1 + generators->NbColumns + i], -1);
		for (int j = 0; j < generators->NbColumns; ++j)
			value_assign(M->p[i][1 + j], generators->p[i][j]);
	}
	for (int i = 0; i < generators->NbColumns; ++i) {
		int row = generators->NbRows + i;
		value_set_si(M->p[row][0], 1);
		value_set_si(M->p[row][1 + i], 1);
	}
	S = Constraints2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);
	gf = barvinok_enumerate_e_series(S, generators->NbColumns,
						generators->NbRows, options);
	Polyhedron_Free(S);
	return gf;
}

/* Compute the generating function of
 *
 *	(L \cap \cone { m_i }_i) \setminus S,
 *
 * Since S \subset (L \cap \cone { m_i }_i), this is simply computed as
 *
 *	f_{(L \cap \cone { m_i }_i)} - f_S
 */
static gen_fun *compute_holes_gf(Matrix *generators, barvinok_options *options)
{
	gen_fun *lattice;
	gen_fun *semigroup;
	gen_fun *holes;
	QQ mone(-1, 1);

	lattice = compute_lattice_gf(generators, options);

	semigroup = compute_semigroup_gf(generators, options);

	holes = lattice;
	holes->add(mone, semigroup, options);
	delete semigroup;

	return holes;
}

int main(int argc, char **argv)
{
	Matrix *generators;
	gen_fun *holes;
	barvinok_options *options = barvinok_options_new_with_defaults();

	argc = barvinok_options_parse(options, argc, argv, ISL_ARG_ALL);

	generators = Matrix_Read();
	assert(generators);
	holes = compute_holes_gf(generators, options);
	Matrix_Free(generators);

	holes->print(cout, 0, NULL);
	cout << endl;

	barvinok_options_free(options);
	return 0;
}
