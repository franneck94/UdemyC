#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}
