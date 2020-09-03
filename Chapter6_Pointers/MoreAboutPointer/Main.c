#include <stdio.h>
#include <math.h>

void add(double *value1, double *value2, double add_value)
{
    *value1 += add_value; // * content (value) of the variable that is pointed to
    *value2 += add_value; // * content (value) of the variable that is pointed to
}

int main()
{
    double my_value1 = 3.0;
    double my_value2 = 2.0;
    double my_add_value = 1.3;

    add(&my_value1, &my_value2, my_add_value);

    printf("%lf\n", my_value1);
    printf("%lf\n", my_value2);

    return 0;
}