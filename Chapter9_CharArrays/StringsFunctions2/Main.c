#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number_friends = 3;

    char **friends;
    friends = (char **)malloc(3 * sizeof(char *));

    for (int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20 * sizeof(char));
    }

    strncpy(friends[0], "Jan Schaffranek", 20);
    strncpy(friends[1], "Peter Lustig", 20);
    strncpy(friends[2], "Hans Meier", 20);

    char *found1 = strchr(friends[0], 'S');
    char *found2 = strchr(friends[1], 'u');
    char *found3 = strchr(friends[2], 'e');
    printf("found 01: %s\n", found1);
    printf("found 02: %s\n", found2);
    printf("found 12: %s\n", found3);

    char *found4 = strrchr(friends[0], 'a');
    char *found5 = strrchr(friends[1], 'e');
    char *found6 = strrchr(friends[2], 'e');
    printf("found 01: %s\n", found4);
    printf("found 02: %s\n", found5);
    printf("found 12: %s\n", found6);

    for (int i = 0; i < number_friends; i++)
    {
        free(friends[i]);
        friends[i] = NULL;
    }

    free(friends);
    friends = NULL;

    return 0;
}
