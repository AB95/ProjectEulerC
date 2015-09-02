//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include "primecheck.h"

int next_prime(int n)
{
    int i = n + 1;
    while (!is_prime(i))
    {
        i++;
    }
    return i;
}

int length_of_cycle(int d)
{
    int count = 1;
    int i = 10 % d;
    while (i > 1)
    {
        i = (10*i) % d;
        count++;
    }

    return count;
}

int main()
{
    int d = 1;
    int largest = 0;
    int num = 0;
    int len;
    while (d < 1000)
    {
        d = next_prime(d);
        len = length_of_cycle(d);
        if (len > largest)
        {
            largest = len;
            num = d;
        }
    }
    printf("%d: %d\n", num, largest);
}