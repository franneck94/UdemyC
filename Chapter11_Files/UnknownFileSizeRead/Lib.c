#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Lib.h"

int *createArray(unsigned int length, int value)
{
    int *data = (int *)malloc(length * sizeof(int));

    if (data == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = value;
    }

    return data;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

float meanVector(Vector *vector)
{
    if (vector == NULL || vector->data == NULL)
    {
        return 0.0f;
    }

    int sum = 0;

    for (unsigned int i = 0; i < vector->length; i++)
    {
        sum += vector->data[i];
    }

    return (float)(sum) / (float)(vector->length);
}

int minVector(Vector *vector)
{
    if (vector == NULL || vector->data == NULL)
    {
        return 0.0f;
    }

    if (vector->length == 0)
    {
        return INT32_MIN;
    }

    int current_min = vector->data[0];

    for (unsigned int i = 1; i < vector->length; i++)
    {
        if (vector->data[i] < current_min)
        {
            current_min = vector->data[i];
        }
    }

    return current_min;
}

int maxVector(Vector *vector)
{
    if (vector == NULL || vector->data == NULL)
    {
        return 0.0f;
    }

    if (vector->length == 0)
    {
        return INT32_MIN;
    }

    int current_max = vector->data[0];

    for (unsigned int i = 1; i < vector->length; i++)
    {
        if (vector->data[i] > current_max)
        {
            current_max = vector->data[i];
        }
    }

    return current_max;
}

void printVector(Vector *vector)
{
    if (vector->data == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < vector->length; i++)
    {
        printf("%d\n", vector->data[i]);
    }
}
