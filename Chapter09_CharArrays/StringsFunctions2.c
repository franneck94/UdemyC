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

    strncpy(friends[0], "Jan Schaffranek", 20);
    strncpy(friends[1], "Peter Lustig", 20);
    strncpy(friends[2], "Hans Meier", 20);

    strncat(friends[0], " Dr.", 5);

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
    }

    size_t length0 = strlen(friends[0]);
    size_t length1 = strlen(friends[1]);
    size_t length2 = strlen(friends[2]);

    printf("%llu\n", length0);
    printf("%llu\n", length1);
    printf("%llu\n", length2);

    int compare0 = strncmp(friends[0], friends[1], 20);
    int compare1 = strncmp(friends[0], friends[2], 20);
    int compare2 = strncmp(friends[1], friends[2], 20);

    printf("%d\n", compare0);
    printf("%d\n", compare1);
    printf("%d\n", compare2);

    char *found_char0 = strchr(friends[0], 'n');
    char *found_char1 = strrchr(friends[0], 'n');

    if (NULL != found_char0)
    {
        printf("%s\n", found_char0);
    }
    if (NULL != found_char1)
    {
        printf("%s\n", found_char1);
    }

    char *found_substr = strstr(friends[1], "Jan");

    if (NULL != found_substr)
    {
        printf("%s\n", found_substr);
    }

    char *token = strtok(friends[0], " ");

    if (NULL != token)
    {
        printf("%s\n", token);
    }

    friends = freeFriendBook(friends, number_friends);

    return 0;
}
