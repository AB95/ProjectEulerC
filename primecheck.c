//
// Created by bouch on 01/09/15.
//

#include "primecheck.h"

char is_prime(unsigned long x)
{
    if (x <= 1) {return 0;}
    if (x <= 3) {return 1;}
    if (!(x%2) || !(x%3)) {return 0;}

    unsigned long i = 5;
    int d = 2;
    while (i*i <= x)
    {
        if(!(x%i))
        {
            return 0;
        }
        i += d;
        d = 6 - d;
    }
    return 1;
}