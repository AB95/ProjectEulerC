//
// Created by bouch on 02/09/15.
//

#include <stdio.h>
#include <string.h>

void permute(char *array)
{
    int i = strlen(array) - 1;
    while (i > 0 && array[i-1] >= array[i])
    {
        i--;
    }

    if (i <= 0)
    {
        return;
    }

    int j = strlen(array) - 1;
    while (array[j] <= array[i - 1])
    {
        j--;
    }

    int temp = array[i-1];
    array[i-1] = array[j];
    array[j] = temp;

    j = strlen(array) - 1;
    while (i < j)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    char nums[] = "0123456789";
    int num_of_permuts = 1000000;
    for (int i = 0; i < num_of_permuts - 1; i++)
    {
        permute(nums);
    }
    printf("%s\n", nums);
}