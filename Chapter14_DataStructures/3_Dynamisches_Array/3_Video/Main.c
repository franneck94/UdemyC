#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "DynamicArray.h"

int main()
{
    dynamic_array_t* dynamic_array = dynamic_array_new();

    assert(dynamic_array->len == 0);
    assert(dynamic_array->capacity == 10);

    push_element(dynamic_array, 10.0);
    push_element(dynamic_array, 12.0);
    push_element(dynamic_array, 14.0);

    assert(dynamic_array->len == 3);
    assert(dynamic_array->capacity == 10);
    assert(dynamic_array->data[0] == 10.0);
    assert(dynamic_array->data[1] == 12.0);
    assert(dynamic_array->data[2] == 14.0);

    push_element(dynamic_array, 10.0);
    push_element(dynamic_array, 12.0);
    push_element(dynamic_array, 14.0);
    push_element(dynamic_array, 10.0);
    push_element(dynamic_array, 12.0);
    push_element(dynamic_array, 14.0);
    push_element(dynamic_array, 10.0);
    push_element(dynamic_array, 12.0);
    push_element(dynamic_array, 14.0);

    assert(dynamic_array->len == 12);
    assert(dynamic_array->capacity == 20);

    pop_element(dynamic_array);
    pop_element(dynamic_array);
    pop_element(dynamic_array);

    assert(dynamic_array->len == 9);
    assert(dynamic_array->capacity == 10);

    dynamic_array_print(dynamic_array);

    return 0;
}