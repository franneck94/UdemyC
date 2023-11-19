#include <math.h>
#include <stdio.h>

#include "Lib.h"

#define LENGTH 3

int main()
{
    int v[LENGTH] = {1, 2, 3};

    int min_v = minArray(v, LENGTH);
    int max_v = maxArray(v, LENGTH);
    float mean_v = meanArray(v, LENGTH);

    printf("Min: %d\n", min_v);
    printf("Max: %d\n", max_v);
    printf("Max: %f\n", mean_v);

    return 0;
}
