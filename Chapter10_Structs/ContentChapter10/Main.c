#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    Vector v1 = { .data = createVector(3, 1), .length = 3 };
    v1.data[1] = 2;

    printVector(&v1);

    int max_v1 = maxVector(&v1);
    int min_v1 = minVector(&v1);
    float mean_v1 = meanVector(&v1);

    printf("Max: %d\n", max_v1);
    printf("Min: %d\n", min_v1);
    printf("Mean: %f\n", mean_v1);

    return 0;
}
