#include <stdio.h>

enum Beverage
{
    NO_BEVERAGE,
    BEVERAGE_WATER,
    BEVERAGE_COLA,
    BEVERAGE_FANTA,
    BEVERAGE_SPRITE,
    BEVERAGE_COFFEE, // int COFFEE = 5;
};

enum CaffeineBeverage
{
    CAFFEINE_BEVERAGE_COFFEE, // int COFFEE = 0;
    CAFFEINE_BEVERAGE_ENERGY_DRINK,
};

int main()
{
    enum Beverage selected_beverage = NO_BEVERAGE;
    printf("Select a beverage:\nWater (1), Cola (2), Fanta (3)\nSprite (4), "
           "Coffee (5)\n");
    scanf("%d", &selected_beverage);

    switch (selected_beverage)
    {
    case BEVERAGE_WATER:
    {
        printf("You selected a water\n");
        break;
    }
    case BEVERAGE_COLA:
    {
        printf("You selected a Cola\n");
        break;
    }
    case BEVERAGE_FANTA:
    {
        printf("You selected a Fanta\n");
        break;
    }
    case BEVERAGE_SPRITE:
    {
        printf("You selected a Sprite\n");
        break;
    }
    case BEVERAGE_COFFEE:
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
