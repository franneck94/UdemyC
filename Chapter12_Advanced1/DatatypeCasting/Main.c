#include <stdio.h>

int main()
{
    float my_float_number = 1337.5f;
    printf("%f\n", my_float_number);

    int my_int_number = (int)my_float_number;
    printf("%d\n", my_int_number);

    double my_double_number = (double)my_int_number / 2;
    printf("%lf\n", my_double_number);

    return 0;
}
