#include <stdio.h>

int main()
{
    double a = 1337.23;
    float b = (float)a;

    printf("%.16lf\n", a);
    printf("%.16f\n", b);

    int c = 123456789;
    short d = (short)(c);

    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
