#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}


int main()
{
    unsigned int n = 5;
    unsigned long long n_fac = factorial(n);

    printf("%d! = %llu\n", n, n_fac);

    return 0;
}
