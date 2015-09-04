//
// Created by bouch on 31/08/15.
//

#include <stdio.h>
#include "primecheck.h"

int main()
{
    long num = 10001;
    long number_of_primes = 1;
    unsigned long i = 1;
    if (num == 0) {return 0;}
    if (num == 1) {printf("%d\n", 2); return 0;}
    while (number_of_primes < num)
    {
        i += 2;
        if (is_prime(i))
        {
            number_of_primes += 1;
        }
    }
    printf("%li\n", i);
}