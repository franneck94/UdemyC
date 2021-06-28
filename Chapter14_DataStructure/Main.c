#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"

int main()
{
    dynamic_array_t *dynamic_array = createDynamicArray();

    assert(NULL != dynamic_array);
    assert(0u == dynamic_array->length);
    assert(10u == dynamic_array->capacity);

    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);

    assert(3u == dynamic_array->length);
    assert(10u == dynamic_array->capacity);
    assert(10.0f == dynamic_array->data[0]);
    assert(12.0f == dynamic_array->data[1]);
    assert(14.0f == dynamic_array->data[2]);

    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);
    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);
    pushValue(dynamic_array, 10.0f);
    pushValue(dynamic_array, 12.0f);
    pushValue(dynamic_array, 14.0f);

    assert(12u == dynamic_array->length);
    assert(20u == dynamic_array->capacity);
    assert(10.0f == dynamic_array->data[0]);
    assert(12.0f == dynamic_array->data[1]);
    assert(14.0f == dynamic_array->data[2]);
    assert(10.0f == dynamic_array->data[3]);
    assert(12.0f == dynamic_array->data[4]);
    assert(14.0f == dynamic_array->data[5]);
    assert(10.0f == dynamic_array->data[6]);
    assert(12.0f == dynamic_array->data[7]);
    assert(14.0f == dynamic_array->data[8]);
    assert(10.0f == dynamic_array->data[9]);
    assert(12.0f == dynamic_array->data[10]);
    assert(14.0f == dynamic_array->data[11]);

    popValue(dynamic_array);
    popValue(dynamic_array);
    popValue(dynamic_array);

    assert(9u == dynamic_array->length);
    assert(10u == dynamic_array->capacity);
    assert(10.0f == dynamic_array->data[0]);
    assert(12.0f == dynamic_array->data[1]);
    assert(14.0f == dynamic_array->data[2]);
    assert(10.0f == dynamic_array->data[3]);
    assert(12.0f == dynamic_array->data[4]);
    assert(14.0f == dynamic_array->data[5]);
    assert(10.0f == dynamic_array->data[6]);
    assert(12.0f == dynamic_array->data[7]);
    assert(14.0f == dynamic_array->data[8]);

    printDynamicArray(dynamic_array);
    clearDynamicArray(dynamic_array);
    dynamic_array = freeDynamicArray(dynamic_array);

    return 0;
}
