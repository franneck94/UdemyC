#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

/**********************/
/* DEFINES AND TYPES  */
/**********************/

#define INIT_CAPACITY (unsigned int)(10U)
#define GROWTH_FACTOR (unsigned int)(2U)
#define SHIRNK_FACTOR (unsigned int)(2U)

typedef struct dynamic_array
{
    float *data;
    unsigned int length;
    unsigned int capacity; // >= length
} dynamic_array_t;

/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray();
void *freeDynamicArray(dynamic_array_t *array);

void expandDynamicArray(dynamic_array_t *array);
void shrinkDynamicArray(dynamic_array_t *array);

void pushValue(dynamic_array_t *array, const float value);
float popValue(dynamic_array_t *array);

void clearDynamicArray(dynamic_array_t *array);
void printDynamicArray(const dynamic_array_t *array);

#endif // DYNAMIC_ARRAY_H
