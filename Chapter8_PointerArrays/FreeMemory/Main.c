#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    unsigned int rows = 2;
    unsigned int cols = 3;

    int **M = createMatrix(rows, cols, 1);
    int **M_transpose = transposeMatrix(M, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, M[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("M^T[%d][%d] = %d\n", i, j, M_transpose[i][j]);
        }
    }

    // Free the memory for M and M_transpose
    for (int i = 0; i < rows; i++)
    {
        free(M[i]);
        M[i] = NULL;
        free(M_transpose[i]);
        M_transpose[i] = NULL;
    }

    free(M);
    M = NULL;
    free(M_transpose);
    M_transpose = NULL;

    int length = 4;
    int *arr = (int *)calloc(length, length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    // Free the memory of arr
    free(arr);
    arr = NULL;

    if (arr != NULL)
    {
        printf("%x\n", arr);
    }
    else
    {
        printf("NULL");
    }

    return 0;
}