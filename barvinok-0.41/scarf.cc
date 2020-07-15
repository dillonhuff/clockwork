#include <assert.h>
#include <vector>
#include <barvinok/barvinok.h>
#include <barvinok/util.h>
#include "config.h"

using std::vector;

static Matrix *extract_matrix(Polyhedron *P, unsigned dim)
{
    Matrix *A;
    int n_col;

    n_col = 0;
    for (int i = 0; i < P->NbConstraints; ++i)
	if (value_notzero_p(P->Constraint[i][1+dim]) ||
	    value_notzero_p(P->Constraint[i][1+dim+1]))
	    ++n_col;

    A = Matrix_Alloc(2, n_col+2);
    n_col = 0;
    for (int i = 0; i < P->NbConstraints; ++i) {
	if (value_zero_p(P->Constraint[i][1+dim]) &&
	    value_zero_p(P->Constraint[i][1+dim+1]))
	    continue;
	value_assign(A->p[0][n_col], P->Constraint[i][1+dim]);
	value_assign(A->p[1][n_col], P->Constraint[i][1+dim+1]);
	++n_col;
    }
    value_set_si(A->p[0][n_col], 1);
    value_set_si(A->p[1][n_col+1], 1);

    return A;
}

static int lex_sign(Value *v, int len)
{
    int first;

    first = First_Non_Zero(v, len);
    return first == -1 ? 0 : value_sign(v[first]);
}

static void set_pos(int pos[4], int actual, int wanted)
{
    if (actual == wanted)
	return;
    int t = pos[actual];
    pos[actual] = pos[wanted];
    pos[wanted] = t;
}

static Matrix *normalize_matrix(Matrix *A, int pos[4], int *n)
{
    Matrix *T, *B;
    Value tmp, tmp2, factor;
    int type = -1;

    value_init(tmp);
    value_init(tmp2);
    value_init(factor);

    T = Matrix_Alloc(2, 2);
    Extended_Euclid(A->p[0][pos[0]], A->p[1][pos[0]], 
		    &T->p[0][0], &T->p[0][1], &tmp);
    value_division(T->p[1][0], A->p[1][pos[0]], tmp);
    value_division(T->p[1][1], A->p[0][pos[0]], tmp);
    value_oppose(T->p[0][0], T->p[0][0]);
    value_oppose(T->p[0][1], T->p[0][1]);
    value_oppose(T->p[1][0], T->p[1][0]);

    B = Matrix_Alloc(2, A->NbColumns);
    Matrix_Product(T, A, B);
    Matrix_Free(T);

    /* Make zero in first position negative */
    if (lex_sign(B->p[1], B->NbColumns) > 0) {
	value_set_si(tmp, -1);
	Vector_Scale(B->p[1], B->p[1], tmp, B->NbColumns);
    }

    /* First determine whether the matrix is of sign pattern I or II
     * (Theorem 1.11)
     */
    if (*n == 3) {
	assert(value_neg_p(B->p[1][pos[1]]));
	assert(value_pos_p(B->p[1][pos[2]]));

	value_set_si(factor, 0);
	for (int i = 1; i <= 2; ++i) {
	    value_pdivision(tmp, B->p[0][pos[i]], B->p[1][pos[i]]);
	    value_increment(tmp, tmp);
	    if (value_gt(tmp, factor))
		value_assign(factor, tmp);
	}
	value_oppose(factor, factor);
	value_set_si(tmp, 1);
	Vector_Combine(B->p[0], B->p[1], B->p[0],
		       tmp, factor, B->NbColumns);
	Vector_Exchange(B->p[0], B->p[1], B->NbColumns);
	/* problems with three constraints are considered
	 * to be of sign pattern II
	 */
	type = 2;
    } else {
	int i;
	for (i = 1; i <= 3; ++i)
	    if (value_zero_p(B->p[1][pos[i]]))
		break;
	if (i <= 3) {
	    /* put zero in position 3 */
	    set_pos(pos, i, 3);

	    /* put positive one in position 1 */
	    for (i = 1; i <= 3; ++i)
		if (value_pos_p(B->p[1][pos[i]]))
		    break;
	    set_pos(pos, i, 1);

	    value_set_si(factor, 0);
	    for (int i = 1; i <= 2; ++i) {
		value_pdivision(tmp, B->p[0][pos[i]], B->p[1][pos[i]]);
		value_increment(tmp, tmp);
		if (value_gt(tmp, factor))
		    value_assign(factor, tmp);
	    }
	    value_oppose(factor, factor);
	    value_set_si(tmp, 1);
	    Vector_Combine(B->p[0], B->p[1], B->p[0], tmp, factor, B->NbColumns);

	    assert(value_notzero_p(B->p[0][pos[3]]));
	    type = value_pos_p(B->p[0][pos[3]]) ? 1 : 2;
	} else {
	    int neg = 0;
	    int sign = lex_sign(B->p[1], B->NbColumns);
	    assert(sign < 0);
	    for (int i = 1; i <= 3; ++i)
		if (value_neg_p(B->p[1][pos[i]]))
		    ++neg;
	    assert(neg == 1 || neg == 2);
	    if (neg == 1) {
		int i;
		/* put negative one in position 1 */
		for (i = 1; i <= 3; ++i)
		    if (value_neg_p(B->p[1][pos[i]]))
			break;
		set_pos(pos, i, 1);

		value_set_si(factor, 0);
		for (int i = 1; i <= 3; ++i) {
		    value_pdivision(tmp, B->p[0][pos[i]], B->p[1][pos[i]]);
		    value_increment(tmp, tmp);
		    if (value_gt(tmp, factor))
			value_assign(factor, tmp);
		}
		value_oppose(factor, factor);
		value_set_si(tmp, 1);
		Vector_Combine(B->p[0], B->p[1], B->p[0],
			       tmp, factor, B->NbColumns);
		Vector_Exchange(B->p[0], B->p[1], B->NbColumns);
		type = 1;
	    } else {
		int i;
		/* put positive one in position 1 */
		for (i = 1; i <= 3; ++i)
		    if (value_pos_p(B->p[1][pos[i]]))
			break;
		set_pos(pos, i, 1);

		value_set_si(factor, 0);
		for (int i = 1; i <= 3; ++i) {
		    value_pdivision(tmp, B->p[0][pos[i]], B->p[1][pos[i]]);
		    value_increment(tmp, tmp);
		    if (value_gt(tmp, factor))
			value_assign(factor, tmp);
		}
		value_oppose(factor, factor);
		value_set_si(tmp, 1);
		Vector_Combine(B->p[0], B->p[1], B->p[0],
			       tmp, factor, B->NbColumns);
		type = 1;
	    }
	}
    }

    assert(type != -1);

    if (type == 2) {
	for (;;) {
	    value_oppose(tmp, B->p[0][pos[1]]);
	    value_pdivision(factor, tmp, B->p[1][pos[1]]);
	    value_oppose(tmp, B->p[1][pos[2]]);
	    value_pdivision(tmp, tmp, B->p[0][pos[2]]);
	    if (value_zero_p(factor) && value_zero_p(tmp))
		break;
	    assert(value_zero_p(factor) || value_zero_p(tmp));
	    if (value_pos_p(factor)) {
		value_set_si(tmp, 1);
		Vector_Combine(B->p[0], B->p[1], B->p[0], tmp, factor, B->NbColumns);
		if (value_zero_p(B->p[0][pos[1]])) {
		    /* We will deal with this later */
		    assert(lex_sign(B->p[0], B->NbColumns) < 0);
		}
	    } else {
		value_set_si(factor, 1);
		Vector_Combine(B->p[0], B->p[1], B->p[1], tmp, factor, B->NbColumns);
		if (value_zero_p(B->p[1][pos[2]])) {
		    /* We will deal with this later */
		    assert(lex_sign(B->p[1], B->NbColumns) < 0);
		}
	    }
	}
    } else {
	int neg;
	int sign;
	bool progress = true;
	while (progress) {
	    progress = false;
	    for (int i = 0; i <= 1; ++i) {
		value_set_si(factor, -1);
		for (int j = 1; j <= 3; ++j) {
		    if (value_zero_p(B->p[1-i][pos[j]]))
			continue;
		    value_oppose(tmp, B->p[i][pos[j]]);
		    value_pdivision(tmp, tmp, B->p[1-i][pos[j]]);
		    if (value_neg_p(factor) || value_lt(tmp, factor))
			value_assign(factor, tmp);
		}
		if (value_pos_p(factor)) {
		    value_set_si(tmp, 1);
		    Vector_Combine(B->p[i], B->p[1-i], B->p[i], tmp, factor, 
				   B->NbColumns);
		    sign = lex_sign(B->p[i], B->NbColumns);
		    for (int j = 1; j <= 3; ++j) {
			if (value_notzero_p(B->p[i][pos[j]]))
			    continue;
			/* a zero is interpreted to be of sign sign */
			if ((sign > 0 && value_pos_p(B->p[1-i][pos[j]])) ||
			    (sign < 0 && value_neg_p(B->p[1-i][pos[j]]))) {
			    /* the zero is of the wrong sign => back-off one */
			    value_set_si(tmp2, -1);
			    Vector_Combine(B->p[i], B->p[1-i], B->p[i], tmp, tmp2, 
					   B->NbColumns);
			    value_decrement(factor, factor);
			}
		    }
		    /* We may have backed-off, so we need to check again. */
		    if (value_pos_p(factor))
			progress = true;
		}
	    }
	}
	sign = 0;
	for (int i = 0; i < B->NbColumns; ++i) {
	    value_addto(tmp, B->p[0][i], B->p[1][i]);
	    if (value_zero_p(tmp))
		continue;
	    sign = value_neg_p(tmp) ? -1 : 1;
	    break;
	}
	neg = 0;
	for (int i = 1; i <= 3; ++i) {
	    value_addto(tmp, B->p[0][pos[i]], B->p[1][pos[i]]);
	    if (value_neg_p(tmp) || (sign < 0 && value_zero_p(tmp)))
		++neg;
	}
	assert(neg <= 2);
	switch(neg) {
	    int i;
	case 1:
	    /* cases 4 and 5 in Theorem 11.1 */
	    value_set_si(tmp, 1);
	    Vector_Combine(B->p[0], B->p[1], B->p[1], tmp, tmp, B->NbColumns);

	    /* put positive pair in position 3 */
	    for (i = 1; i <= 3; ++i)
		if (value_pos_p(B->p[0][pos[i]]) && value_pos_p(B->p[1][pos[i]]))
		    break;
	    assert(i <= 3);
	    set_pos(pos, i, 3);

	    break;
	case 2:
	    /* cases 1 and 2 in Theorem 11.1 */
	    value_set_si(tmp, 1);
	    Vector_Combine(B->p[0], B->p[1], B->p[0], tmp, tmp, B->NbColumns);

	    /* put positive one in position 2 */
	    for (i = 1; i <= 3; ++i)
		if (value_pos_p(B->p[0][pos[i]]))
		    break;
	    assert(i <= 3);
	    set_pos(pos, i, 2);

	    /* fourth constraint is redundant with respect to neighborhoods */
	    *n = 3;
	    break;
	case 0:
	    /* We will deal with these later */
	    assert(0);
	}
    }

    value_clear(tmp);
    value_clear(tmp2);
    value_clear(factor);

    return B;
}

struct simplex {
    Value   last;	// last multiple of offset in link
    Vector *offset;
    Matrix *M;		// rows: elements different from (0,0)
    int	    mask;

    simplex(int d) {
	M = Matrix_Alloc(d, 2);
	offset = NULL;
    }
    simplex(int d, int mask, Value last) {
	M = Matrix_Alloc(d, 2);
	offset = Vector_Alloc(2);
	value_init(this->last);
	value_assign(this->last, last);
	this->mask = mask;
    }
    void transform(Matrix *T);
    void normalize();
    Polyhedron *shrunk_polyhedron(Polyhedron *P, int dim, Matrix *A,
				    unsigned MaxRays);
    void print(FILE *out);
};

void simplex::print(FILE *out)
{
    if (!offset)
	Matrix_Print(out, P_VALUE_FMT, M);
    else {
	fprintf(out, "%d %d\n", M->NbRows, M->NbColumns);
	for (int j = 0; j < M->NbRows; ++j) {
	    for (int k = 0; k < M->NbColumns; ++k)
		value_print(out, P_VALUE_FMT, M->p[j][k]);
	    if (mask & (1 << j)) {
		fprintf(out, " + k * ");
		for (int k = 0; k < M->NbColumns; ++k)
		    value_print(out, P_VALUE_FMT, offset->p[k]);
	    }
	    fprintf(out, "\n");
	}
	fprintf(out, "\t0 <= k <= ");
	value_print(out, P_VALUE_FMT, last);
	fprintf(out, "\n");
    }
}

static bool lex_smaller(Value *v1, Value *v2, int n)
{
    for (int i = 0; i < n; ++i)
	if (value_lt(v1[i], v2[i]))
	    return true;
	else if (value_gt(v1[i], v2[i]))
	    return false;
    return false;
}

void simplex::transform(Matrix *T)
{
    Matrix *M2 = M;
    M = Matrix_Alloc(M2->NbRows, M2->NbColumns);
    Matrix_Product(M2, T, M);
    Matrix_Free(M2);

    if (offset) {
	Vector *offset2 = offset;
	offset = Vector_Alloc(offset2->Size);
	Vector_Matrix_Product(offset2->p, T, offset->p);
	Vector_Free(offset2);
    }
}

void simplex::normalize()
{
    int lexmin = 0;
    for (int i = 1; i < M->NbRows; ++i)
	if (lex_smaller(M->p[i], M->p[lexmin], 2))
	    lexmin = i;
    if (lex_sign(M->p[lexmin], 2) < 0) {
	Value tmp;
	value_init(tmp);
	value_set_si(tmp, -1);
	Vector_Scale(M->p[lexmin], M->p[lexmin], tmp, 2);
	value_set_si(tmp, 1);
	for (int i = 0; i < M->NbRows; ++i) {
	    if (i == lexmin)
		continue;
	    Vector_Combine(M->p[lexmin], M->p[i], M->p[i], tmp, tmp, 2);
	}
	if (offset && (mask & (1 << lexmin))) {
	    value_set_si(tmp, -1);
	    Vector_Scale(offset->p, offset->p, tmp, 2);
	    mask ^= (1 << M->NbRows) - 1 - (1 << lexmin);
	}
	value_clear(tmp);
    }
}

Polyhedron *simplex::shrunk_polyhedron(Polyhedron *P, int dim, Matrix *A,
					unsigned MaxRays)
{
    Matrix *Constraints, *b;
    Vector *b_offset = NULL;
    Polyhedron *Q;
    Value min, min_var, tmp;
    value_init(tmp);
    value_init(min);
    value_init(min_var);
    int constant;

    b = Matrix_Alloc(M->NbRows, A->NbColumns);
    Matrix_Product(M, A, b);

    if (offset) {
	b_offset = Vector_Alloc(A->NbColumns);
	Vector_Matrix_Product(offset->p, A, b_offset->p);
    }

    if (!offset)
	Constraints = Polyhedron2Constraints(P);
    else {
	Constraints = Matrix_Alloc(P->NbConstraints+2, P->Dimension+2+1);
	for (int i = 0; i < P->NbConstraints; ++i) {
	    Vector_Copy(P->Constraint[i], Constraints->p[i], 1+dim+2);
	    Vector_Copy(P->Constraint[i]+1+dim+2, Constraints->p[i]+1+dim+2+1, 
			(P->Dimension+2)-(1+dim+2));
	}
	value_set_si(Constraints->p[P->NbConstraints][0], 1);
	value_set_si(Constraints->p[P->NbConstraints][1+dim+2], 1);
	value_set_si(Constraints->p[P->NbConstraints+1][0], 1);
	value_set_si(Constraints->p[P->NbConstraints+1][1+dim+2], -1);
	value_assign(Constraints->p[P->NbConstraints+1][Constraints->NbColumns-1],
		     last);
    }
    constant = Constraints->NbColumns - 1;

    for (int i = 0, j = 0; i < P->NbConstraints; ++i) {
	if (value_zero_p(Constraints->p[i][1+dim]) &&
	    value_zero_p(Constraints->p[i][1+dim+1]))
	    continue;
	value_set_si(min, 0);
	for (int k = 0; k < b->NbRows; ++k) {
	    if (offset && (mask & (1 << k)))
		continue;
	    if (value_lt(b->p[k][j], min))
		value_assign(min, b->p[k][j]);
	}
	value_set_si(min_var, 0);
	if (offset) {
	    if (value_neg_p(b_offset->p[j])) {
		value_oppose(min_var, b_offset->p[j]);
		value_multiply(min_var, min_var, last);
		value_increment(min_var, min_var);
	    }
	    for (int k = 0; k < b->NbRows; ++k) {
		if (!(mask & (1 << k)))
		    continue;
		if (value_lt(b->p[k][j], min_var))
		    value_assign(min_var, b->p[k][j]);
	    }
	}
	if (!offset || value_pos_p(b_offset->p[j])) {
	    if (value_le(min, min_var))
		value_addto(Constraints->p[i][constant],
			    Constraints->p[i][constant], min);
	    else {
		value_assign(tmp, min_var);
		value_addmul(tmp, last, b_offset->p[j]);
		if (value_le(tmp, min)) {
		    value_addto(Constraints->p[i][constant],
				Constraints->p[i][constant], min_var);
		    value_addto(Constraints->p[i][1+dim+2],
				Constraints->p[i][1+dim+2], b_offset->p[j]);
		} else {
		    int lastrow = Constraints->NbRows;
		    int cols = Constraints->NbColumns;
		    Matrix *C = Constraints;
		    Constraints = AddANullRow(Constraints);
		    Matrix_Free(C);
		    Vector_Copy(Constraints->p[i], Constraints->p[lastrow], cols);
		    value_addto(Constraints->p[i][constant],
				Constraints->p[i][constant], min_var);
		    value_addto(Constraints->p[i][1+dim+2],
				Constraints->p[i][1+dim+2], b_offset->p[j]);
		    value_addto(Constraints->p[lastrow][constant],
				Constraints->p[lastrow][constant], min);
		}
	    }
	} else {
	    if (value_le(min_var, min)) {
		value_addto(Constraints->p[i][constant],
			    Constraints->p[i][constant], min_var);
		value_addto(Constraints->p[i][1+dim+2],
			    Constraints->p[i][1+dim+2], b_offset->p[j]);
	    } else {
		value_assign(tmp, min_var);
		value_addmul(tmp, last, b_offset->p[j]);
		if (value_le(min, tmp)) {
		    value_addto(Constraints->p[i][constant],
				Constraints->p[i][constant], min);
		} else {
		    int lastrow = Constraints->NbRows;
		    int cols = Constraints->NbColumns;
		    Matrix *C = Constraints;
		    Constraints = AddANullRow(Constraints);
		    Matrix_Free(C);
		    Vector_Copy(Constraints->p[i], Constraints->p[lastrow], cols);
		    value_addto(Constraints->p[i][constant],
				Constraints->p[i][constant], min_var);
		    value_addto(Constraints->p[i][1+dim+2],
				Constraints->p[i][1+dim+2], b_offset->p[j]);
		    value_addto(Constraints->p[lastrow][constant],
				Constraints->p[lastrow][constant], min);
		}
	    }
	}
	++j;
    }
    Q = Constraints2Polyhedron(Constraints, MaxRays);

    if (b_offset)
	Vector_Free(b_offset);
    Matrix_Free(b);
    Matrix_Free(Constraints);
    value_clear(tmp);
    value_clear(min);
    value_clear(min_var);

    return Q;
}

struct scarf_complex {
    vector<simplex> simplices;
    void add(Matrix *B, int pos[4], int n);
    void add(Matrix *T, simplex s);
    void print(FILE *out);
    ~scarf_complex() {
	for (int i = 0; i < simplices.size(); ++i) {
	    Matrix_Free(simplices[i].M);
	    if (simplices[i].offset) {
		Vector_Free(simplices[i].offset);
		value_clear(simplices[i].last);
	    }
	}
    }
};

void scarf_complex::add(Matrix *T, simplex s)
{
    s.transform(T);
    s.normalize();
    if (s.offset && lex_sign(s.offset->p, 2) < 0) {
	Value factor;
	Value tmp;
	value_init(factor);
	value_init(tmp);
	/* compute the smallest multiple (factor) of the offset that
	 * makes on of the vertices lexico-negative.
	 */
	int lexmin = -1;
	for (int i = 0; i < s.M->NbRows; ++i) {
	    if (!(s.mask & (1 << i)))
		continue;
	    if (lexmin == -1 || lex_smaller(s.M->p[i], s.M->p[lexmin], 2))
		lexmin = i;
	}
	if (value_zero_p(s.offset->p[0])) {
	    if (value_pos_p(s.M->p[lexmin][0]))
		value_increment(factor, s.last);
	    else {
		value_oppose(factor, s.M->p[lexmin][1]);
		mpz_cdiv_q(factor, factor, s.offset->p[1]);
	    }
	} else {
	    value_oppose(factor, s.M->p[lexmin][0]);
	    mpz_cdiv_q(factor, factor, s.offset->p[0]);
	    if (mpz_divisible_p(s.M->p[lexmin][0], s.offset->p[0])) {
		value_assign(tmp, s.M->p[lexmin][1]);
		value_addmul(tmp, factor, s.offset->p[1]);
		if (value_pos_p(tmp))
		    value_increment(factor, factor);
	    }
	}
	if (value_le(factor, s.last)) {
	    simplex part(s.M->NbRows, s.mask, s.last);
	    Vector_Copy(s.offset->p, part.offset->p, 2);
	    value_set_si(tmp, 1);
	    for (int i = 0; i < s.M->NbRows; ++i) {
		if (s.mask & (1 << i))
		    Vector_Combine(s.M->p[i], s.offset->p, part.M->p[i], 
				   tmp, factor, 2);
		else
		    Vector_Copy(s.M->p[i], part.M->p[i], 2);
	    }
	    value_subtract(part.last, part.last, factor);
	    value_decrement(s.last, factor);
	    part.normalize();
	    simplices.push_back(part);
	}
	value_clear(tmp);
	value_clear(factor);
    }
    simplices.push_back(s);
}

void scarf_complex::add(Matrix *B, int pos[4], int n)
{
    Matrix *T;

    T = Matrix_Alloc(2, 2);
    Vector_Copy(B->p[0]+B->NbColumns-2, T->p[0], 2);
    Vector_Copy(B->p[1]+B->NbColumns-2, T->p[1], 2);

    if (n == 3 || value_neg_p(B->p[0][pos[3]])) {
	assert(n == 3 || value_neg_p(B->p[1][pos[3]]));

	simplex s1(1);
	value_set_si(s1.M->p[0][0], 0);
	value_set_si(s1.M->p[0][1], 1);
	add(T, s1);

	simplex s2(1);
	value_set_si(s2.M->p[0][0], 1);
	value_set_si(s2.M->p[0][1], 1);
	add(T, s2);

	simplex s3(1);
	value_set_si(s3.M->p[0][0], 1);
	value_set_si(s3.M->p[0][1], 0);
	add(T, s3);

	simplex s4(2);
	value_set_si(s4.M->p[0][0], 0);
	value_set_si(s4.M->p[0][1], 1);
	value_set_si(s4.M->p[1][0], 1);
	value_set_si(s4.M->p[1][1], 1);
	add(T, s4);

	simplex s5(2);
	value_set_si(s5.M->p[0][0], 1);
	value_set_si(s5.M->p[0][1], 0);
	value_set_si(s5.M->p[1][0], 1);
	value_set_si(s5.M->p[1][1], 1);
	add(T, s5);
    } else {
	Matrix *h;
	Vector *offset;
	bool initial = true;
	bool progress = true;
	Value tmp, tmp2, factor;
	int sign;

	value_init(tmp);
	value_init(tmp2);
	value_init(factor);

	assert(value_pos_p(B->p[0][pos[3]]));
	assert(value_pos_p(B->p[1][pos[3]]));

	h = Matrix_Alloc(3, 2);
	value_set_si(h->p[0][0], 1);
	value_set_si(h->p[0][1], 0);
	value_set_si(h->p[1][0], 0);
	value_set_si(h->p[1][1], 1);
	value_set_si(h->p[2][0], 1);
	value_set_si(h->p[2][1], 1);

	offset = Vector_Alloc(2);

	while (progress) {
	    progress = false;
	    for (int i = 0; i <= 1; ++i) {
		value_set_si(factor, -1);
		for (int j = 1; j <= 2; ++j) {
		    if (value_zero_p(B->p[1-i][pos[j]]))
			continue;
		    value_oppose(tmp, B->p[i][pos[j]]);
		    value_pdivision(tmp, tmp, B->p[1-i][pos[j]]);
		    if (value_neg_p(factor) || value_lt(tmp, factor))
			value_assign(factor, tmp);
		}
		if (value_pos_p(factor)) {
		    value_set_si(tmp, 1);
		    Vector_Combine(B->p[i], B->p[1-i], B->p[i], tmp, factor, 
				   B->NbColumns);
		    sign = lex_sign(B->p[i], B->NbColumns);
		    for (int j = 1; j <= 2; ++j) {
			if (value_notzero_p(B->p[i][pos[j]]))
			    continue;
			/* a zero is interpreted to be of sign sign */
			if ((sign > 0 && value_pos_p(B->p[1-i][pos[j]])) ||
			    (sign < 0 && value_neg_p(B->p[1-i][pos[j]]))) {
			    /* the zero is of the wrong sign => back-off one */
			    value_set_si(tmp2, -1);
			    Vector_Combine(B->p[i], B->p[1-i], B->p[i], tmp, tmp2, 
					   B->NbColumns);
			    value_decrement(factor, factor);
			}
		    }
		    /* We may have backed-off, so we need to check again. */
		    if (value_pos_p(factor)) {
			progress = true;
			value_set_si(tmp, 1);
			value_set_si(tmp2, -1);

			Vector_Combine(h->p[2], h->p[i], offset->p, tmp, tmp2, 2);

			if (initial) {
			    /* the initial simplices not in any link */
			    simplex l1(1);
			    Vector_Copy(h->p[0], l1.M->p[0], 2);
			    add(T, l1);

			    simplex l2(1);
			    Vector_Copy(h->p[1], l2.M->p[0], 2);
			    add(T, l2);

			    simplex l3(1);
			    Vector_Combine(h->p[0], h->p[1], l3.M->p[0],
					   tmp, tmp2, 2);
			    add(T, l3);

			    simplex t1(2);
			    Vector_Copy(h->p[0], t1.M->p[0], 2);
			    Vector_Copy(h->p[1], t1.M->p[1], 2);
			    add(T, t1);

			    simplex t2(2);
			    Vector_Combine(h->p[0], h->p[1], t2.M->p[0],
					   tmp, tmp2, 2);
			    Vector_Combine(h->p[2], h->p[1], t2.M->p[1],
					   tmp, tmp2, 2);
			    add(T, t2);
			} else {
			    /* update h */
			    Vector_Combine(h->p[i], offset->p, h->p[i],
					   tmp, tmp, 2);
			    Vector_Combine(h->p[2], offset->p, h->p[2],
					   tmp, tmp, 2);
			    value_decrement(factor, factor);
			}

			simplex q(3, 0x4 | (1 << i), factor);
			Vector_Copy(h->p[0], q.M->p[0], 2);
			Vector_Copy(h->p[1], q.M->p[1], 2);
			Vector_Copy(h->p[2], q.M->p[2], 2);
			Vector_Copy(offset->p, q.offset->p, 2);
			add(T, q);

			simplex t1(2, 0x3, factor);
			Vector_Copy(h->p[i], t1.M->p[0], 2);
			Vector_Copy(h->p[2], t1.M->p[1], 2);
			Vector_Copy(offset->p, t1.offset->p, 2);
			add(T, t1);

			simplex t2(2, 0x2, factor);
			Vector_Copy(h->p[1-i], t2.M->p[0], 2);
			Vector_Copy(h->p[2], t2.M->p[1], 2);
			Vector_Copy(offset->p, t2.offset->p, 2);
			add(T, t2);

			simplex l(1, 0x1, factor);
			Vector_Copy(h->p[2], l.M->p[0], 2);
			Vector_Copy(offset->p, l.offset->p, 2);
			add(T, l);

			/* update h */
			Vector_Combine(h->p[i], offset->p, h->p[i], tmp, factor, 2);
			Vector_Combine(h->p[2], offset->p, h->p[2], tmp, factor, 2);

			initial = false;
		    }
		}
	    }
	}
	if (initial) {
	    /* the initial simplices not in any link */
	    simplex l1(1);
	    Vector_Copy(h->p[0], l1.M->p[0], 2);
	    add(T, l1);

	    simplex l2(1);
	    Vector_Copy(h->p[1], l2.M->p[0], 2);
	    add(T, l2);

	    simplex l3(1);
	    Vector_Combine(h->p[0], h->p[1], l3.M->p[0],
			   tmp, tmp2, 2);
	    add(T, l3);

	    simplex t1(2);
	    Vector_Copy(h->p[0], t1.M->p[0], 2);
	    Vector_Copy(h->p[1], t1.M->p[1], 2);
	    add(T, t1);

	    simplex t2(2);
	    Vector_Combine(h->p[0], h->p[1], t2.M->p[0],
			   tmp, tmp2, 2);
	    Vector_Combine(h->p[2], h->p[1], t2.M->p[1],
			   tmp, tmp2, 2);
	    add(T, t2);

	    {
		/* the simplices in a link, here of length 1 */
		simplex q(3);
		Vector_Copy(h->p[0], q.M->p[0], 2);
		Vector_Copy(h->p[1], q.M->p[1], 2);
		Vector_Copy(h->p[2], q.M->p[2], 2);
		add(T, q);

		simplex t1(2);
		Vector_Copy(h->p[0], t1.M->p[0], 2);
		Vector_Copy(h->p[2], t1.M->p[1], 2);
		add(T, t1);

		simplex t2(2);
		Vector_Copy(h->p[1], t2.M->p[0], 2);
		Vector_Copy(h->p[2], t2.M->p[1], 2);
		add(T, t2);

		simplex l(1);
		Vector_Copy(h->p[2], l.M->p[0], 2);
		add(T, l);
	    }
	}

	Vector_Free(offset);
	Matrix_Free(h);

	value_clear(tmp);
	value_clear(tmp2);
	value_clear(factor);
    }

    Matrix_Free(T);
}

void scarf_complex::print(FILE *out)
{
    for (int i = 0; i < simplices.size(); ++i)
	simplices[i].print(out);
}

struct scarf_collector {
    virtual void add(Polyhedron *P, int sign, Polyhedron *C,
		     barvinok_options *options) = 0;
    virtual ~scarf_collector() {}
};

static void scarf(Polyhedron *P, unsigned exist, unsigned nparam,
		  barvinok_options *options, scarf_collector& col)
{
    Matrix *A, *B;
    int dim = P->Dimension - exist - nparam;
    assert(exist == 2);
    int pos[4];
    Polyhedron *U;
    int n;

    A = extract_matrix(P, dim);

    n = A->NbColumns - 2;
    assert(n >= 3 && n <= 4);

    int l = 0;
    for (int i = 0; i < n; ++i) {
	int j;
	for (j = 0; j < l; ++j)
	    if (value_eq(A->p[0][pos[j]], A->p[0][i]) &&
		value_eq(A->p[1][pos[j]], A->p[1][i]))
		break;
	if (j < l)
	    continue;
	pos[l++] = i;
    }

    assert(l >= 3 && l <= 4);
    B = normalize_matrix(A, pos, &l);

    scarf_complex scarf;
    scarf.add(B, pos, l);

    U = Universe_Polyhedron(nparam);
    col.add(P, 0, U, options);
    for (int i = 0; i < scarf.simplices.size(); ++i) {
	Polyhedron *Q;
	int sign = (scarf.simplices[i].M->NbRows % 2) ? -1 : 1;
	Q = scarf.simplices[i].shrunk_polyhedron(P, dim, A, options->MaxRays);
	col.add(Q, sign, U, options);
	Polyhedron_Free(Q);
    }
    Polyhedron_Free(U);

    Matrix_Free(B);

    Matrix_Free(A);
}

struct scarf_collector_gf : public scarf_collector {
    QQ c;
    gen_fun *gf;

    scarf_collector_gf() {
	c.d = 1;
    }
    virtual void add(Polyhedron *P, int sign, Polyhedron *C,
		     barvinok_options *options);
};

void scarf_collector_gf::add(Polyhedron *P, int sign, Polyhedron *C, 
			     barvinok_options *options)
{
    if (!sign)
	gf = barvinok_series_with_options(P, C, options);
    else {
	gen_fun *gf2;
	c.n = sign;
	gf2 = barvinok_series_with_options(P, C, options);
	gf->add(c, gf2, options);
	delete gf2;
    }
}

gen_fun *barvinok_enumerate_scarf_series(Polyhedron *P,
			  unsigned exist, unsigned nparam, barvinok_options *options)
{
    scarf_collector_gf scgf;
    scarf(P, exist, nparam, options, scgf);
    return scgf.gf;
}

struct scarf_collector_ev : public scarf_collector {
    evalue mone;
    evalue *EP;

    scarf_collector_ev() {
	value_init(mone.d);
	evalue_set_si(&mone, -1, 1);
    }
    ~scarf_collector_ev() {
	free_evalue_refs(&mone); 
    }
    virtual void add(Polyhedron *P, int sign, Polyhedron *C,
		     barvinok_options *options);
};

void scarf_collector_ev::add(Polyhedron *P, int sign, Polyhedron *C, 
			     barvinok_options *options)
{
    if (!sign)
	EP = barvinok_enumerate_with_options(P, C, options);
    else {
	evalue *E2;
	E2 = barvinok_enumerate_with_options(P, C, options);
	if (sign < 0)
	    emul(&mone, E2);
	eadd(E2, EP);
	evalue_free(E2);
    }
}

evalue *barvinok_enumerate_scarf(Polyhedron *P,
			  unsigned exist, unsigned nparam, barvinok_options *options)
{
    scarf_collector_ev scev;
    scarf(P, exist, nparam, options, scev);
    return scev.EP;
}
