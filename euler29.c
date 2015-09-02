//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include <stdlib.h>
#include "gmp.h"

#define max 9801

char in_array(mpz_t *array, mpz_t num, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (mpz_cmp(array[i], num) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    mpz_t *nums = malloc(max * sizeof(mpz_t));
    int count = 0;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= 100; j++)
        {
            mpz_init(nums[count]);
            mpz_set_ui(nums[count], i);
            mpz_pow_ui(nums[count], nums[count], j);
            if (!(in_array(nums, nums[count], count)))
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
}