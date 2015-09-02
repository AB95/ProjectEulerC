//
// Created by bouch on 02/09/15.
//

#include <stdio.h>

int main()
{
    int num, i2, j2;
    int top = 1, bot = 1;
    char flag = 0;
    for (int i = 10; i < 100; i++)
    {
        for (int j = 10; j < i; j++)
        {
            if (i%10 && j%10)
            {
                num = j%10;
                if (i%10 == num)
                {
                    j2 = j/10;
                    i2 /= i/10;
                    flag = 1;
                }
                else if ((i/10)%10 == num)
                {
                    j2 = j/10;
                    i2 = i%10;
                    flag = 1;
                }

                num = (j/10)%10;
                if (i%10 == num)
                {
                    j2 = j%10;
                    i2 = i/10;
                    flag = 1;
                }
                else if ((i/10)%10 == num)
                {
                    j2 = j%10;
                    i2 = i%10;
                    flag = 1;
                }

                if (flag)
                {
                    if (i2/(float)j2 == i/(float)j)
                    {
                        printf("%d/%d\n", j, i);
                        top *= j;
                        bot *= i;
                    }

                    flag = 0;
                }
            }
        }
    }

    printf("%d/%d\n%d\n", top, bot, bot/top);
}