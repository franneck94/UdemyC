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

int main()
{
    struct Friend jan = { .name = "Schaffranek", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u };
    struct Friend lara = { .name = "Hausmann", .prename = "Lara", .year = 1992, .month = 12, .day = 12 };

    printf("%u\n", jan.year);
    printf("%u\n", jan.month);
    printf("%u\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    jan.name = "Schafranek";

    printf("%u\n", jan.year);
    printf("%u\n", jan.month);
    printf("%u\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    struct Friend friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;

    return 0;
}
