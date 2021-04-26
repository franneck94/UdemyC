#include <stdio.h>

#include "FunctionsBib.h"

#define LENGTH 10u

int main()
{
    int v[LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    float mean_v = meanArray(v, LENGTH);
    printf("Mean: %f\n", mean_v);

    return 0;
}
