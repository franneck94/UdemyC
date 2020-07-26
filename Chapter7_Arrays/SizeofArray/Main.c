#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

enum {rows = 2, cols=2};
 
int main()
{
    int M[2][2] = {{1,0}, {0,1}};

    int rows = 0;
    int cols = 0;

    cols = sizeof(M[0]) / sizeof(int);
    rows = sizeof(M) / (cols * sizeof(int));

    printf("Rows: %d\n", rows);
    printf("Cols: %d\n", cols);

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Hello!\n");
    //     }
    // }

    return 0;
}