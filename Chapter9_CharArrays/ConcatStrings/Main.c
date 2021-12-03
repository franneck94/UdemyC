#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char *dst, char *src, size_t n)
{
    if (dst == NULL || src == NULL)
    {
        return NULL;
    }

    if (n == 0)
    {
        return dst;
    }

    size_t i = 0;
    size_t dst_length = strlen(dst);

    dst += dst_length;

    while (*src != '\0' && i < n - 1)
    {
        *dst = *src;
        dst++;
        src++;

        i++;
    }

    *dst = '\0';

    return dst;
}

int main()
{
    char name[32] = "Jan";
    char lastname[16] = "Schaffranek";
    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    concatenate(name, lastname, 16);

    printf("name: %s\n", name);
    printf("lastname: %s\n", lastname);

    return 0;
}
