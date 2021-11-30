#include <stdio.h>

#include "Lib.h"

int main()
{
    unsigned int n = 5;
    unsigned long long n_fac = factorial(n);

    printf("%d! = %llu\n", n, n_fac);

    return 0;
}
