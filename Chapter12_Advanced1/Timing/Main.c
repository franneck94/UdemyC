#include <stdio.h>
#include <time.h>

void do_something()
{
    volatile double value = 0.0;

    for (int i = 0; i < 10000000; i++)
    {
        value *= i;
    }
}

int main()
{
    clock_t time_start = clock();

    do_something();

    clock_t time_end = clock();
    clock_t duration = time_end - time_start;

    double s = ((double)duration) / CLOCKS_PER_SEC;
    double ms = 1000.0 * s; // s * 10^3
    double mus = 1000.0 * ms; // s * 10^6
    double ns = 1000.0 * mus; // s * 10^9

    printf("Seconds: %lf\n", s);
    printf("Milli-Seconds: %lf\n", ms);
    printf("Mirco-Seconds: %lf\n", mus);
    printf("Nano-Seconds: %lf\n", ns);

    return 0;
}