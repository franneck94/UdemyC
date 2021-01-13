#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[] = "Jan Schaffranek";

    printf("strlen: %zu\n", strlen(name));
    printf("strchr: %s\n", strchr(name, 'S'));
    printf("strstr: %s\n", strstr(name, "Schaff"));

    char dst[strlen(name) + 1];
    strcpy(dst, name);
    printf("strcpy: %s\n", dst);

    char prename[] = "Jan ";
    char lastname[] = "Schaffranek";
    printf("strcat: %s\n", strcat(prename, lastname));

    return 0;
}