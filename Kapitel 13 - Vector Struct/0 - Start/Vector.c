#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

// Definiton
float meanVector(Vector* vec)
{
    float sum = 0.0f;

    for (int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / vec->length;
    return mean;
}

// Definiton
int minVector(Vector* vec)
{
    int min;

    for (int i = 0; i < vec->length; i++)
    {
        if(i == 0)
        {
            min = vec->data[i];
        }

        if (vec->data[i] < min)
        {
            min = vec->data[i];
        }
    }

    return min;
}

// Definiton
int maxVector(Vector* vec)
{
    int max;

    for (int i = 0; i < vec->length; i++)
    {
        if(i == 0)
        {
            max = vec->data[i];
        }

        if (vec->data[i] > max)
        {
            max = vec->data[i];
        }
    }

    return max;
}

// Definiton
int* createVector(unsigned int length, int value)
{
    int* vector;
    vector = (int*) malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        vector[i] = value;
    }

    return vector;
}