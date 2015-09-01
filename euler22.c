//
// Created by bouch on 01/09/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len 5163

void bubble_sort(char **ptr)
{
    for (int i = 0; i < len; i++)
    {
        while (i != 0 && strcmp(ptr[i], ptr[i-1]) < 0)
        {
            void *temp = ptr[i];
            ptr[i] = ptr[i-1];
            ptr[i-1] = temp;
            i--;
        }
    }
}

int main()
{
    // create array of strings
    char **names;
    names = malloc(len*sizeof(char *));
    for (int i = 0; i < len; i++)
    {
        names[i] = malloc(20 * sizeof(char));
    }

    // scans for names and fills array
    // "\"%[A-Z]s" skips " and takes a string containing characters A-Z
    int i = 0;
    FILE *file = fopen("names.txt", "r");
    while (fscanf(file, "\"%[A-Z]s", names[i++]) != EOF)
    {
        fseek(file, 2L, SEEK_CUR);
    }
    fclose(file);

    //5163 names in files

    printf("%s, %s: %d\n", names[0], names[1], strcmp(names[0], names[1]));

    bubble_sort(names);

    // find and add scores
    unsigned long sum = 0;
    int inner_sum = 0;
    for (int j = 0; j < len; j++)
    {
        for (int k = 0; k < strlen(names[j]); k++)
        {
            inner_sum += names[j][k] - 'A' + 1;
        }
        sum += inner_sum * (j+1);
        inner_sum = 0;
    }

    printf("%li\n", sum);
}