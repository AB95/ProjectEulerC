//
// Created by bouch on 30/08/15.
//

#include <stdio.h>

char is_palin(int num)
{
    int len = 1;
    int i = 10;
    while (num%i != num)
    {
        i *= 10;
        len += 1;
    }
    char string[len+1];
    sprintf(string, "%d", num);
    for (int i = 0; i < len/2; i++)
    {
        if (string[i] != string[(len-1)-i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long largest = 0;
    for (int i = 999; i > 0; i--)
    {
        for (int j = 999; j > 0; j--)
        {
            if (is_palin(i * j) && (i * j) > largest)
            {
                largest = i * j;
            }
        }
    }

    printf("%li", largest);
}