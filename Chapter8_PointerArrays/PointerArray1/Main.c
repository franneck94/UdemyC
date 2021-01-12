#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    int length = getNumberFromUser();
    int *array = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        array[i] = 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}