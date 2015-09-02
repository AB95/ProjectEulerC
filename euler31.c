//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int tot = 200;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};
    int len = 8;
    long ways[tot+1];
    memset(ways, 0, 201*sizeof(long));
    ways[0] = 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = coins[i]; j < tot+1; j++)
        {
            ways[j] += ways[j - coins[i]];
        }
    }

    printf("%li\n", ways[200]);
}