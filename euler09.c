//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int main()
{
    for (int c = 334; c < 997; c++)
    {
        for (int b = 2; b < c; b++)
        {
            for (int a = 1; a < b; a++)
            {
                if ((a+b+c == 1000) && (a*a + b*b == c*c))
                {
                    printf("%d*%d*%d=%d", a, b, c, a*b*c);
                    return 0;
                }
            }
        }
    }
}