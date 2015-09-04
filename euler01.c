//
// Created by bouch on 30/08/15.
//

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if ((i % 15 == 0) || (i % 5 == 0) || (i % 3 == 0))
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
}