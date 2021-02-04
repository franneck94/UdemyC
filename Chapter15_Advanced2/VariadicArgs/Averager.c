#include <stdarg.h>
#include <stdio.h>

double average(int count, ...)
{
    double sum = 0.0;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) 
    {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum / count;
}

int main(void)
{
    printf("%f\n", average(3, 1, 2, 3));

    return 0;
}
