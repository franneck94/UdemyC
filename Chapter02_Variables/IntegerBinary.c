#include <stdio.h>

int main()
{
    int decimal = 312;
    int binary = 0b100111000;
    int hex = 0x138;

    printf("Decimal: %d\n", decimal);
    printf("Binary: 0b100111000\n");
    printf("Hex: %x\n", hex);

    printf("Decimal to hex: %x\n", decimal);

    return 0;
}
