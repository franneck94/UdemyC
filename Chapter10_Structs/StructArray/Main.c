#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

typedef struct
{
    char *name;
    char *prename;
    unsigned int year;
    unsigned int month;
    unsigned int day;
} Friend;

void printFriend(Friend *friend)
{
    printf("%s, %s's birthday is: %d.%d.%d.\n",
        friend->prename,
        friend->name,
        friend->day,
        friend->month,
        friend->year);
}

void changeName(Friend *friend, char *new_name)
{
    friend->name = new_name;
}

void printFriends(Friend **friends, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        printFriend(friends[i]);
    }
}

int main()
{
    Friend jan = { "Schaffranek", "Jan", 1994, 02, 24 };
    Friend lara = { "Hausmann", "Lara", 1992, 12, 12 };

    Friend *friend_book[2];
    friend_book[0] = &jan;
    friend_book[1] = &lara;

    printFriends(friend_book, 2);

    changeName(&jan, "Schafranek");
    changeName(&lara, "Haussmann");

    printFriends(friend_book, 2);

    return 0;
}