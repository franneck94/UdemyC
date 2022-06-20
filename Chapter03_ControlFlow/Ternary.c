#include <stdio.h>

int main()
{
    int age1 = 28;
    int age2 = 56;

    // Standard If
    int older_age1;
    if (age1 > age2)
        older_age1 = age1;
    else
        older_age1 = age2;
    printf("older_age1: %d\n", older_age1);

    // Ternary
    int older_age2 = age1 > age2 ? age1 : age2;
    printf("older_age2: %d\n", older_age2);

    return 0;
}
