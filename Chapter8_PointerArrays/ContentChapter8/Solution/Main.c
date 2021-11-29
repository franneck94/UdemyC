#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

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
    printf("Matrix:\n");
    printMatrix(matrix, num_rows, num_cols);
    printf("\n");

    int **matrix_transpose = transposeMatrix(matrix, num_rows, num_cols);
    printf("Transposed Matrix:\n");
    printMatrix(matrix_transpose, num_cols, num_rows);

    matrix = freeMatrix(matrix, num_rows);
    matrix = freeMatrix(matrix_transpose, num_cols);

    return 0;
}
