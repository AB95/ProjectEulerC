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
    mpz_t num;
    mpz_init(num);
    fact(num, 100);

    char num_string[1000];
    mpz_get_str(num_string, 10, num);

    int sum = 0;
    int i = 0;
    while (num_string[i] != '\0')
    {
        sum += num_string[i] - '0';
        i++;
    }
    printf("%li\n", sum);
}