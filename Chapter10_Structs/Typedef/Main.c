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

typedef struct Friend Friend_t;
typedef unsigned int uint32_t;

void printFriend(Friend_t *friend)
{
    printf("%s %s's birthday is: %u.%u.%u.\n", friend->prename, friend->name, friend->day, friend->month, friend->year);
}

void changeName(Friend_t *friend, char *new_name)
{
    strncpy(friend->name, new_name, 50);
}

int main()
{
    Friend_t jan = {.name = "Schaffranek", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u};
    Friend_t lara = {.name = "Hausmann", .prename = "Lara", .year = 1992u, .month = 12u, .day = 12u};

    Friend_t friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    printFriend(&friend_book[1]);
    changeName(&friend_book[1], "Haussmann");
    printFriend(&friend_book[1]);

    return 0;
}
