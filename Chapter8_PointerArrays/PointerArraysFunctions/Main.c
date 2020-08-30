#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int* createArray(unsigned int length, int value)
{
    int* arr;
    arr = (int*) malloc(length * sizeof(int));

    printf("Pointer-arr: 0x%x\n", arr);

    for (int i = 0; i < length; i++)
    {
        arr[i] = value;
    }

    return arr;
}

int main()
{
    unsigned int length = 3;

    int* array = createArray(length, 1);

    printf("Pointer-Array: 0x%x\n", array);

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
        array[i] = i;
    }

    free(array);
    array = NULL;

    return 0;
}