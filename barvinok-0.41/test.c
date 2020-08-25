#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <isl_set_polylib.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>
#include <barvinok/sample.h>
#include "config.h"

#ifdef HAVE_SYS_TIMES_H

#include <sys/times.h>

static void time_diff(struct tms *before, struct tms *after)
{
    long ticks = sysconf(_SC_CLK_TCK);
    printf("User: %g; Sys: %g\n", 
	    (0.0 + after->tms_utime - before->tms_utime) / ticks,
	    (0.0 + after->tms_stime - before->tms_stime) / ticks);
}

#else

struct tms {};
static void times(struct tms* time)
{
}
static void time_diff(struct tms *before, struct tms *after)
{
}

#endif

int main(int argc, char **argv)
{
    isl_ctx *ctx;
    int i, nbPol, nbVec, nbMat, func, j, n;
    Polyhedron *A, *B, *C, *D;
    char s[128];
    struct barvinok_options *options = barvinok_options_new_with_defaults();

    argc = barvinok_options_parse(options, argc, argv, ISL_ARG_ALL);
    ctx = isl_ctx_alloc_with_options(&barvinok_options_args, options);

    nbPol = nbVec = nbMat = 0;
    fgets(s, 128, stdin);
    while ((*s=='#') ||
	    ((sscanf(s, "D %d", &nbPol) < 1) &&
	     (sscanf(s, "V %d", &nbVec) < 1) &&
	     (sscanf(s, "M %d", &nbMat) < 1)))
	fgets(s, 128, stdin);

    for (i = 0; i < nbPol; ++i) {
	Matrix *M = Matrix_Read();
	A = Constraints2Polyhedron(M, options->MaxRays);
	Matrix_Free(M);
	fgets(s, 128, stdin);
	while ((*s=='#') || (sscanf(s, "F %d", &func)<1))
	    fgets(s, 128, stdin);

	switch(func) {
	case 0: {
	    Value cb, ck;
	    value_init(cb);
	    value_init(ck);
	    fgets(s, 128, stdin);
	    /* workaround for apparent bug in older gmps */
	    *strchr(s, '\n') = '\0';
	    while ((*s=='#') || (value_read(ck, s) != 0)) {
		fgets(s, 128, stdin);
		/* workaround for apparent bug in older gmps */
		*strchr(s, '\n') = '\0';
	    }
	    barvinok_count_with_options(A, &cb, options);
	    if (value_ne(cb, ck))
		return -1;
	    value_clear(cb);
	    value_clear(ck);
	    break;
	}
	case 1:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    B = Polyhedron_Polar(A, options->MaxRays);
	    Polyhedron_Print(stdout, P_VALUE_FMT, B);
	    C = Polyhedron_Polar(B, options->MaxRays);
	    Polyhedron_Print(stdout, P_VALUE_FMT, C);
	    Polyhedron_Free(C);
	    Polyhedron_Free(B);
	    break;
	case 2:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    for (j = 0; j < A->NbRays; ++j) {
		B = supporting_cone(A, j);
		Polyhedron_Print(stdout, P_VALUE_FMT, B);
		Polyhedron_Free(B);
	    }
	    break;
	case 3:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    C = B = NULL;
	    barvinok_decompose(A,&B,&C);
	    puts("Pos:");
	    Polyhedron_Print(stdout, P_VALUE_FMT, B);
	    puts("Neg:");
	    Polyhedron_Print(stdout, P_VALUE_FMT, C);
	    Domain_Free(B);
	    Domain_Free(C);
	    break;
	case 4: {
	    Value cm, cb;
	    struct tms tms_before, tms_between, tms_after;
	    value_init(cm);
	    value_init(cb);
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    times(&tms_before);
	    manual_count(A, &cm);
	    times(&tms_between);
	    barvinok_count(A, &cb, 100);
	    times(&tms_after);
	    printf("manual: ");
	    value_print(stdout, P_VALUE_FMT, cm);
	    puts("");
	    time_diff(&tms_before, &tms_between);
	    printf("Barvinok: ");
	    value_print(stdout, P_VALUE_FMT, cb);
	    puts("");
	    time_diff(&tms_between, &tms_after);
	    value_clear(cm);
	    value_clear(cb);
	    break;
	}
	case 5:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    B = triangulate_cone(A, 100);
	    Polyhedron_Print(stdout, P_VALUE_FMT, B);
	    check_triangulization(A, B);
	    Domain_Free(B);
	    break;
	case 6:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    B = remove_equalities(A, options->MaxRays);
	    Polyhedron_Print(stdout, P_VALUE_FMT, B);
	    Polyhedron_Free(B);
	    break;
	case 8: {
	    evalue *EP;
	    Matrix *M = Matrix_Read();
	    const char **param_name;
	    C = Constraints2Polyhedron(M, options->MaxRays);
	    Matrix_Free(M);
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    Polyhedron_Print(stdout, P_VALUE_FMT, C);
	    EP = barvinok_enumerate_with_options(A, C, options);
	    param_name = Read_ParamNames(stdin, C->Dimension);
	    print_evalue(stdout, EP, (const char**)param_name);
	    evalue_free(EP);
	    Polyhedron_Free(C);
	}
	case 9:
	    Polyhedron_Print(stdout, P_VALUE_FMT, A);
	    Polyhedron_Polarize(A);
	    C = B = NULL;
	    barvinok_decompose(A,&B,&C);
	    for (D = B; D; D = D->next)
		Polyhedron_Polarize(D);
	    for (D = C; D; D = D->next)
		Polyhedron_Polarize(D);
	    puts("Pos:");
	    Polyhedron_Print(stdout, P_VALUE_FMT, B);
	    puts("Neg:");
	    Polyhedron_Print(stdout, P_VALUE_FMT, C);
	    Domain_Free(B);
	    Domain_Free(C);
	    break;
	case 10: {
	    evalue *EP;
	    Value cb, ck;

	    value_init(cb);
	    value_init(ck);
	    fgets(s, 128, stdin);
	    sscanf(s, "%d", &n);
	    for (j = 0; j < n; ++j) {
		Polyhedron *P;
		M = Matrix_Read();
		P = Constraints2Polyhedron(M, options->MaxRays);
		Matrix_Free(M);
		A = DomainConcat(P, A);
	    }
	    fgets(s, 128, stdin);
	    /* workaround for apparent bug in older gmps */
	    *strchr(s, '\n') = '\0';
	    while ((*s=='#') || (value_read(ck, s) != 0)) {
		fgets(s, 128, stdin);
		/* workaround for apparent bug in older gmps */
		*strchr(s, '\n') = '\0';
	    }
	    C = Universe_Polyhedron(0);
	    EP = barvinok_enumerate_union(A, C, options->MaxRays);
	    value_set_double(cb, compute_evalue(EP, &ck)+.25);
	    if (value_ne(cb, ck))
		return -1;
	    Domain_Free(C);
	    value_clear(cb);
	    value_clear(ck);
	    evalue_free(EP);
	    break;
	}
	case 12: {
	    Vector *sample;
	    int has_sample;
	    fgets(s, 128, stdin);
	    sscanf(s, "%d", &has_sample);

	    sample = Polyhedron_Sample(A, options);
	    if (!sample && has_sample)
		return -1;
	    if (sample && !has_sample)
		return -1;
	    if (sample && !in_domain(A, sample->p))
		return -1;
	    Vector_Free(sample);
	}
	}
	Domain_Free(A);
    }
    for (i = 0; i < nbVec; ++i) {
	int ok;
	Vector *V = Vector_Read();
	Matrix *M = Matrix_Alloc(V->Size, V->Size);
	Vector_Copy(V->p, M->p[0], V->Size);
	ok = unimodular_complete(M, 1);
	assert(ok);
	Matrix_Print(stdout, P_VALUE_FMT, M);
	Matrix_Free(M);
	Vector_Free(V);
    }
    for (i = 0; i < nbMat; ++i) {
	Matrix *U, *V, *S;
	Matrix *M = Matrix_Read();
	Smith(M, &U, &V, &S);
	Matrix_Print(stdout, P_VALUE_FMT, U);
	Matrix_Print(stdout, P_VALUE_FMT, V);
	Matrix_Print(stdout, P_VALUE_FMT, S);
	Matrix_Free(M);
	Matrix_Free(U);
	Matrix_Free(V);
	Matrix_Free(S);
    }

    isl_ctx_free(ctx);
    return 0;
}
