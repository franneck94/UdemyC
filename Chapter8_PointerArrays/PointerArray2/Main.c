#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int *createArray(unsigned int length, int value)
{
    int *array;
    array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

int main()
{
    unsigned int length = getNumberFromUser();

    int *array = createArray(length, 0);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}
