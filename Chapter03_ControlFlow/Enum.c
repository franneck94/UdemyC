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

    printf("You selected %d\n", selected_beverage);

    return 0;
}
