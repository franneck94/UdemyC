#include <stdio.h>

typedef struct StructComplex
{
    double real;
    double imaginary;
} StructComplex;

StructComplex complexAdd(StructComplex c1, StructComplex c2)
{
    StructComplex result = { .real=0.0, .imaginary=0.0 };

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

void printComplexNumber(StructComplex c)
{
    printf("%lf + %lf * i\n", c.real, c.imaginary);
}

int main()
{
    // c1 = 1.0 + 3.0 * i
    StructComplex c1 = { .real=1.0, .imaginary=3.0 };

    // c2 = -1.0 - 3.0 * i
    StructComplex c2 = { .real=-1.0, .imaginary=-3.0 };

    StructComplex c3 = complexAdd(c1, c2);
    printComplexNumber(c3);

    return 0;
}