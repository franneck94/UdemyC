#include <stdio.h>
#include <stdlib.h>

struct Friend
{
    char *name;
    char *prename;
    uint32_t year;
    uint32_t month;
    uint32_t day;
};

typedef struct Friend Friend_t;
typedef unsigned int uint32_t;

void printFriend(Friend_t *friend)
{
    printf("%s %s's birthday is: %u.%u.%u.\n",
        friend->prename,
        friend->name,
        friend->day,
        friend->month,
        friend->year
    );
}

void changeName(Friend_t *friend, char *new_name)
{
    friend->name = new_name;
}

int main()
{
    Friend_t jan = { .name = "Schaffranek", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u };
    Friend_t lara = { .name = "Hausmann", .prename = "Lara", .year = 1992, .month = 12, .day = 12 };

    Friend_t friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    printFriend(&friend_book[1]);
    changeName(&friend_book[1], "Haussmann");
    printFriend(&friend_book[1]);

    return 0;
}
