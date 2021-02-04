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
    my_printf("%c --- %c\n", 'a', 'b');

    return 0;
}

