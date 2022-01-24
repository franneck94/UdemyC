#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"

/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray()
{
    dynamic_array_t *array = (dynamic_array_t *)malloc(sizeof(dynamic_array_t));

    if (NULL == array)
    {
        return NULL;
    }

    array->length = 0u;
    array->capacity = INIT_CAPACITY;
    array->data = (float *)malloc(array->capacity * sizeof(float));

    if (array->data == NULL)
    {
        free(array);

        return NULL;
    }

    return array;
}

void *freeDynamicArray(dynamic_array_t *array)
{
    if (NULL != array)
    {
        free(array->data);
        array->data = NULL;

        free(array);
        array = NULL;
    }

    return NULL;
}

void expandDynamicArray(dynamic_array_t *array)
{
    array->capacity *= GROW_FACTOR;
    array->data = realloc(array->data, array->capacity * sizeof(float));
}

void shrinkDynamicArray(dynamic_array_t *array)
{
    array->capacity /= SHRINK_FACTOR;
    array->data = realloc(array->data, array->capacity * sizeof(float));
}

void pushValue(dynamic_array_t *array, const float value)
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
    const unsigned int index = (array->length - 1u);
    const float value = array->data[index];

    array->data[index] = 0.0f;
    array->length--;

    if (array->length < array->capacity / SHRINK_FACTOR)
    {
        shrinkDynamicArray(array);
    }

    return value;
}

void clearDynamicArray(dynamic_array_t *array)
{
    if (NULL == array || array->data == NULL)
    {
        return;
    }

    free(array->data);
    array->data = NULL;
    array->length = 0u;
    array->capacity = INIT_CAPACITY;
}

void printDynamicArray(const dynamic_array_t *array)
{
    printf("DynamicArray contains %d elements with a capacity of %d.\n", array->length, array->capacity);

    for (unsigned int i = 0; i < array->length; i++)
    {
        printf("%f\n", array->data[i]);
    }

    printf("\n");
}
