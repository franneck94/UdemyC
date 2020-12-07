#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "DynamicArray.h"

int main()
{
    dynamic_array_t *dynamic_array = dynamic_array_new();

    assert(dynamic_array->len == 0);
    assert(dynamic_array->capacity == 10);

    return 0;
}