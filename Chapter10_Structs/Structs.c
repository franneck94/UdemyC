#include <stdio.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};


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

    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);
    printf("%u\n", jan.year);

    printf("%s\n", peter.name);
    printf("%s\n", peter.prename);
    printf("%u\n", peter.year);

    printf("%s\n", hans.name);
    printf("%s\n", hans.prename);
    printf("%u\n", hans.year);

    return 0;
}
