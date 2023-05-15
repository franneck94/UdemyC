#include <stdint.h>
#include <stdio.h>

uint64_t factorial(uint8_t n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    uint8_t n = 5; // 5 * 4 * 3 * 2 * 1
    uint64_t n_faculuty = factorial(n);

    printf("%u! = %lu\n", n, n_faculuty);

    return 0;
}
