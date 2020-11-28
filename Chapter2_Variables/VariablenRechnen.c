#include <stdio.h>

int main()
{
    float a = 5.0;
    float b = 5.0;
    float c;

    // Multiplikation: *
    c = a * b; // = 25.0
    printf("%f\n", c);

    // Division: /
    c = (a / b) * 5; // = 5.0
    printf("%f\n", c);

    // Adition: +
    c = a + b; // = 10.0
    printf("%f\n", c);

    // Subtraktion: -
    c = a - b; // = 0.0
    printf("%f\n", c);

    // c^2 = a^2 + b^2
    a = 3;
    b = 9;

    float c_squared = a*a + b*b;
    printf("%f\n", c_squared);

    return 0;
}