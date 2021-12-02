#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    FRIENDSHIP_ORIGIN_SCHOOL,
    FRIENDSHIP_ORIGIN_FAMILY,
    FRIENDSHIP_ORIGIN_OTHER,
} FriendshipOrigin_t;

typedef struct
{
    uint32_t year;
    uint32_t month;
    uint32_t day;
} Date_t;

typedef struct
{
    char *name;
    char *prename;
    Date_t birthday;
    FriendshipOrigin_t origin;
} Friend_t;

void printFriend(Friend_t *friend)
{
    printf("%s %s's birthday is: %u.%u.%u.\n",
           friend->prename,
           friend->name,
           friend->birthday.day,
           friend->birthday.month,
           friend->birthday.year);
}

void changeName(Friend_t *friend, char *new_name)
{
    friend->name = new_name;
}

int main()
{
    Friend_t jan = {.name = "Schaffranek",
                    .prename = "Jan",
                    .birthday = {.year = 1994u, .month = 2u, .day = 24u},
                    .origin = FRIENDSHIP_ORIGIN_FAMILY};
    Friend_t lara = {.name = "Hausmann",
                     .prename = "Lara",
                     .birthday = {.year = 1992, .month = 12, .day = 12},
                     .origin = FRIENDSHIP_ORIGIN_SCHOOL};

    Friend_t friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    printFriend(&friend_book[1]);
    changeName(&friend_book[1], "Haussmann");
    printFriend(&friend_book[1]);

    return 0;
}
