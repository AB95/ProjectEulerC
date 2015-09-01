//
// Created by bouch on 31/08/15.
//

#include <stdio.h>

int main()
{
    unsigned long sum_of_squares = 0;
    unsigned long square_of_sum = 0;
    for (long i = 1; i <= 100; i++)
    {
        sum_of_squares += i*i;
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum;
    printf("%li\n", square_of_sum - sum_of_squares);
}