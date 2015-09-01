//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int collatz(long n)
{
    int len = 1;
    while (n != 1)
    {
        if (n%2)
        {
            n = 3*n + 1;
        }
        else
        {
            n /= 2;
        }
        len++;
    }
    return len;
}

int main()
{
    int largest = 0;
    int starting = 0;
    for (int i = 1; i < 1000000; i++)
    {
        int len = collatz(i);
        if (len > largest)
        {
            largest = len;
            starting = i;
        }
    }

    printf("%d\n", starting);
}