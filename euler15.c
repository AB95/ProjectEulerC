//
// Created by bouch on 01/09/15.
//

#include <stdio.h>
#include <gmp.h>

void fact(mpz_t result, unsigned long n)
{
    mpz_set_ui(result, 1);
    for (unsigned long i = n; i > 0; i--)
    {
        mpz_mul_ui(result, result, i);
    }
}

int main()
{
    //see https://en.wikipedia.org/wiki/Permutation#Permutations_of_multisets
    int side_length = 20;
    mpz_t top;
    mpz_init(top);
    fact(top, side_length*2);

    mpz_t bot;
    mpz_init(bot);
    fact(bot, side_length);
    mpz_mul(bot, bot, bot);

    mpz_t r;
    mpz_init(r);
    mpz_div(r, top, bot);
    gmp_printf("%Zd\n", r);
}