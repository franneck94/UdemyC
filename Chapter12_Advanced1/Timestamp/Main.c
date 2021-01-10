#include <stdio.h>
#include <stdint.h>
#include <time.h>

void doSomething()
{
    double value = 0.0;

    for (int i = 0; i < 10000000; i++)
    {
        value *= 1;
    }
}

int main()
{
    // 1.1.1970
    time_t time_start = time(NULL);
    printf("Timestamp: %d\n", (int)time_start);
    printf("Time Format: %s\n", ctime(&time_start));

    doSomething();
    getchar();

    time_t time_end = time(NULL);
    printf("Timestamp: %d\n", (int)time_end);
    printf("Time Format: %s\n", ctime(&time_end));

    // s = second, ms = millisecond, µs = microseconds, ns = nanoseconds
    double s = (double)difftime(time_end, time_start);
    double ms = 1000.0 * s;   // s * 10^3
    double µs = 1000.0 * ms; // s * 10^6
    double ns = 1000.0 * µs; // s * 10^9

    printf("Time: %lf seconds %lf milliseconds %lf microseconds %lf nanoseconds.\n", s, ms, µs, ns);

    return 0;
}