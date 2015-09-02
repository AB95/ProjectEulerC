//
// Created by bouch on 02/09/15.
//

#include <stdio.h>

char are_pan(int num1, int num2, int num3)
{
    char digits[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums[3] = {num1, num2, num3};
    for (int i = 0; i < 3; i++)
    {
        while (nums[i] > 0)
        {
            if (digits[nums[i]%10 - 1])
            {
                return 0;
            }
            else
            {
                digits[(nums[i]%10) - 1] = 1;
            }
            nums[i]/=10;
        }
    }
    return 1;
}

int get_len(int num)
{
    int len = 0;
    while (num > 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

char is_in(int *array, int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int top = 10000;
    int nums[50];
    int count = 0;
    for (int i = 1; i < top; i++)
    {
        for (int j = top; j > i; j--)
        {
            if (get_len(i) + get_len(j) + get_len(i*j) == 9 && are_pan(i, j, i*j))
            {
                if (!(is_in(nums, count, i*j)))
                {
                    nums[count] = i*j;
                    count++;
                }
            }
        }
    }
    long sum = 0;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", nums[i]);
        sum += nums[i];
    }
    printf("\n%li\n", sum);
}