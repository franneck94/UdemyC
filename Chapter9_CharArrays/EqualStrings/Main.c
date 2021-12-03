#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strings_euqal(char *str1, char *str2)
{
    if (str1 == NULL || str2 == NULL)
    {
        return 0;
    }

    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return 0;
        }

        str1++;
        str2++;
    }

    if (*str1 != '\0' || *str2 != '\0')
    {
        return 0;
    }

    return 1;
}

int main()
{
    char name[32] = "Jan";
    char lastname[16] = "Jan ";
    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    int equal1 = strings_euqal(name, lastname);
    int equal2 = strings_euqal(lastname, name);
    int equal3 = strings_euqal(name, name);
    int equal4 = strings_euqal(lastname, lastname);

    printf("equal1: %d\n", equal1);
    printf("equal2: %d\n", equal2);
    printf("equal3: %d\n", equal3);
    printf("equal4: %d\n", equal4);

    return 0;
}
