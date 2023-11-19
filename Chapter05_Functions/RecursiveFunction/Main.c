#include <stdint.h>
#include <stdio.h>

uint32_t factorial(uint32_t n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    uint32_t n = 5;
    uint32_t n_factorial = factorial(n);

    printf("%u! = %u\n", n , n_factorial);

    return 0;
}
