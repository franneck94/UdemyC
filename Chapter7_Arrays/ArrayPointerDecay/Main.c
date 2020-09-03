#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

#define LENGTH 10

int main()
{
    // Array to Pointer Decay

    // 55 / 10 = 5,5
    int v[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float mean_v = meanArray(v, LENGTH);
    printf("Mean: %f", mean_v);

    return 0;
}