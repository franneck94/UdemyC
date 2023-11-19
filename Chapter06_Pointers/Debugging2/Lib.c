#include <stdio.h>

#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a integer number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

int max(int number_a, int number_b)
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

int min(int number_a, int number_b)
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

float mean(int number_a, int number_b)
{
    float mean = (number_a + number_b) / 2.0f;

    return mean;
}
