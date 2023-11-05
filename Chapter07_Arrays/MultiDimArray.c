#include <stdio.h>

int main()
{
    // 1d Array: Vector
    // 2d Array: Matrix

    double M[3][3]; // Matrix with 3 rows and 3 cols

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i * j; // Write operation
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d] = %lf\n", i, j, M[i][j]); // Read operation
        }
    }

    double N[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("N[%d][%d] = %lf\n", i, j, N[i][j]); // Read operation
        }
    }

    return 0;
}
