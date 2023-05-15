#include <stdio.h>
#include <stdlib.h>

unsigned int index_lookup(unsigned int i, unsigned int j, unsigned int num_cols)
{
    return i * num_cols + j;
}

int *createArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (NULL == array)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *array, unsigned int length)
{
    if (NULL == array)
    {
        return;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}

void printMatrix(int *matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (NULL == matrix)
    {
        return;
    }

    for (unsigned int i = 0; i < num_rows; i++)
    {
        for (unsigned int j = 0; j < num_cols; j++)
        {
            unsigned int index_ij = index_lookup(i, j, num_cols);

            printf("%d, ", matrix[index_ij]);
        }

        printf("\n");
    }

    printf("\n");
}

int *freeArray(int *array)
{
    if (NULL != array)
    {
        free(array);
    }

    return NULL;
}

int main()
{
    unsigned int num_rows = 2;
    unsigned int num_cols = 3;
    unsigned int num_elements = num_rows * num_cols;

    int *array = createArray(num_elements, 1);
    printMatrix(array, num_rows, num_cols);
    array = freeArray(array);

    return 0;
}
