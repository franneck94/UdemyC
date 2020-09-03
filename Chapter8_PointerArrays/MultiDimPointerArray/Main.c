#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int *createVector(unsigned int length, int value)
{
    int *vector;
    vector = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        vector[i] = value;
    }

    return vector;
}

int **createMatrix(unsigned int rows, unsigned int cols, int value)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }

    return matrix;
}

int main()
{
    int **matrix = createMatrix(2, 2, 1);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}