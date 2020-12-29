#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DynamicArray.h"

int main()
{
    dynamic_array_t *dynamic_array = createDynamicArray();

    assert(dynamic_array->length == 0);
    assert(dynamic_array->capacity == 10);

    pushValue(dynamic_array, 10.0);
    pushValue(dynamic_array, 12.0);
    pushValue(dynamic_array, 14.0);

    assert(dynamic_array->length == 3);
    assert(dynamic_array->capacity == 10);
    assert(dynamic_array->data[0] == 10.0);
    assert(dynamic_array->data[1] == 12.0);
    assert(dynamic_array->data[2] == 14.0);

    pushValue(dynamic_array, 10.0);
    pushValue(dynamic_array, 12.0);
    pushValue(dynamic_array, 14.0);
    pushValue(dynamic_array, 10.0);
    pushValue(dynamic_array, 12.0);
    pushValue(dynamic_array, 14.0);
    pushValue(dynamic_array, 10.0);
    pushValue(dynamic_array, 12.0);
    pushValue(dynamic_array, 14.0);

    assert(dynamic_array->length == 12);
    assert(dynamic_array->capacity == 20);

    popValue(dynamic_array);
    popValue(dynamic_array);
    popValue(dynamic_array);

    assert(dynamic_array->length == 9);
    assert(dynamic_array->capacity == 10);

    printDynamicArray(dynamic_array);

    return 0;
}
