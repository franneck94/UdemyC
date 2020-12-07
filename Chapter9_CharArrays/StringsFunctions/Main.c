#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    int number_friends = 3;

    char **friends;
    friends = (char **)malloc(3 * sizeof(char *));

    for (int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20 * sizeof(char));
    }

    friends[0] = "Hans Schaffranek";
    friends[1] = "Peter Lustig";
    friends[2] = "Hans Meier";

    // int strncmp(char *str1, char *str2, int n);
    int same_name_01 = strncmp(friends[0], friends[1], 4);
    int same_name_02 = strncmp(friends[0], friends[2], 4);
    int same_name_12 = strncmp(friends[1], friends[2], 4);

    // 0: Same Strings
    // !=0: Str1 and Str2 not the same

    printf("same 01: %d\n", same_name_01);
    printf("same 02: %d\n", same_name_02);
    printf("same 12: %d\n", same_name_12);

    char *name_new;
    name_new = (char *)malloc(20 * sizeof(char));

    strcpy(name_new, friends[1]);
    printf("Name new: %s", name_new);

    return 0;
}