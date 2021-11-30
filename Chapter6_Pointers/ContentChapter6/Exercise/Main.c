#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = 0;

    printf("a=%d, b=%d\n", a, b);
    printf("Call binom function!\n");
    binom(a, b, &c);
    printf("c=%d\n", c);

    return 0;
}
