#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[] = {'J', 'a', 'n', '\0'};
    char name2[4] = {'J', 'a', 'n', '\0'};
    char name3[] = "Jan";
    char name4[32] = {'\0'};
    char *name5 = (char *)malloc(32 * sizeof(char));
    name5[0] = 'J';
    name5[1] = 'a';
    name5[2] = 'n';
    name5[3] = '\0';

    for (unsigned int i = 0; i < 3; i++)
    {
        printf("%c", name5[i]);
    }
    printf("\n");

    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%s\n", name3);
    printf("%s\n", name4);
    printf("%s\n", name5);

    free(name5);
    name5 = NULL;

    return 0;
}
