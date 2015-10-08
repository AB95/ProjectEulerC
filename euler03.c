//
// Created by bouch on 30/08/15.
//

#include <stdio.h>
#include "primecheck.h"

int main()
{
    unsigned long long num = 600851475143;
//    unsigned long long num = 90;
    unsigned long long i = 2;
    unsigned long long largest = 0;

    while (num%2 == 0)
    {
        num /= 2;
    }

    i++;

    while (num > 1 && i < (num+1)/2)
    {
        if (is_prime(i) && (num%i == 0))
        {
            num /= i;
            largest = i;
        }
        else
        {
            i += 2;
        }
    }

    if (num > largest)
    {
        largest = num;
    }

    printf("%lli\n", largest);
}
