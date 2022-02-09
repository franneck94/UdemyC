#include <stdio.h>

int main()
{
    double a = 0.3;
    double b = 0.2;
    double c = a - b;
    double d = 0.1;

    printf("a: %.35lf\n", a);
    printf("b: %.35lf\n", b);
    printf("c: %.35lf\n", c);
    printf("d: %.35lf\n", d);

    double e = 0.5;
    printf("e: %.35lf\n", e);

    return 0;
}
