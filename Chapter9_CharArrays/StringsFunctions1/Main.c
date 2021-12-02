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

    // int strncmp(char *str1, char *str2, int n);
    int same_name_01 = strcmp(friends[0], friends[1]);
    int same_name_02 = strcmp(friends[0], friends[2]);
    int same_name_12 = strcmp(friends[1], friends[2]);

    // 0: Same Strings, !=0: Str1 and Str2 not the same
    printf("same 01: %d\n", same_name_01);
    printf("same 02: %d\n", same_name_02);
    printf("same 12: %d\n", same_name_12);

    char *found_01 = strstr(friends[0], "an");
    char *found_02 = strstr(friends[1], " Lust");
    char *found_03 = strstr(friends[2], "s M");

    printf("same 01: %s\n", found_01);
    printf("same 02: %s\n", found_02);
    printf("same 12: %s\n", found_03);

    for (int i = 0; i < number_friends; i++)
    {
        free(friends[i]);
        friends[i] = NULL;
    }

    free(friends);
    friends = NULL;

    return 0;
}
