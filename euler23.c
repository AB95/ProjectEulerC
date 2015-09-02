//
// Created by bouch on 01/09/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char is_abundant(int n)
{
    int sum = 1;
    int i;
    for (i = 2; i * i < n; i++)
    {
        if (!(n%i))
        {
            sum += i;
            sum += n/i;
        }
    }
    if (i*i == n)
    {
        sum += i;
    }

    if (sum > n)
    {
        return 1;
    }
    return 0;
}

char is_abun_sum(char *is_abun, int *abuns, int n)
{
    if (n < 12)
    {
        return 0;
    }
    for (int i = 0; abuns[i] < n; i++)
    {
        if (is_abun[n-abuns[i]])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int count = 0;
    unsigned long sum = 0;
    int *abundants = malloc(10000 * sizeof(int));
    char *is_abundant_array = malloc(28124 * sizeof(char));
    memset(is_abundant_array, 0, 28124);
    for (int i = 1; i < 28124; i++)
    {
        if (is_abundant(i))
        {
            abundants[count] = i;
            is_abundant_array[i] = 1;
            count++;
        }
        if (!is_abun_sum(is_abundant_array, abundants, i))
        {
            sum += i;
        }
    }

    printf("%li\n", sum);
}