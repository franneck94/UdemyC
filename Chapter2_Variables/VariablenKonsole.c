#include <stdio.h>

int main()
{
    float a = 5.0;
    float b = 5.0;
    float c;

    // Multiplikation: *
    c = a * b; // = 25.0
    printf("Der Inhalt von c ist: %f\n", c);

    // Division: /
    c = (a / b) * 5; // = 5.0
    printf("Der Inhalt von c ist: %f\n", c);

    // Adition: +
    c = a + b; // = 10.0
    printf("Der Inhalt von c ist: %f\n", c);

    // Subtraktion: -
    c = a - b; // = 0.0
    printf("Der Inhalt von c ist: %f\n", c);

    int x = 1;
    double y = 2.0;
    unsigned int z = 3;
    float alpha = 4.0;

    printf("Der Inhalt von x ist: %d\n", x);
    printf("Der Inhalt von y ist: %lf\n", y);
    printf("Der Inhalt von z ist: %d\n", z);
    printf("Der Inhalt von alpha ist: %lf\n", alpha);

    return 0;
}