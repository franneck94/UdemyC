#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int length = 3;

    int *array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = (int)(i);
    }

    // ....

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}
