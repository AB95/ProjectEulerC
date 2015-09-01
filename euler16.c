//
// Created by bouch on 01/09/15.
//

#include "stdio.h"
#include "gmp.h"

int main()
{
    char result[1000];
    
    mpz_t num;
    mpz_init(num);
    mpz_set_ui(num, 2);
    mpz_pow_ui(num, num, 1000);

    mpz_get_str(result, 10, num);

    int i = 0;
    unsigned long long sum = 0;
    while (1)
    {
        if (result[i] == '\0')
        {
            break;
        }
        else
        {
            sum += result[i] - '0';
        }
        i++;
    }
    printf("%lli\n", sum);
}