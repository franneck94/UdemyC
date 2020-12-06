#include <stdio.h>

int main()
{
    int a = 1; // 0x61ff20
    int b = 2;
    int c = 3;

    // p_d points to the memory location of variable a
    // *p_d is the content of the memory location
    int* p_d = &a;
    int* p_e = &b;
    int* p_f = &c;

    // p_d = 2 * p_e + 3 * p_f
    // *p_d = 2 * 2 + 3 * 3 = 13
    *p_d = 2 * *p_e + 3 * *p_f;
    p_d = &b;
    p_f = &a;

    // p_d -> b, p_f -> a, p_e -> b
    // 2, 13
    *p_e = *p_d + *p_f; // the content of the memory location of p_e is set to 15

    printf("%d\n", a);
    printf("%d\n", *p_d); // ?
    printf("%d\n", *p_e);
    printf("%d\n", *p_f);

    return 0;
}