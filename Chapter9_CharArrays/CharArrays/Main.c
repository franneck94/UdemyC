#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Char Array (Stack)
    char name1[4] = { 'J', 'a', 'n', '\0' };
    
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", name1[i]);
    }

    char name2[] = { 'J', 'a', 'n', '\0' };

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", name2[i]);
    }

    char name3[] = "Jan";

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", name3[i]);
    }

    // Char Array (Heap)
    char *name4 = (char *)malloc(4 * sizeof(char));
    name4[0] = 'J';
    name4[1] = 'a';
    name4[2] = 'n';
    name4[4] = '\0';

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", name4[i]);
    }

    printf("%s", name4);

    return 0;
}