#include <stdio.h>
#include <time.h>

void do_something()
{
    volatile double value = 0.0;

    for (int i = 0; i < 100000000; i++)
    {
        value *= i;
    }
}

int main()
{
    time_t time_start = time(NULL);
    do_something();
    time_t time_end = time(NULL);

    double s = (double)difftime(time_end, time_start);
    printf("Seconds: %lf\n", s);

    printf("Timestamp: %d\n", (int)time_end);
    printf("Time Format: %s\n", ctime(&time_end));

    return 0;
}
