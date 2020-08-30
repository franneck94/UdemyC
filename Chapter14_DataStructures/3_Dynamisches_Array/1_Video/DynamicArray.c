#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "DynamicArray.h"

dynamic_array_t* dynamic_array_new()
{
    dynamic_array_t* array = (dynamic_array_t*) malloc(sizeof(dynamic_array_t));
    if(!array)
        return NULL;

    array->capacity = INIT_CAPACITY;
    array->data_size = sizeof(float);
    array->len = 0;

    float* array_data = (float*) malloc(array->capacity * array->data_size);
    array->data = array_data;
}

void push_element(dynamic_array_t* array, float val)
{
    // len = 1, capacity = 2
    // [a]
    // b
    // [a, b]
    // len = 2
    array->data[array->len] = val;
    array->len++;

    if(array->len == array->capacity)
        return;
}

void pop_element(dynamic_array_t* array)
{
    array->data[array->len] = 0;
    array->len--;

    // len=10, capacity=1000
    if(1)
        return;
}