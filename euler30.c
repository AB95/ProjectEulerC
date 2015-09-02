//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include <math.h>

char sum_is_equal(int n, int d)
{
    int sum = 0;
    int i = n;
    while (i > 0)
    {
        sum += pow(i%10, d);
        i /= 10;
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int sum = 0;
    for (int i = 10; i < 355000; i++)
    {
        if(sum_is_equal(i, 5))
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}