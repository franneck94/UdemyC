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

//          STRUKTUR-NAME       TYPEDEF-NAME
typedef struct Friend FR;
typedef float vector_3d[3];

void printFriend(FR f)
{
    printf("%s, %s's birthday is: %d.%d.%d.\n", f.prename, f.name, f.day, f.month, f.year);
}

void changeName(FR *f, char *new_name)
{
    f->name = new_name;
}

int main()
{
    struct Friend jan = { "Schaffranek", "Jan", 1994, 02, 24 };
    struct Friend lara = { "Hausmann", "Lara", 1992, 12, 12 };

    struct Friend friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    printFriend(jan);
    printFriend(lara);

    changeName(&jan, "Schafranek");
    changeName(&lara, "Haussmann");

    printFriend(jan);
    printFriend(lara);

    return 0;
}