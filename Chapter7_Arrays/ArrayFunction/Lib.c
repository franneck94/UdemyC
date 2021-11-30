#include <stdio.h>

#include "Lib.h"

float meanArray(int array[], unsigned int length)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    float mean = sum / length;
    return mean;
}
