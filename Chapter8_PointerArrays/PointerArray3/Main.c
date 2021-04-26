#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int *createArray(unsigned int length, int value)
{
    int *array;
    array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void init_time_array(int *p_array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        p_array[i] = i;
    }
}

void compute_time_array(int *p_array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        int temp = 0;

        for (unsigned int j = 0; j < i; j++)
        {
            temp += p_array[j];
        }

        p_array[i] += temp;
    }
}

void print_time_array(int *p_array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", p_array[i]);
    }
}

int main()
{
    unsigned int length = getNumberFromUser();

    int *array = createArray(length, 0);

    init_time_array(array, length);
    compute_time_array(array, length);
    print_time_array(array, length);

    free(array);
    array = NULL;

    return 0;
}
