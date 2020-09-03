#include <stdio.h>

int main()
{
    enum Drink
    {
        cola,
        icetea,
        water,
        coffee
    };

    int selection;
    printf("Pls enter a valid code for any drink!\n");
    scanf("%d", &selection);

    switch (selection)
    {
    case cola:
        printf("Cola!\n");
        break;
    case icetea:
        printf("IceTea!\n");
        break;
    case water:
        printf("Water!\n");
        break;
    case coffee:
        printf("Coffee!\n");
        break;
    default:
        printf("You did not enter a valid number!");
    }

    return 0;
}