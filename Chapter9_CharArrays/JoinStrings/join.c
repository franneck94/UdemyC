#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    const size_t default_len = 100;
    char *result = malloc(default_len * sizeof(char));
    result[0] = '\0';

    int index = 0;
    while (list[index] != NULL)
    {
        if (index > 0)
        {
            strcat(result, delimiter);
        }

        strcat(result, list[index]);
        ++index;
    }

    const size_t used_result_len = strlen(result) + 1;
    result = realloc(result, used_result_len);

    if (index == 0)
    {
        free(result);
        return NULL;
    }

    return result;
}

int main()
{
    char *list1[] = {NULL};
    char *list2[] = {"Clara", NULL};
    char *list3[] = {"Clara", "Florian", NULL};
    char *list4[] = {"Clara", "Florian", "Jan", NULL};
    char *s;

    printf("List1: %s\n", s = join(" -> ", list1));
    free(s);
    printf("List2: %s\n", s = join(" -> ", list2));
    free(s);
    printf("List3: %s\n", s = join(" -> ", list3));
    free(s);
    printf("List4: %s\n", s = join(" -> ", list4));
    free(s);

    return 0;
}