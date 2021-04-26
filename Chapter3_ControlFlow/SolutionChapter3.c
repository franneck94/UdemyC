#include <stdio.h>

int main()
{
    unsigned int number;
    printf("Please enter a valid unsigned integer!\n");
    scanf("%u", &number);
    unsigned int number_mod_three = (number % 3);

    if (number_mod_three == 0)
    {
        printf("The number you entered is div. with 3!\n");
    }
    else if (number_mod_three == 1)
    {
        printf("The number you entered is not div. with 3!\n");
        printf("The remainder is %u", number_mod_three);
    }
    else if (number_mod_three == 2)
    {
        printf("The number you entered is not div. with 3!\n");
        printf("The remainder is %u", number_mod_three);
    }

    return 0;
}
