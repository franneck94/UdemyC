#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Vector; // { }

// typedef

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


float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

int minArray(int *array, unsigned int length)
{
    if (length == 0)
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
    if (length == 0)
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

void printArray(int *array, unsigned int length)
{
    if (array == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    // Vector v1 = {.data = createArray(3, 1), .length = 3};
    // v1.data[1] = 2;

    // printVector(&v1);

    // int max_v1 = maxVector(&v1);
    // int min_v1 = minVector(&v1);
    // float mean_v1 = meanVector(&v1);

    // printf("Max: %d\n", max_v1);
    // printf("Min: %d\n", min_v1);
    // printf("Mean: %f\n", mean_v1);

    return 0;
}
