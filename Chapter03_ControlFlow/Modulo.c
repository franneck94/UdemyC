#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;

    int division = a / b;
    int remainder = a % b;

    printf("a / b = %d\n", division);
    printf("a %% b = %d\n", remainder);

    return 0;
}
