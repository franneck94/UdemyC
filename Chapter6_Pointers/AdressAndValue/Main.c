#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    int a = 2;
    int b = 2;

    // &: Speicheradresse einer Variable
    printf("Variable a hat den Wert: %d\n", a);
    printf("Variable a hat die Speicheradresse: 0x%x\n", &a); // 0x61ff2c
    printf("Variable a belegt %d Bytes im Speicher!\n", sizeof(a));

    printf("Variable b hat den Wert: %d\n", b);
    printf("Variable b hat die Speicheradresse: 0x%x\n", &b); // 0x61ff28
    printf("Variable b belegt %d Bytes im Speicher!\n", sizeof(b));

    return 0;
}