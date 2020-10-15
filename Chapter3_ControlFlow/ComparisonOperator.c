#include <stdio.h>

int main()
{
    int a = 22;
    int b = 42;
    int comp;

    // a greater than b
    comp = (a > b);
    printf("Comp: %d\n", comp);

    // a less than b
    comp = (a < b);
    printf("Comp: %d\n", comp);

    // a equal to b
    comp = (a == b);
    printf("Comp: %d\n", comp);

    // a less or equal than b
    comp = (a <= b);
    printf("Comp: %d\n", comp);

    // a greater or equal than b
    comp = (a >= b);
    printf("Comp: %d\n", comp);

    // a not equal to b
    comp = (a != b);
    printf("Comp: %d\n", comp);

    return 0;
}