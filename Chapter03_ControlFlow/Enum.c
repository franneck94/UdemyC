#include <stdio.h>

enum Drink
{
    COLA = 0,
    ICETEA = 1,
    WATER = 2,
    COFFEE = 3
};

int main()
{
    int selection;
    printf("Please enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case COLA:
    {
        printf("You chosed a Cola!");
        break;
    }
    case ICETEA:
    {
        printf("You chosed an Icetea!");
        break;
    }
    case WATER:
    {
        printf("You chosed a Water!");
        break;
    }
    case COFFEE:
    {
        printf("You chosed a Coffee!");
        break;
    }
    default:
    {
        printf("You did not enter a valid drink!");
    }
    }

    return 0;
}
