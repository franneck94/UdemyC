#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    double a = 0.1;
    double b = 0.1;
    double c = a + b;

    printf("A: %.23f\n", a);
    printf("B: %.23f\n", b);
    printf("C: %.23f\n", c);
    printf("D: %.23f\n", 0.2);

    return 0;
}