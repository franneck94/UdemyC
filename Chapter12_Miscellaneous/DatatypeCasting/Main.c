#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main()
{
    int a = 3;
    float b = 2.5f;

    float c = a;
    printf("%f\n", c);

    int d = b;
    printf("%d\n", d);

    uint32_t e = 65802;
    // 10000000100001010 = 65802 (dez)
    uint16_t f = e; // [0, 255]
    // 0000000100001010 = 266 (dez)
    printf("%d\n", e);
    printf("%d\n", f);

    float var_a = (int)3.5f;
    printf("%f\n", var_a);

    return 0;
}