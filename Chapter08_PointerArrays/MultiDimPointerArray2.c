#include <stdio.h>
#include <stdlib.h>

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

int *freeArray(int *array)
{
    if (NULL != array)
    {
        free(array);
    }

    return NULL;
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = createArray(num_cols, value);
    }

    return matrix;
}

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (NULL == matrix)
    {
        return;
    }

    for (unsigned int i = 0; i < num_rows; i++)
    {
        printArray(matrix[i], num_cols);
    }
}

int **freeMatrix(int **matrix, unsigned int num_rows)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = freeArray(matrix[i]);
    }

    free(matrix);
    return NULL;
}

int main()
{
    unsigned int length = 3;

    int *array = createArray(length, 1);
    printArray(array, length);
    array = freeArray(array);

    int **matrix = createMatrix(2, 3, 1337);
    printMatrix(matrix, 2, 3);
    matrix = freeMatrix(matrix, 2);

    return 0;
}
