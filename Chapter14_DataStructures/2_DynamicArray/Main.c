#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DynamicArray.h"

int main()
{
    dynamic_array_t *dynamic_array = createDynamicArray();

    assert(dynamic_array->length == 0u);
    assert(dynamic_array->capacity == 10u);

    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);

    assert(dynamic_array->length == 3u);
    assert(dynamic_array->capacity == 10u);
    assert(dynamic_array->data[0] == 10.0f);
    assert(dynamic_array->data[1] == 12.0f);
    assert(dynamic_array->data[2] == 14.0f);

    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);
    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);
    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);

    assert(dynamic_array->length == 12u);
    assert(dynamic_array->capacity == 20u);
    assert(dynamic_array->data[0] == 10.0f);
    assert(dynamic_array->data[1] == 12.0f);
    assert(dynamic_array->data[2] == 14.0f);
    assert(dynamic_array->data[3] == 10.0f);
    assert(dynamic_array->data[4] == 12.0f);
    assert(dynamic_array->data[5] == 14.0f);
    assert(dynamic_array->data[6] == 10.0f);
    assert(dynamic_array->data[7] == 12.0f);
    assert(dynamic_array->data[8] == 14.0f);
    assert(dynamic_array->data[9] == 10.0f);
    assert(dynamic_array->data[10] == 12.0f);
    assert(dynamic_array->data[11] == 14.0f);

    popValue(dynamic_array);
    popValue(dynamic_array);
    popValue(dynamic_array);

    assert(dynamic_array->length == 9u);
    assert(dynamic_array->capacity == 10u);
    assert(dynamic_array->data[0] == 10.0f);
    assert(dynamic_array->data[1] == 12.0f);
    assert(dynamic_array->data[2] == 14.0f);
    assert(dynamic_array->data[3] == 10.0f);
    assert(dynamic_array->data[4] == 12.0f);
    assert(dynamic_array->data[5] == 14.0f);
    assert(dynamic_array->data[6] == 10.0f);
    assert(dynamic_array->data[7] == 12.0f);
    assert(dynamic_array->data[8] == 14.0f);

    printDynamicArray(dynamic_array);

    return 0;
}
