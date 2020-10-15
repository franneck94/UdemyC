#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

int main()
{
    // 1D Array: Vector
    // 2D Array: Matrix

    // M = 3x3 = 9 Elements
    double M[3][3];

    // For-Loop: Rows
    for (int i = 0; i < 3; i++)
    {
        // For-Loop: Columns
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i * j;
        }
    }

    // For-Loop: Rows
    for (int i = 0; i < 3; i++)
    {
        // For-Loop: Columns
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d] = %lf\n", i, j, M[i][j]);
        }
    }

    double N[3][3] = {1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};

    // For-Loop: Rows
    for (int i = 0; i < 3; i++)
    {
        // For-Loop: Columns
        for (int j = 0; j < 3; j++)
        {
            printf("N[%d][%d] = %lf\n", i, j, N[i][j]);
        }
    }

    double O[3][3] = {
        {11, 12, 13},
        {14, 15, 16},
        {17, 18, 19}};

    // For-Loop: Rows
    for (int i = 0; i < 3; i++)
    {
        // For-Loop: Columns
        for (int j = 0; j < 3; j++)
        {
            printf("O[%d][%d] = %lf\n", i, j, O[i][j]);
        }
    }

    return 0;
}