//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include <math.h>
#include "primecheck.h"

int len(int n)
{
    int len = 0;
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return len;
}

void circle(int *ptr)
{
    int num = *ptr;
    int length = len(num);
    int rem = num % 10;
    num /= 10;
    num += rem * pow(10, length-1);
    *ptr = num;
}

int main()
{
    int count = 1;
    int internum;
    char flag;
    for (int num = 3; num < 1000000; num+=2)
    {
        if (is_prime(num))
        {
            flag = 1;
            internum = num;
            for (int i = 0; i <= len(internum); i++)
            {
                if (!is_prime(internum))
                {
                    flag = 0;
                    break;
                }
                circle(&internum);
            }
            if (flag == 1)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}