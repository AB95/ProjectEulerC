//
// Created by bouch on 02/09/15.
//

#include <stdio.h>

int main()
{
    int sum = 1;
    int count = 1;
    int side = 1001;
    for(int i = 2; i < side; i+=2)
    {
        for(int j = 0; j < 4; j++)
        {
            count += i;
            sum += count;
        }
    }
    printf("%d\n", sum);
}