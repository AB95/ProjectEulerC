//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int find_divisors(long n)
{
    long i = 1;
    int number_of_divisors = 0;
    while (i*i < n)
    {
        if (!(n%i))
        {
            number_of_divisors += 2;
        }
        i++;
    }
    if (i*i == n)
    {
        number_of_divisors++;
    }
    return number_of_divisors;
}

int main()
{
    long tri_num = 1, i = 1;
    while (1)
    {
        if (find_divisors(tri_num) > 500)
        {
            printf("%li\n", tri_num);
            return 0;
        }
        else
        {
            i++;
            tri_num += i;
        }
    }
}
