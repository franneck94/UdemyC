#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

void printFriend(struct Friend *friend)
{
    printf("%s %s's birthday is: %u.%u.%u.\n", friend->prename, friend->name, friend->day, friend->month, friend->year);
}

void changeName(struct Friend *friend, char *new_name)
{
    strncpy(friend->name, new_name, 50);
}

int main()
{
    struct Friend jan = {.name = "Schaffranek", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u};
    struct Friend lara = {.name = "Hausmann", .prename = "Lara", .year = 1992u, .month = 12u, .day = 12u};

    struct Friend friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    printFriend(&friend_book[1]);
    changeName(&friend_book[1], "Haussmann");
    printFriend(&friend_book[1]);

    return 0;
}
