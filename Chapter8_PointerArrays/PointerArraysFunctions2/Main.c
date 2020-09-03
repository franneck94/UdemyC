#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

#define NUM_ELEMENTS 3u

void init_time_array(float *p_array, unsigned int length)
{
    for (int i = 0; i < length; ++i)
    {
        p_array[i] = i;
    }
}

void compute_time_array(float *p_array, unsigned int length)
{
    for (int i = 0; i < length; ++i)
    {
        float temp = 0.0f;

        for (int j = 0; j < i; ++j)
        {
            temp += p_array[j];
        }

        p_array[i] += temp;
    }
}

void print_time_array(float *p_array, unsigned int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("array[%d] = %f\n", i, p_array[i]);
    }
}

int main()
{
    // Array as argument to a function -> decay to pointer of the first element
    float my_array[NUM_ELEMENTS];
    // 0, 1, 2
    init_time_array(my_array, NUM_ELEMENTS);
    print_time_array(my_array, NUM_ELEMENTS);
    // 0, 1, 3
    compute_time_array(my_array, NUM_ELEMENTS);
    print_time_array(my_array, NUM_ELEMENTS);

    return 0;
}