#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    unsigned int length = getNumberFromUser();

    int* array;

    // malloc: memory allocation
    array = (int*)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        array[i] = i;
        printf("Index: %d\n", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}