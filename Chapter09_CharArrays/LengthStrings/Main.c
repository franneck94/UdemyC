#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t string_length(char *str)
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

    size_t name_length0 = string_length(name);
    size_t name_length1 = strlen(name);

    size_t lastname_length0 = string_length(lastname);
    size_t lastname_length1 = strlen(lastname);

    printf("Name Length 0: %lu, 1: %lu\n", name_length0, name_length1);
    printf("Last Name Length 0: %lu, 1: %lu\n",
           lastname_length0,
           lastname_length1);

    return 0;
}
