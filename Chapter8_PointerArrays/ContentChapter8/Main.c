#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    unsigned int rows = 2;
    unsigned int cols = 3;

    int** M = createMatrix(rows, cols, 1);
    int** M_transpose = transposeMatrix(M, rows, cols);

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, M[i][j]);
            M[i][j] = i + j;
        }
    }

    printf("\n");

    for(int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("M^T[%d][%d] = %d\n", i, j, M_transpose[i][j]);
        }
    }

    

    return 0;
}