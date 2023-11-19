#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            ++format;

            if (*format == 'c')
            {
                char value = (char)va_arg(args, int);
                putchar(value);
            }
            else if (*format == 's')
            {
                char *value = va_arg(args, char *);
                fputs(value, stdout);
            }
            else if (*format == 'd')
            {
                int value = va_arg(args, int);
                char buffer[48];
                memset(buffer, '\0', 48);
                snprintf(buffer, 48, "%d", value);
                fputs(buffer, stdout);
            }
            else if (*format == 'f')
            {
                float value = (float)va_arg(args, double);
                char buffer[64];
                memset(buffer, '\0', 64);
                snprintf(buffer, 64, "%.16f", value);
                fputs(buffer, stdout);
            }
            else if (*format == 'l' && *(++format) == 'f')
            {
                double value = va_arg(args, double);
                char buffer[64];
                memset(buffer, '\0', 64);
                snprintf(buffer, 64, "%.16lf", value);
                fputs(buffer, stdout);
            }
            else
            {
                putchar(*format);
            }
        }
        else
        {
            putchar(*format);
        }

        ++format;
    }

    va_end(args);
}

int main()
{
    printf("%c %d %s %f %lf\n", 'a', 90, "abc", 10.3F, 10.3);
    my_printf("%c %d %s %f %lf\n", 'a', 90, "abc", 10.3F, 10.3);

    return 0;
}
