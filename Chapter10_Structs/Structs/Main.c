#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

struct Friend
{
    char *name;
    char *prename;
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

int main()
{
    struct Friend jan = {"Schaffranek", "Jan", 1994, 02, 24};
    struct Friend lara = {"Hausmann", "Lara", 1992, 12, 12};

    printf("%d\n", jan.year);
    printf("%d\n", jan.month);
    printf("%d\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    jan.year = 1993;
    jan.month = 03;
    jan.day = 24;
    jan.name = "Schafranek";
    jan.prename = "Yan";

    printf("%d\n", jan.year);
    printf("%d\n", jan.month);
    printf("%d\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    struct Friend friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    return 0;
}