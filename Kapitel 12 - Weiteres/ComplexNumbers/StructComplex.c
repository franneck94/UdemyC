#include <stdio.h>
#include <math.h>

typedef struct
{
    double real;
    double imaginary;
}StructComplex;

StructComplex addition(StructComplex c1, StructComplex c2)
{
    StructComplex result = { .real=0.0, .imaginary=0.0 };

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

void print_complex_number(StructComplex c)
{
    printf("Real: %lf, Imaginary: %lf*I\n", c.real, c.imaginary);
}


int main()
{
    // double complex z1 = 1.0 + 3.0 * I;
    StructComplex c1 = { .real=1.0, .imaginary=3.0 };
    // double complex z2 = 1.5 + 2.0 * I;
    StructComplex c2 = { .real=1.5, .imaginary=2.0 };

    StructComplex c3 = addition(c1, c2);
    print_complex_number(c3);

    return 0;
}