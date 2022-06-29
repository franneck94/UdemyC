#include <stdio.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

void print_friend(struct Friend *friend)
{
    printf("%s %s\n", friend->prename, friend->name);
    printf("%u.%u.%u\n", friend->day, friend->month, friend->year);
}

int main()
{
    struct Friend jan = {.name = "Schaffranek",
                         .prename = "Jan",
                         .year = 1994U,
                         .month = 2U,
                         .day = 24U};
    struct Friend peter = {.name = "Lustig",
                           .prename = "Peter",
                           .year = 1959U,
                           .month = 8U,
                           .day = 13};
    struct Friend hans = {.name = "Meier",
                          .prename = "Hans",
                          .year = 1970U,
                          .month = 12U,
                          .day = 31};
    struct Friend friend_book[] = {jan, peter, hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);

    return 0;
}
