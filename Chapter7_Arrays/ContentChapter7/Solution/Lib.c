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

int minArray(int array[], unsigned int length)
{
    int min;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            min = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int maxArray(int array[], unsigned int length)
{
    int max;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max = array[i];
        }

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
