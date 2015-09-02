//
// Created by bouch on 02/09/15.
//

#include <stdio.h>

int fact(int n)
{
    int sum = 1;
    while (n > 0)
    {
        sum *= n;
        n--;
    }
    return sum;
}

int fact_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += fact(n%10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int sum = 0;
    for(int i = 3; i < 1000000; i++)
    {
        if (i == fact_digits(i))
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}