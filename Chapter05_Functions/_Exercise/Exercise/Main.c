#include <math.h>
#include <stdio.h>

#include "Lib.h"

int main()
{
    int a = getNumberFromUser();
    int b = getNumberFromUser();

    int number_max = max(a, b);
    int number_min = min(a, b);
    float number_mean = mean(a, b);

    printf("Max{%d, %d} = %d\n", a, b, number_max);
    printf("Min{%d, %d} = %d\n", a, b, number_min);
    printf("Mean[%d, %d] = %f\n", a, b, number_mean);

    return 0;
}
