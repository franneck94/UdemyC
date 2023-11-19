#include <stdio.h>

int main()
{
    unsigned int number;
    printf("Please enter a valid unsigned integer!\n");
    scanf("%u", &number);
    unsigned int number_mod_three = (number % 3);

    if (number_mod_three == 0)
    {
        printf("The number you entered is div. by 3!\n");
    }
    else
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder is %u", number_mod_three);
    }

    return 0;
}
