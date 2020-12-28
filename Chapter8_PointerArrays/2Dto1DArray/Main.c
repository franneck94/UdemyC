#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

#define matrix(i, j) matrix[i * cols + j]

int main()
{
    unsigned int rows = 2;
    unsigned int cols = 3;
    unsigned int n_elements = rows * cols;

    int *matrix = createArray(n_elements, 0);
    matrix[0] = 0;
    matrix[1] = 1;
    matrix[2] = 2;
    matrix[3] = 10;
    matrix[4] = 11;
    matrix[5] = 12;

    for (unsigned int i = 0; i < rows; i++)
    {
        for (unsigned int j = 0; j < cols; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix(i, j));
        }
    }

    return 0;
}