#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"


int main()
{
    unsigned int num_rows = 2;
    unsigned int num_cols = 2;

    int **matrix = createMatrix(num_rows, num_cols, 1);
    printMatrix(matrix, num_rows, num_cols);

    free(matrix);
    matrix = NULL;

    return 0;
}
