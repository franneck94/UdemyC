#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *delimiter, char **list)
{
    if (NULL == delimiter || NULL == list || list[0] == NULL)
    {
        return NULL;
    }

    size_t delimiter_len = strlen(delimiter);
    size_t current_input_len = strlen(list[0]);

    char *result = (char *)malloc(current_input_len * sizeof(char));

    if (NULL == result)
    {
        return NULL;
    }

    memset(result, 0, current_input_len);

    int i = 0;
    while (list[i] != NULL)
    {
        size_t current_result_len;
        if (i > 0)
        {
            current_result_len = strlen(result);
        }
        else
        {
            current_result_len = current_input_len;
        }

        current_input_len = strlen(list[i]);
        size_t new_result_len = current_input_len;
        if (i > 0)
        {
            new_result_len += delimiter_len;
            new_result_len += current_result_len;
        }

        if (new_result_len > current_result_len)
        {
            result = realloc(result, new_result_len + 1);
            current_result_len = new_result_len;
        }

        if (i > 0)
        {
            strncat(result, delimiter, current_result_len);
        }

        strncat(result, list[i], current_result_len);
        i++;
    }

    return result;
}

int main()
{
    char *list1[] = {NULL};
    char *list2[] = {"Clara", NULL};
    char *list3[] = {"Clara", "Florian", NULL};
    char *list4[] = {"Clara", "Florian", "Jan", NULL};
    char *s = NULL;

    s = join(" -> ", list1); // ""
    if (NULL != s)
    {
        printf("List1: %s\n", s);
        free(s);
    }

    s = join(" -> ", list2); // "Clara"
    if (NULL != s)
    {
        printf("List2: %s\n", s);
        free(s);
    }

    s = join(" -> ", list3); // "Clara -> Florian"
    if (NULL != s)
    {
        printf("List3: %s\n", s);
        free(s);
    }

    s = join(" -> ", list4); // "Clara -> Florian -> Jan"
    if (NULL != s)
    {
        printf("List4: %s\n", s);
        free(s);
    }

    return 0;
}
