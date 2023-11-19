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

int strings_equal(char *str1, char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        return 0;
    }

    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {
            return 0;
        }

        str1++;
        str2++;
    }

    if ((*str1 != '\0') || (*str2 != '\0'))
    {
        return 0;
    }

    return 1;
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

    int equal1 = strings_equal(name, lastname);
    int equal2 = strings_equal(name, name);
    int equal3 = strings_equal(lastname, lastname);

    printf("Name == Lastname = %d\n", equal1);
    printf("Name == Name  = %d\n", equal2);
    printf("Lastname == Lastname = %d\n", equal3);

    char test[] = "Ja";
    int equal4 = strings_equal(name, test);
    printf("Name == test = %d\n", equal4);

    return 0;
}
