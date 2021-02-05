#include <stdarg.h>
#include <stdio.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                putchar('%');
            }
            else if (*format == 'c')
            {
                char value = va_arg(args, int);
                putchar(value);
            }
            else if (*format == 'd')
            {
                int value = va_arg(args, int);
                printf("%d", value);
            }
            else if (*format == 'u')
            {
                unsigned int value = va_arg(args, unsigned int);
                printf("%u", value);
            }
            else if (*format == 'f')
            {
                float value = va_arg(args, double);
                printf("%f", value);
            }
            else if (*format == 'l')
            {
                format++;

                if (*format == 'f')
                {
                    double value = va_arg(args, double);
                    printf("%lf", value);
                }
            }
            else if (*format == 's')
            {
                char *value = va_arg(args, char*);

                while (*value != '\0')
                {
                    putchar(*value);

                    value++;
                }
            }
            else
            {
                /* do nothing. */
            }
        }
        else
        {
            putchar(*format);
        }

        format++;
    }

    va_end(args);
}

int main(void)
{
    my_printf("%c, %d, %u, %f, %lf, %s\n", 'a', -12, 115, 1337.5f, -1337.3, "Jan");

    return 0;
}
