#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    int a = 1;           // 4B
    unsigned int b = 1u; // 4B
    float c = 1.0f;      // 4B
    double d = 1.0;      // 8B
    char e = 42;         // 1B

    printf("Variable a: %lu\n", sizeof(a));
    printf("Variable b: %lu\n", sizeof(b));
    printf("Variable c: %lu\n", sizeof(c));
    printf("Variable d: %lu\n", sizeof(d));
    printf("Variable e: %lu\n", sizeof(e));

    printf("Int range: %d, %d\n", INT_MIN, INT_MAX);
    printf("Float range: %E, %E\n", FLT_MIN, FLT_MAX);

    return 0;
}
