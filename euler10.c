//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int main()
{
    unsigned long long len = 2000000;
    char *nums;
    nums = malloc(len * sizeof(char));
    memset(nums, 0, sizeof(nums));
    for (unsigned long long i = 3; i < len; i+=2)
    {
        nums[i] = 1;
    }
    nums[2] = 1;

    for (unsigned long long i = 3; i*i < len; i+=2)
    {
        if (nums[i])
        {
            for (unsigned long long j = i*i; j < len; j+=i)
            {
                nums[j] = 0;
            }
        }
    }

    unsigned long long sum = 2;

    for (unsigned long long i = 3; i < len; i+=2)
    {
        if (nums[i])
        {
            sum += i;
        }
    }
    printf("%lli\n", sum);
    free(nums);
}