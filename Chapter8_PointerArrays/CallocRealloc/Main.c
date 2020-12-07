#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Malloc: Random/Garbage values
    // Calloc: All Values to 0
    int length = 4;
    int *arr = (int *)calloc(length, length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    // Realloc:
    length = 6;
    arr = (int *)realloc(arr, length);
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
}