//
// Created by bouch on 30/08/15.
//

#include <stdio.h>

int main()
{
    long a = 0;
    long b = 1;
    long sum = 0;
    while (b <= 4000000)
    {
        int temp = b;
        b = a + b;
        a = temp;
        if (b % 2 == 0)
        {
            sum += b;
        }
    }
    printf("%d\n", sum);
}