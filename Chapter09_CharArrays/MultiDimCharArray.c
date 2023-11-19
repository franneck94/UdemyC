#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **createFriendBook(unsigned int number_friends)
{
    char **friends = (char **)malloc(number_friends * sizeof(char *));

    if (NULL == friends)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20 * sizeof(char));
    }

    return friends;
}

char **freeFriendBook(char **friends, unsigned int num_friends)
{
    for (unsigned int i = 0; i < num_friends; i++)
    {
        free(friends[i]);
    }

    free(friends);
    return NULL;
}

int main()
{
    unsigned int number_friends = 3;
    char **friends = createFriendBook(number_friends);

    strcpy(friends[0], "Jan Schaffranek");
    strcpy(friends[1], "Peter Lustig");
    strcpy(friends[2], "Hans Meier");

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
    }

    friends = freeFriendBook(friends, number_friends);

    return 0;
}
