#include <stdio.h>

enum Beverage
{
    NO_BEVERAGE,
    WATER,
    COLA,
    FANTA,
    SPRITE,
    COFFEE,
};

int main()
{
    enum Beverage selected_beverage = NO_BEVERAGE;
    printf("Select a beverage:\nWater (1), Cola (2), Fanta (3)\nSprite (4), "
           "Coffee (5)\n");
    scanf("%d", &selected_beverage);

    switch (selected_beverage)
    {
    case WATER:
    {
        printf("You selected a water\n");
        break;
    }
    case COLA:
    {
        printf("You selected a Cola\n");
        break;
    }
    case FANTA:
    {
        printf("You selected a Fanta\n");
        break;
    }
    case SPRITE:
    {
        printf("You selected a Sprite\n");
        break;
    }
    case COFFEE:
    {
        printf("You selected a Coffee\n");
        break;
    }
    default:
    {
        printf("You selected an invalid Beverage!\n");
        break;
    }
    }

    return 0;
}
