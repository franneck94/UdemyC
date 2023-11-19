#include <math.h>
#include <stdio.h>

#include "Lib.h"

void get_numbers(int *a, int *b)
{
    *a = getNumberFromUser();
    *b = getNumberFromUser();
}

void compute_data(int a, int b)
{
    int number_max = max(a, b);
    int number_min = min(a, b);
    float number_mean = mean(a, b);

    printf("Max{%d, %d} = %d\n", a, b, number_max);
    printf("Min{%d, %d} = %d\n", a, b, number_min);
    printf("Mean[%d, %d] = %f\n", a, b, number_mean);
}

int main()
{
    int a;
    int b;

    get_numbers(&a, &b);
    compute_data(a, b);

    return 0;
}
