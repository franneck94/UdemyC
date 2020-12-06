#ifndef DynamicArray_H
#define DynamicArray_H

#define INIT_CAPACITY 10

typedef struct dynamic_array
{
    float* data;
    unsigned int len;
    unsigned int capacity;
    unsigned int data_size;
} dynamic_array_t;

dynamic_array_t* dynamic_array_new();

void dynamic_array_expand(dynamic_array_t* array);
void dynamic_array_shrink(dynamic_array_t* array);

void push_element(dynamic_array_t* array, float val);
void pop_element(dynamic_array_t* array);

void dynamic_array_empty(dynamic_array_t* array);
void dynamic_array_print(dynamic_array_t* array);

#endif