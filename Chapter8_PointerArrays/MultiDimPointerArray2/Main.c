#include <stdio.h>
#include <stdlib.h>

// Return type: (int*)*
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

// matrix consists of rows and cols
void fillMatrix(int *matrix[], unsigned int rows, unsigned int cols, int value)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }
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

    fillMatrix(matrix, 2, 2, 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}