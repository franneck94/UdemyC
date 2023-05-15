#include <stdio.h>
#include <stdlib.h>

int *createArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (NULL == array)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

int *freeArray(int *array)
{
    if (NULL != array)
    {
        free(array);
    }

    return NULL;
}

int main()
{
    unsigned int length = 3;

    int *array = createArray(length, 1);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }

    array = freeArray(array);

    return 0;
}
