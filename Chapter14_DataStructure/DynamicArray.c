#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DynamicArray.h"


/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray()
{
    dynamic_array_t *array = (dynamic_array_t *)malloc(sizeof(dynamic_array_t));

    if (!array)
    {
        return NULL;
    }

    array->length = 0u;
    array->capacity = INIT_CAPACITY;

    float *p_data = (float *)malloc(array->capacity * sizeof(float));
    array->data = p_data;

    return array;
}

void expandDynamicArray(dynamic_array_t *array)
{
    array->capacity *= 2u;
    array->data = realloc(array->data, array->capacity * sizeof(float));
}

void shrinkDynamicArray(dynamic_array_t *array)
{
    array->capacity /= 2u;
    array->data = realloc(array->data, array->capacity * sizeof(float));
}

void pushValue(dynamic_array_t *array, float value)
{
    array->data[array->length] = value;
    array->length++;

    if (array->length == array->capacity)
    {
        expandDynamicArray(array);
    }
}

float popValue(dynamic_array_t *array)
{
    float value = array->data[array->length - 1];

    array->data[array->length - 1] = 0.0f;
    array->length--;

    if (array->length < array->capacity / 2u)
    {
        shrinkDynamicArray(array);
    }

    return value;
}

void clearDynamicArray(dynamic_array_t *array)
{
    free(array->data);
    array->data = NULL,
        array->length = 0u;
    array->capacity = INIT_CAPACITY;
}

void printDynamicArray(dynamic_array_t *array)
{
    printf("DynamicArray contains %d elements with a capacity of %d.\n", array->length, array->capacity);

    for (unsigned int i = 0; i < array->length; i++)
    {
        printf("%f\n", array->data[i]);
    }
}
