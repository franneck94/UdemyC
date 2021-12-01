#include <stdio.h>
#include <stdlib.h>

int *createArray(unsigned int length, int value)
{
    int *array;
    array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *p_array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", p_array[i]);
    }
}

int *freeArray(int *p_array)
{
    free(p_array);
    p_array = NULL;
    return p_array;
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

void printMatrix(int **p_matrix, unsigned int num_rows, unsigned int num_cols)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        printArray(p_matrix[i], num_cols);
    }
}

int **freeMatrix(int **p_matrix, unsigned int num_rows)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        p_matrix[i] = freeArray(p_matrix[i]);
    }

    free(p_matrix);
    p_matrix = NULL;
    return p_matrix;
}

int main()
{
    unsigned int num_rows = 2;
    unsigned int num_cols = 3;

    int **matrix = createMatrix(num_rows, num_cols, 1);
    for (unsigned int i = 0; i < num_rows; i++)
    {
        for (unsigned int j = 0; j < num_cols; j++)
        {
            matrix[i][j] = (i + 1) * j;
        }
    }
    printMatrix(matrix, num_rows, num_cols);
    printf("\n");

    int **matrix_transpose = transposeMatrix(matrix, num_rows, num_cols);
    printMatrix(matrix_transpose, num_cols, num_rows);

    matrix = freeMatrix(matrix, num_rows);
    matrix = freeMatrix(matrix_transpose, num_cols);

    return 0;
}
