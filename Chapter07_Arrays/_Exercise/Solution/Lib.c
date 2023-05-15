#include <float.h>
#include <stdint.h>
#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    if (length == 0 || array == NULL)
    {
        return FLT_MAX;
    }

    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

int minArray(int *array, unsigned int length)
{
    if (length == 0 || array == NULL)
    {
        return INT32_MIN;
    }

    int current_min = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] < current_min)
        {
            current_min = array[i];
        }
    }

    return current_min;
}

int maxArray(int *array, unsigned int length)
{
    if (length == 0 || array == NULL)
    {
        return INT32_MIN;
    }

    int current_max = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] > current_max)
        {
            current_max = array[i];
        }
    }

    return current_max;
}
