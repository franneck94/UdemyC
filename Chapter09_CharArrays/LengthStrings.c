#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t string_len(char *str)
{
    if (NULL == str)
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
    char name[] = "Jan";
    char lastname[] = "Schaffranek";

    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    size_t name_len0 = string_len(name);
    size_t name_len1 = strlen(name);

    size_t lastname_len0 = string_len(lastname);
    size_t lastname_len1 = strlen(lastname);

    printf("Name Length 0: %llu, 1: %llu\n", name_len0, name_len1);
    printf("Last Name Length 0: %llu, 1: %llu\n", lastname_len0, lastname_len1);

    return 0;
}
