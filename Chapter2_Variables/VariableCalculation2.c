#include <stdio.h>

int main()
{
    float a = 5.0f;
    float b = 2.0f;
    float c = 1.0f;

    // Addition
    c += a;
    printf("%f\n", c);

    // Subtraction
    c -= a;
    printf("%f\n", c);

    // Multiplication
    c *= a;
    printf("%f\n", c);

    // Division
    c /= a;
    printf("%f\n", c);

    b = b + 1;
    printf("%f\n", b);

    b += 1;
    printf("%f\n", b);

    b++; // b = b + 1; <=> b += 1; <=> b++

    return 0;
}
