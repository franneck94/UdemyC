#include <stdio.h>

/**
 * @brief Return a^2 + ab + b^2
 *
 * @param a
 * @param b
 * @return
 */
int binom(int *a, int *b);

int main()
{
    int a = 4;
    int b = 3;
    int c = 0;

    printf("a=%d, b=%d\n", a, b);
    printf("Call binom function!\n");
    c = binom(&a, &b);
    printf("c=%d\n", c);

    return 0;
}

int binom(int *a, int *b)
{
    return ((*a) * (*a)) + 2 * ((*a) * (*b)) + ((*b) * (*b));
}
