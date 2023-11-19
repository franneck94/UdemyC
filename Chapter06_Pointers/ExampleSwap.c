#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;

    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1;
    int b = 2;

    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);

    int *c = &a;
    int *d = &b;

    swap(c, d);
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
