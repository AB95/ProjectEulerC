//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int d(int n)
{
    int sum = 1;
    int i = 2;
    while (i * i < n)
    {
        if (!(n%i))
        {
            sum += i;
            sum += n/i;
        }
        i++;
    }
    if (i * i == n)
    {
        sum += i;
    }

    return sum;
}

char is_amicable(int a)
{
    if (a == d(d(a)) && a != d(a))
    {
        return 1;
    }
    return 0;
}

int main()
{
    long sum = 0;
    for (int i = 2; i < 10000; i++)
    {
        if (is_amicable(i))
        {
            sum += i;
        }
    }
    printf("%li\n", sum);

}