#include <stdio.h>

int main()
{
    int a = 2;

    // &: Speicheradresse einer Variable
    printf("Variable a hat den Wert: %d\n", a);               // 2
    printf("Variable a hat die Speicheradresse: 0x%x\n", &a); // 0x61ff2c

    int* pointer_b = &a;

    printf("Der Pointer b zeigt auf die Speicheradresse: 0x%x\n", pointer_b); // 0x61ff2c (Referenzierung)
    printf("Der Pointer b zeigt auf den Wert: %d\n", *pointer_b);             // 2 (Dereferenzierung)
    printf("Der Pointer b hat die Speicheradresse: 0x%x\n", &pointer_b);      //0x61ff28

    return 0;
}