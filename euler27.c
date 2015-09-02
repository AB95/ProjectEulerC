//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include "primecheck.h"

int find_max_chain(int a, int  b)
{
    int n = 0;
    int num = n*n + a*n + b;
    if (num < 0)
    {
        num -= 2*num;
    }
    while (is_prime(num))
    {
        n++;
        num = n*n + a*n + b;
        if (num < 0)
        {
            num -= 2*num;
        }
    }
    return n;
}

int main()
{
    int largest = 0;
    int num = 0;
    int len = 0;
    for (int a = -999; a < 1000; a++)
    {
        for (int b = -999; b < 1000; b++)
        {
            len = find_max_chain(a, b);
            if (len > largest)
            {
                largest = len;
                num = a*b;
            }
        }
    }
    printf("%d\n", num);
}