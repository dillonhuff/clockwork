#include <assert.h>
#include <unistd.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>
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

struct tms { int dummy; };
static void times(struct tms* time)
{
}
static void time_diff(struct tms *before, struct tms *after)
{
}

#endif

int main()
{
    static const int size = 1000;
    static const int loop = 10;
    int i, d, r, c;
    Matrix *M;
    Polyhedron *P;
    Value cm, cb;
    struct tms tms_before, tms_between, tms_after;
    value_init(cm);
    value_init(cb);

    for (d = 2; d < 10; ++d) {
	M = Matrix_Alloc(2*d, 2+d);
	for (r = 0; r < 2*d; ++r)
	    value_set_si(M->p[r][0], 1);
	for (i = 0; i < loop; ++i) {
	    for (r = 0; r < 2*d; ++r) {
		for (c = 1; c < 1+d; ++c) {
		    value_set_si(M->p[r][c], random_int(size));
		}
		value_set_si(M->p[r][d+1], random_int(2)+1);
	    }
	    P = Rays2Polyhedron(M, 2*d);
	    Polyhedron_Print(stdout, P_VALUE_FMT, P);
	    times(&tms_before);
	    manual_count(P, &cm);
	    times(&tms_between);
	    barvinok_count(P, &cb, 100);
	    times(&tms_after);
	    printf("manual: ");
	    value_print(stdout, P_VALUE_FMT, cm);
	    puts("");
	    time_diff(&tms_before, &tms_between);
	    printf("Barvinok: ");
	    value_print(stdout, P_VALUE_FMT, cb);
	    puts("");
	    time_diff(&tms_between, &tms_after);
	    assert(value_eq(cm, cb));
	}
	Matrix_Free(M);
    }
    value_clear(cm);
    value_clear(cb);
    return 0;
}
