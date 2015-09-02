//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include "gmp.h"

int main()
{
    int count = 1;

    mpz_t a;
    mpz_init(a);
    mpz_set_ui(a, 0);

    mpz_t b;
    mpz_init(b);
    mpz_set_ui(b, 1);

    mpz_t temp;
    mpz_init(temp);
    while (mpz_sizeinbase(b, 10) < 1000)
    {
        mpz_set(temp, b);
        mpz_add(b, a, b);
        mpz_set(a, temp);
        count++;
    }

    mpz_set(temp, b);
    mpz_add(b, a, b);
    mpz_set(a, temp);
    count++;

    gmp_printf("%d: %Zd\n", count, b);
}