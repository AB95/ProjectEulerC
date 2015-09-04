//
// Created by bouch on 31/08/15.
//

#include <stdio.h>

char is_div(long num)
{
    for (int i = 18; i > 0; i--)
    {
        if (num%i != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char flag = 0;
    long num = 380;
    while (flag == 0)
    {
        if (!is_div(num))
        {
//            printf("%li\n", num);
            num += 380;
        }
        else
        {
            flag = 1;
        }
    }
    printf("%li\n", num);
}