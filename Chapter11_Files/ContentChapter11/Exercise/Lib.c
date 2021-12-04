#include <stdio.h>
#include <stdlib.h>

#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

float meanVector(Vector *vec)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / vec->length;
    return mean;
}

int minVector(Vector *vec)
{
    int min;

    for (unsigned int i = 0; i < vec->length; i++)
    {
        if (i == 0)
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

int maxVector(Vector *vec)
{
    int max;

    for (unsigned int i = 0; i < vec->length; i++)
    {
        if (i == 0)
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

int *createArray(unsigned int length, int value)
{
    int *p_data;
    p_data = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        p_data[i] = value;
    }

    return p_data;
}

void printVector(Vector *vec)
{
    for (unsigned int i = 0; i < vec->length; i++)
    {
        printf("%d\n", vec->data[i]);
    }
}

int *freeArray(Vector *vec)
{
    free(vec->data);
    vec->data = NULL;
}
