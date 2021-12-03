#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t string_length(char *str)
{
    if (str == NULL)
    {
        return 0;
    }

    size_t i = 0;

    while (*str != '\0')
    {
        str++;
        i++;
    }

    return i;
}

int main()
{
    char name[32] = "Jan";
    char lastname[16] = "Schaffranek";
    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    size_t name_length = string_length(name);
    size_t lastname_length = string_length(lastname);

    printf("name lenght: %lu\n", name_length);
    printf("lastname lenght: %lu\n", lastname_length);

    return 0;
}
