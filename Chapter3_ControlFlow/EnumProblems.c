#include <stdio.h>

enum Drink
{
    DRINK_COLA = 0,
    DRINK_ICETEA = 1,
    DRINK_WATER = 2,
    DRINK_COFFEE = 3
};

enum Caffeine
{
    CAFFEINE_COFFEE = 0,
    CAFFEINE_ENERGY = 1
};

int main()
{
    int selection;
    printf("Please enter a valid drink: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case DRINK_COLA:
    {
        printf("You chosed a Cola!");
        break;
    }
    case DRINK_ICETEA:
    {
        printf("You chosed an Icetea!");
        break;
    }
    case DRINK_WATER:
    {
        printf("You chosed a Water!");
        break;
    }
    case DRINK_COFFEE:
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
