#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

void doSomething()
{
    double val = 0.0;

    for (int i = 0; i < 10000000; i++)
    {
        val *= 1;
    }
}

int main()
{
    clock_t time_start = clock();

    doSomething();

    clock_t time_end = clock();
    clock_t duration = time_end - time_start;

    // s = second, ms = millisecond, mus = microseconds, ns = nanoseconds
    double s = ((double)duration) / CLOCKS_PER_SEC;
    double ms = 1000.0 * s;   // s * 10^3
    double mus = 1000.0 * ms; // s * 10^6
    double ns = 1000.0 * mus; // s * 10^9

    printf("Time: %lf seconds %lf milliseconds %lf microseconds %lf nanoseconds.\n", s, ms, mus, ns);

    return 0;
}