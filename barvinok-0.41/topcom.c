#include <assert.h>
#include <barvinok/util.h>
#include <barvinok/options.h>
#include <unistd.h>
#include "normalization.h"
#include "topcom.h"
#include "config.h"

#define ALLOC(type) (type*)malloc(sizeof(type))

void run_points2triangs(pid_t *child, int *in, int *out)
{
    int in_fd[2], out_fd[2];

    if (pipe(in_fd))
	assert(0);
    if (pipe(out_fd))
	assert(0);
    *child = fork();
    assert(*child >= 0);
    if (!*child) {
	int rc;

	dup2(in_fd[0], 0);
	dup2(out_fd[1], 1);
	close(in_fd[0]);
	close(out_fd[1]);
	close(in_fd[1]);
	close(out_fd[0]);

	rc = execl(POINTS2TRIANGS_PATH, "points2triangs", "--regular", NULL);
	assert(0);
    }
    close(in_fd[0]);
    close(out_fd[1]);
    *in = in_fd[1];
    *out = out_fd[0];
}

struct domain {
    Param_Domain    domain;
    int		    F_len;
};

static Param_Vertices *construct_vertex(unsigned *vertex_facets,
				       Matrix *Constraints,
				       int d, unsigned nparam, unsigned MaxRays)
{
    unsigned nvar = Constraints->NbColumns-2 - nparam;
    Matrix *A = Matrix_Alloc(nvar+1, nvar+1);
    Matrix *inv = Matrix_Alloc(nvar+1, nvar+1);
    Matrix *B = Matrix_Alloc(nvar, nparam+2);
    Matrix *V = Matrix_Alloc(nvar, nparam+2);
    Matrix *Domain = Matrix_Alloc(d-nvar, nparam+2);
    Polyhedron *AD;
    unsigned bx;
    int i, j, ix;
    int ok;
    Param_Vertices *vertex;

    for (j = 0, i = 0, ix = 0, bx = MSB; i < d; ++i) {
	if ((vertex_facets[ix] & bx) == bx) {
	    Vector_Copy(Constraints->p[i]+1, A->p[j], nvar);
	    Vector_Oppose(Constraints->p[i]+1+nvar, B->p[j++], nparam+1);
	}
	NEXT(ix, bx);
    }
    assert(j == nvar);
    value_set_si(A->p[nvar][nvar], 1);
    ok = Matrix_Inverse(A, inv);
    assert(ok);
    Matrix_Free(A);
    inv->NbRows = nvar;
    inv->NbColumns = nvar;
    Matrix_Product(inv, B, V);
    Matrix_Free(B);
    for (i = 0; i < nvar; ++i) {
	value_assign(V->p[i][nparam+1], inv->p[nvar][nvar]);
	Vector_Normalize(V->p[i], V->NbColumns);
    }
    Matrix_Free(inv);
    for (j = 0, i = 0, ix = 0, bx = MSB; i < d; ++i) {
	if ((vertex_facets[ix] & bx) == bx) {
	    NEXT(ix, bx);
	    continue;
	}
	Param_Inner_Product(Constraints->p[i], V, Domain->p[j]);
	if (First_Non_Zero(Domain->p[j]+1, nparam+1) == -1)
	    vertex_facets[ix] |= bx;
	else
	    value_set_si(Domain->p[j++][0], 1);
	NEXT(ix, bx);
    }
    Domain->NbRows = j;
    A = Matrix_Copy(Domain);
    AD = Constraints2Polyhedron(A, MaxRays);
    Matrix_Free(A);
    POL_ENSURE_VERTICES(AD);
    /* A vertex with a lower-dimensional activity domain
     * saturates more facets than derived above and is actually
     * the superimposition of two or more vertices.
     * We therefore discard the domain and (ultimately)
     * the chamber containing it.
     * We keep the vertex, though, since it may reappear
     * in other chambers, which will then likewise be discarded.
     * The same holds if the activity domain is empty.
     */
    if (AD->NbEq > 0) {
	Matrix_Free(Domain);
	Domain = NULL;
    }
    Polyhedron_Free(AD);
    vertex = calloc(1, sizeof(Param_Vertices));
    vertex->Facets = vertex_facets;
    vertex->Vertex = V;
    vertex->Domain = Domain;
    return vertex;
}

static int add_vertex_to_domain(Param_Vertices **vertices, int words,
				unsigned *vertex_facets,
				Matrix *Constraints, int d, unsigned nparam,
				struct domain *domain,
				unsigned MaxRays)
{
    Param_Vertices *vertex;
    unsigned vbx;
    int vi, vix;

    for (vi = 0, vix = 0, vbx = MSB;
	    *vertices;
	    vertices = &(*vertices)->next, ++vi) {
	int i;
	for (i = 0; i < words; ++i)
	    if (((*vertices)->Facets[i] & vertex_facets[i]) != vertex_facets[i])
		break;
	if (i >= words) {
	    if (!(*vertices)->Domain)
		domain->F_len = 0;
	    else
		domain->domain.F[vix] |= vbx;
	    free(vertex_facets);
	    return 0;
	}
	NEXT(vix, vbx);
    }
    if (domain->F_len <= vix) {
	domain->F_len++;
	domain->domain.F = realloc(domain->domain.F,
				   domain->F_len * sizeof(unsigned));
	domain->domain.F[domain->F_len-1] = 0;
    }
    vertex = construct_vertex(vertex_facets, Constraints, d, nparam, MaxRays);
    if (!vertex->Domain)
	domain->F_len = 0;
    else
	domain->domain.F[vix] |= vbx;
    vertex->next = *vertices;
    *vertices = vertex;
    return 1;
}

static void compute_domain(struct domain *domain, Param_Vertices *vertices,
			   Polyhedron *C, unsigned MaxRays)
{
    unsigned bx;
    int ix, j;
    int nbV = bit_vector_count(domain->domain.F, domain->F_len);
    unsigned cols;
    unsigned rows;
    Matrix *Constraints;

    for (ix = 0, bx = MSB; !vertices->Domain; vertices = vertices->next)
	NEXT(ix, bx);

    cols = vertices->Domain->NbColumns;
    rows = vertices->Domain->NbRows;
    Constraints = Matrix_Alloc(nbV * rows + C->NbConstraints, cols);

    for (j = 0; vertices; vertices = vertices->next) {
	if ((domain->domain.F[ix] & bx) == bx)
	    Vector_Copy(vertices->Domain->p[0],
			Constraints->p[(j++)*rows], rows * cols);
	NEXT(ix, bx);
    }
    Vector_Copy(C->Constraint[0], Constraints->p[j*rows], C->NbConstraints * cols);
    domain->domain.Domain = Constraints2Polyhedron(Constraints, MaxRays);
    Matrix_Free(Constraints);
}

static void add_domain(struct domain **domains, struct domain *domain,
		       Param_Vertices *vertices, Polyhedron *C,
		       struct barvinok_options *options)
{
    options->stats->topcom_chambers++;

    for (; *domains; domains = (struct domain **)&(*domains)->domain.next) {
	int i;
	for (i = 0; i < (*domains)->F_len; ++i)
	    if (((*domains)->domain.F[i] & domain->domain.F[i])
			!= domain->domain.F[i])
		break;
	if (i < (*domains)->F_len)
	    continue;
	for (; i < domain->F_len; ++i)
	    if (domain->domain.F[i])
		break;
	if (i >= domain->F_len) {
	    Param_Domain_Free(&domain->domain);
	    return;
	}
    }
    options->stats->topcom_distinct_chambers++;
    compute_domain(domain, vertices, C, options->MaxRays);
    *domains = domain;
}

#define INT_BITS (sizeof(unsigned) * 8)

/* Remove any empty or lower-dimensional chamber.  The latter
 * lie on the boundary of the context and are facets of other chambers.
 *
 * While we are examining each chamber, also extend the F vector
 * of each chamber to the maximum.
 */
static void remove_empty_chambers(Param_Domain **PD, unsigned vertex_words)
{
    while (*PD) {
	int remove = 0;
	int i;

	if ((*PD)->Domain->NbEq > 0)
	    remove = 1;
	else {
	    POL_ENSURE_FACETS((*PD)->Domain);
	    if ((*PD)->Domain->NbEq > 0)
		remove = 1;
	}
	if (remove) {
	    Param_Domain *D = *PD;
	    *PD = (*PD)->next;
	    D->next = NULL;
	    Param_Domain_Free(D);
	    continue;
	}
	if ((i = ((struct domain*)(*PD))->F_len) < vertex_words)
	    (*PD)->F = realloc((*PD)->F, vertex_words * sizeof(unsigned));
	for (; i < vertex_words; ++i)
	    (*PD)->F[i] = 0;
	PD = &(*PD)->next;
    }
}

static Param_Polyhedron *points2triangs(Matrix *K, Polyhedron *P, Polyhedron *C,
					struct barvinok_options *options)
{
    int in, out;
    int i, j;
    pid_t child;
    FILE *fin, *fout;
    int d = K->NbRows;
    int words = (d+INT_BITS-1)/INT_BITS;
    Param_Vertices *vertices = NULL;
    struct domain *domains = NULL;
    int vertex_words = 1;
    Param_Polyhedron *PP = ALLOC(Param_Polyhedron);
    unsigned MaxRays = options->MaxRays;

    PP->Rays = NULL;
    PP->nbV = 0;
    PP->Constraints = Polyhedron2Constraints(P);
    /* We need the exact facets, because we may make some of them open later */
    POL_UNSET(options->MaxRays, POL_INTEGER);

    run_points2triangs(&child, &in, &out);

    fin = fdopen(in, "w");
    fprintf(fin, "[\n");
    for (i = 0; i < K->NbRows; ++i) {
	fprintf(fin, "[");
	for (j = 0; j < K->NbColumns; ++j)
	    value_print(fin, P_VALUE_FMT, K->p[i][j]);
	fprintf(fin, "]");
    }
    fprintf(fin, "]\n");
    fclose(fin);

    fout = fdopen(out, "r");
    while (fscanf(fout, "T[%d]:=", &i) == 1) {
	int a, b, c;
	struct domain *domain = ALLOC(struct domain);
	memset(domain, 0, sizeof(*domain));
	domain->domain.F = calloc(vertex_words, sizeof(unsigned));
	domain->F_len = vertex_words;

	c = fgetc(fout);
	if (c == '[')
		fscanf(fout, "%d,%d:{", &a, &b);

	while (fgetc(fout) == '{') {	/* '{' or closing '}' */
	    int c;
	    unsigned *F = calloc(words, sizeof(unsigned));

	    for (j = 0; j < K->NbColumns; ++j) {
		unsigned v, shift;
		fscanf(fout, "%d", &v);
		shift = INT_BITS - (v % INT_BITS) - 1;
		F[v / INT_BITS] |= 1u << shift;
		fgetc(fout); /* , or } */
	    }
	    if (!domain->F_len)
		free(F);
	    else if (add_vertex_to_domain(&vertices, words, F, PP->Constraints,
					  d, C->Dimension,
					  domain, options->MaxRays))
		++PP->nbV;
	    if ((c = fgetc(fout)) != ',')	/* , or } */
		ungetc(c, fout);
	}
	if (domain->F_len)
	    vertex_words = domain->F_len;
	if (c == '[')
		fgetc(fout); /* ] */
	fgetc(fout); /* ; */
	fgetc(fout); /* \n */
	if (bit_vector_count(domain->domain.F, domain->F_len) > 0)
	    add_domain(&domains, domain, vertices, C, options);
	else {
	    options->stats->topcom_empty_chambers++;
	    Param_Domain_Free(&domain->domain);
	}
    }
    fclose(fout);

    PP->V = vertices;
    PP->D = &domains->domain;

    remove_empty_chambers(&PP->D, vertex_words);

    options->MaxRays = MaxRays;

    return PP;
}

/* Assumes M is of full row rank */
static Matrix *null_space(Matrix *M)
{
    Matrix *H, *Q, *U;
    Matrix *N;
    int i;

    left_hermite(M, &H, &Q, &U);
    N = Matrix_Alloc(M->NbColumns, M->NbColumns - M->NbRows);
    for (i = 0; i < N->NbRows; ++i)
	Vector_Copy(U->p[i] + M->NbRows, N->p[i], N->NbColumns);
    Matrix_Free(H);
    Matrix_Free(Q);
    Matrix_Free(U);
    return N;
}

static void SwapColumns(Value **V, int n, int i, int j)
{
    int r;

    for (r = 0; r < n; ++r)
	value_swap(V[r][i], V[r][j]);
}

/* C is assumed to be the "true" context, i.e., it has been intersected
 * with the projection of P onto the parameter space.
 * Furthermore, P and C are assumed to be full-dimensional.
 */
Param_Polyhedron *TC_P2PP(Polyhedron *P, Polyhedron *C,
			  struct barvinok_options *options)
{
    unsigned nparam = C->Dimension;
    unsigned nvar = P->Dimension - C->Dimension;
    int i, j;
    Matrix *H;
    Matrix *A;
    Matrix *K;
    int rows;
    Param_Polyhedron *PP;
    Matrix M;

    assert(C->NbEq == 0);

    Polyhedron_Matrix_View(P, &M, P->NbConstraints);
    H = standard_constraints(&M, nparam, &rows, NULL);

    A = Matrix_Alloc(rows, nvar+rows);
    for (i = nvar; i < H->NbRows; ++i) {
	Vector_Oppose(H->p[i], A->p[i-nvar], H->NbColumns);
	value_set_si(A->p[i-nvar][i], 1);
    }
    for (i = 0, j = H->NbRows-nvar; i < nvar; ++i) {
	if (First_Non_Zero(H->p[i], i) == -1)
	    continue;
	Vector_Oppose(H->p[i], A->p[j], H->NbColumns);
	value_set_si(A->p[j][j+nvar], 1);
	SwapColumns(A->p, A->NbRows, j+nvar, i);
	++j;
    }
    K = null_space(A);
    Matrix_Free(A);
    /* Ignore extra constraints */
    K->NbRows = H->NbRows;
    Matrix_Free(H);
    PP = points2triangs(K, P, C, options);
    Matrix_Free(K);
    return PP;
}
