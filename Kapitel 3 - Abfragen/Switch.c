#include <stdio.h>

int main()
{
    int cola = 0;
    int icetea = 1;
    int water = 2;
    int coffee = 3;

    int selection;
    printf("Pls enter a valid code for any drink!\n");
    scanf("%d", &selection);

    switch(selection)
    {
        case 0: printf("Cola!\n"); break;
        case 1: printf("IceTea!\n"); break;
        case 2: printf("Water!\n"); break;
        case 3: printf("Coffee!\n"); break;
        default: printf("You did not enter a valid number!");
    }

    return 0;
}