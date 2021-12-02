#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number_friends = 3;

    char **friends = (char **)malloc(number_friends * sizeof(char *));

    for (int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20 * sizeof(char));
    }

    strncpy(friends[0], "Jan Schaffranek", 20);
    strncpy(friends[1], "Peter Lustig", 20);
    strncpy(friends[2], "Hans Meier", 20);

    for (int i = 0; i < number_friends; i++)
    {
        printf("Friend: %s\n", friends[i]);
    }

    // Clean-up
    for (int i = 0; i < number_friends; i++)
    {
        free(friends[i]);
        friends[i] = NULL;
    }

    free(friends);
    friends = NULL;

    return 0;
}
