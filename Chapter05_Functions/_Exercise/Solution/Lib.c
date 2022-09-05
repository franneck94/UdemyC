#include <stdio.h>

#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a integer number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

float mean(int a, int b)
{
    float result = (a + b) / 2.0f;

    return result;
}
