#include <stdio.h>

/**
 * %d: signed int
 * %c: signed char
 * %u: unsigned int
 * %f: float
 * %lf: double / long float
 *
 * %x: hexa-decimal
 * %p: pointer adress
 */
int main()
{
    int a = 2;
    int b = -2;
    printf("%d\n", a);
    printf("%d\n", b);

    char c = 'A';
    printf("%c\n", c);
    printf("%d\n", c);

    unsigned int d = 3;
    printf("%u\n", d);
    printf("%u\n", b);

    return 0;
}
