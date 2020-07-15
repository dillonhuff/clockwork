#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <barvinok/util.h>
#include <barvinok/barvinok.h>

int main(int argc, char **argv)
{
    Value cb;
    Polyhedron *A;
    struct barvinok_options *options = barvinok_options_new_with_defaults();

    argc = barvinok_options_parse(options, argc, argv, ISL_ARG_ALL);

    A = Polyhedron_Read(options->MaxRays);
    value_init(cb);
    Polyhedron_Print(stdout, P_VALUE_FMT, A);
    barvinok_count_with_options(A, &cb, options);
    value_print(stdout, P_VALUE_FMT, cb);
    puts("");
    if (options->print_stats)
	barvinok_stats_print(options->stats, stdout);
    value_clear(cb);
    Polyhedron_Free(A);
    barvinok_options_free(options);
    return 0;
}
