#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 4;
    int *arr = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    length = 6;
    arr = (int *)realloc(arr, length * sizeof(int));
    printf("\n");

    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    free(arr);
}
