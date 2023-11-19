# Exercise

Hallo Leute!

Willkommen bei der nächsten Programmier-Übung in diesem Kurs.

## Aufgaben der Programmierübung

Ihr sollt den Code vom dritten Variadic Functions Video so anpassen, dass auch %f und %lf für unsere eigene printf Funktion implementiert wird.  

Dies ist der Code aus dem genannten Video:

```c
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
```
