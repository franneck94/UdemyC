#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    struct Vector v1 = {createVector(10, 1), 3};
    
    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] = i;
    }

    int max_v1 = maxVector(&v1);
    int min_v1 = minVector(&v1);
    float mean_v1 = meanVector(&v1);

    printf("%d\n", max_v1);
    printf("%d\n", min_v1);
    printf("%f\n", mean_v1);

    return 0;
}