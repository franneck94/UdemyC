#include <stdio.h>
#include <math.h>
#include <complex.h>

int main()
{
    //                  RE + i * IMG
    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.5 + 2.0 * I;

    printf("%lf\n", creal(z1));
    printf("%lf\n", cimag(z1));

    printf("%lf\n", creal(z2));
    printf("%lf\n", cimag(z2));

    double complex z3 = z1 + z2;
    printf("z3 = %lf + i * %lf\n", creal(z3), cimag(z3));

    double complex z4 = z1 * z2;
    printf("z3 = %lf + i * %lf\n", creal(z4), cimag(z4));

    return 0;
}