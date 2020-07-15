#include <gmp.h>

int mpz_divisible_p (mpz_t N, mpz_t D)
{
    int d;
    mpz_t r;
    mpz_init(r);
    mpz_fdiv_r(r, N, D);
    d = mpz_sgn(r) == 0;
    mpz_clear(r);
    return d;
}
