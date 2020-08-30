#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    char buchstabe_A = 'A';

    printf("Buchstabe: %d\n", buchstabe_A);
    printf("Buchstabe: %c\n", buchstabe_A);

    char buchstabe_Z = buchstabe_A + 25;

    printf("Buchstabe: %d\n", buchstabe_Z);
    printf("Buchstabe: %c\n", buchstabe_Z);

    char buchstabe_B = 66;

    printf("Buchstabe: %d\n", buchstabe_B);
    printf("Buchstabe: %c\n", buchstabe_B);

    return 0;
}