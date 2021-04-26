#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"


int main()
{
    unsigned int num_rows = 2;
    unsigned int num_cols = 2;

    int **matrix = createMatrix(num_rows, num_cols, 1);
    printMatrix(matrix, num_rows, num_cols);

    matrix = freeMatrix(matrix, num_rows);
    if (matrix != NULL)
    {
        printMatrix(matrix, num_rows, num_cols);
    }

    return 0;
}
