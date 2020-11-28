#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int b_dezimal = 312; // 100111000
    int b_binaer = 0b100111000;
    int b_hex = 0x138;

    printf("Die Zahl in Dezimal: %d\n", b_dezimal);
    printf("Die Zahl in Binaer: 0b100111000\n");
    printf("Die Zahl in Hex: 0x%p\n", b_hex);

    return 0;
}