#include <stdio.h>
#include <stdlib.h>

struct Friend
{
    char *name;
    char *prename;
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

    friend->name = new_name;
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
