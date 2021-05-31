#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gets_sc(char *buffer, int n)
{
    int count = 0;
    char c;

    if (n <= 0)
    {
        return -1;
    }

    while (--n && (c = fgetc(stdin)) != '\n')
    {
        buffer[count++] = c;
    }

    buffer[count] = '\0';

    return (count != 0) ? count : -1;
}

int main()
{
    int buffer_size = 32;
    char input[32] = { '\0' };
    char output1[32] = { '\0' };
    char output2[32] = { '\0' };

    printf("Enter a string : ");

    // gets(input); /* Bad */

    fgets(input, buffer_size, stdin); /* Okay */
    input[strcspn(input, "\n")] = '\0';

    // if (gets_sc(input, buffer_size) == -1) /* Good */
    // {
    //     return 1;
    // }

    printf("input = %s\n", input);

    int i = -1;
    int j = -1;

    if (sscanf(input, "%d, %d", &i, &j) != 2)
    {
        return 1;
    }

    printf("i = %d\n", i);
    printf("j = %d\n", j);

    sprintf(output1, "%s output1_append", input); /* Bad */
    printf("output1 = %s\n", output1);

    snprintf(output2, buffer_size, "%s output2_append", input); /* Good */
    printf("output2 = %s\n", output2);

    return 0;
}
