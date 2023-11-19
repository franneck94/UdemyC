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
                sprintf(buffer, "%d", value);
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
    printf("%c %d %s\n", 'a', 90, "abc");
    my_printf("%c %d %s\n", 'a', 90, "abc");

    return 0;
}
