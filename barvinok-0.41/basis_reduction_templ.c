#include <stdlib.h>
#include <barvinok/basis_reduction.h>
#include <barvinok/options.h>

#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

static void save_alpha(GBR_LP *lp, int first, int n, GBR_type *alpha)
{
    int i;

    for (i = 0; i < n; ++i)
	GBR_lp_get_alpha(lp, first+i, &alpha[i]);
}

/* This function implements the algorithm described in
 * "An Implementation of the Generalized Basis Reduction Algorithm
 *  for Integer Programming" of Cook el al. to compute a reduced basis.
 * We use \epsilon = 1/4.
 *
 * If options->gbr_only_first is set, the user is only interested
 * in the first direction.  In this case we stop the basis reduction when
 *	- the width in the first direction becomes smaller than 2
 * or
 *	- we have moved forward all the way to the last direction
 *	  and then back again all the way to the first direction.
 */
Matrix *Polyhedron_Reduced_Basis(Polyhedron *P,
				 struct barvinok_options *options)
{
    int dim = P->Dimension;
    int i;
    Matrix *basis = Identity(dim);
    GBR_LP *lp;
    GBR_type F_old, alpha, F_new;
    int row;
    Value one, tmp;
    Vector *b_tmp;
    GBR_type *F;
    GBR_type *alpha_buffer[2];
    GBR_type *alpha_saved;
    GBR_type F_saved;
    int use_saved = 0;
    Value mu[2];
    GBR_type mu_F[2];
    GBR_type two;

    if (P->Dimension == 1)
	return basis;

    value_init(one);
    value_init(tmp);
    value_set_si(one, 1);
    value_init(mu[0]);
    value_init(mu[1]);

    b_tmp = Vector_Alloc(dim);

    F = ALLOCN(GBR_type, dim);
    alpha_buffer[0] = ALLOCN(GBR_type, dim);
    alpha_buffer[1] = ALLOCN(GBR_type, dim);
    alpha_saved = alpha_buffer[0];

    for (i = 0; i < dim; ++i) {
	GBR_init(F[i]);
	GBR_init(alpha_buffer[0][i]);
	GBR_init(alpha_buffer[1][i]);
    }
    GBR_init(alpha);
    GBR_init(F_old);
    GBR_init(F_new);
    GBR_init(F_saved);
    GBR_init(mu_F[0]);
    GBR_init(mu_F[1]);
    GBR_init(two);

    GBR_set_ui(two, 2);

    lp = GBR_lp_init(P);

    i = 0;

    GBR_lp_set_obj(lp, basis->p[0], dim);
    options->stats->gbr_solved_lps++;
    if (GBR_lp_solve(lp))
	goto unbounded;
    GBR_lp_get_obj_val(lp, &F[0]);

    do {
	if (use_saved) {
	    row = GBR_lp_next_row(lp);
	    GBR_set(F_new, F_saved);
	    GBR_set(alpha, alpha_saved[i]);
	} else {
	    row = GBR_lp_add_row(lp, basis->p[i], dim);
	    GBR_lp_set_obj(lp, basis->p[i+1], dim);
	    options->stats->gbr_solved_lps++;
	    if (GBR_lp_solve(lp))
		goto unbounded;
	    GBR_lp_get_obj_val(lp, &F_new);

	    GBR_lp_get_alpha(lp, row, &alpha);

	    if (i > 0)
		save_alpha(lp, row-i, i, alpha_saved);

	    GBR_lp_del_row(lp);
	}
	GBR_set(F[i+1], F_new);

	GBR_floor(mu[0], alpha);
	GBR_ceil(mu[1], alpha);

	if (value_eq(mu[0], mu[1]))
	    value_assign(tmp, mu[0]);
	else {
	    int j;

	    for (j = 0; j <= 1; ++j) {
		value_assign(tmp, mu[j]);
		Vector_Combine(basis->p[i+1], basis->p[i], b_tmp->p, one, tmp, dim);
		GBR_lp_set_obj(lp, b_tmp->p, dim);
		options->stats->gbr_solved_lps++;
		if (GBR_lp_solve(lp))
		    goto unbounded;
		GBR_lp_get_obj_val(lp, &mu_F[j]);
		if (i > 0)
		    save_alpha(lp, row-i, i, alpha_buffer[j]);
	    }

	    if (GBR_lt(mu_F[0], mu_F[1]))
		j = 0;
	    else
		j = 1;

	    value_assign(tmp, mu[j]);
	    GBR_set(F_new, mu_F[j]);
	    alpha_saved = alpha_buffer[j];
	}
	Vector_Combine(basis->p[i+1], basis->p[i], basis->p[i+1], one, tmp, dim);

	GBR_set(F_old, F[i]);

	use_saved = 0;
	/* mu_F[0] = 4 * F_new; mu_F[1] = 3 * F_old */
	GBR_set_ui(mu_F[0], 4);
	GBR_mul(mu_F[0], mu_F[0], F_new);
	GBR_set_ui(mu_F[1], 3);
	GBR_mul(mu_F[1], mu_F[1], F_old);
	if (GBR_lt(mu_F[0], mu_F[1])) {
	    Vector_Exchange(basis->p[i], basis->p[i+1], dim);
	    if (i > 0) {
		use_saved = 1;
		GBR_set(F_saved, F_new);
		GBR_lp_del_row(lp);
		--i;
	    } else {
		GBR_set(F[0], F_new);
		if (options->gbr_only_first && GBR_lt(F[0], two))
		    break;
	    }
	} else {
	    GBR_lp_add_row(lp, basis->p[i], dim);
	    ++i;
	}
    } while (i < dim-1);

    if (0) {
unbounded:
	Matrix_Free(basis);
	basis = NULL;
    }
    Vector_Free(b_tmp);

    value_clear(one);
    value_clear(tmp);
    value_clear(mu[0]);
    value_clear(mu[1]);
    for (i = 0; i < dim; ++i) {
	GBR_clear(F[i]);
	GBR_clear(alpha_buffer[0][i]);
	GBR_clear(alpha_buffer[1][i]);
    }
    free(F);
    free(alpha_buffer[0]);
    free(alpha_buffer[1]);
    GBR_clear(alpha);
    GBR_clear(F_old);
    GBR_clear(F_new);
    GBR_clear(F_saved);
    GBR_clear(mu_F[0]);
    GBR_clear(mu_F[1]);
    GBR_clear(two);

    GBR_lp_delete(lp);

    return basis;
}
