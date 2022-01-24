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

int main()
{
    unsigned int length = 3;

    int *array = createArray(length, 1);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    array = freeArray(array);

    int **matrix = createMatrix(2, 3, 1337);

    for (unsigned int i = 0; i < 2; i++)
    {
        for (unsigned int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}
