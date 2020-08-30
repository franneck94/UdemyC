#include <stdio.h>

int main()
{
    float a = 5.0;
    float b = 5.0;
    float c;

    // Multiplikation: *
    c = a * b; // = 25.0

    // Division: /
    c = (a / b) * 5; // = 5.0

    // Adition: +
    c = a + b; // = 10.0

    // Subtraktion: -
    c = a - b; // = 0.0

    // c^2 = a^2 + b^2
    float c_squared;
    a = 3;
    b = 9;
    c_squared = a*a + b*b;

    return 0;
}