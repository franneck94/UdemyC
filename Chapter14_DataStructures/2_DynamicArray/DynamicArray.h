#ifndef DynamicArray_H
#define DynamicArray_H

#define INIT_CAPACITY 10

/**********************/
/* DEFINES AND TYPES  */
/**********************/

typedef struct dynamic_array
{
    float *data;
    unsigned int length;
    unsigned int capacity;
} dynamic_array_t;

/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray();

void expandDynamicArray(dynamic_array_t *array);
void shrinkDynamicArray(dynamic_array_t *array);

void pushValue(dynamic_array_t *array, float value);
float popValue(dynamic_array_t *array);

void clearDynamicArray(dynamic_array_t *array);
void printDynamicArray(dynamic_array_t *array);

#endif // FUNCTIONS_BIB_H
