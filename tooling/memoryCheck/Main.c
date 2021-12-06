#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Calloc
    int length = 4;
    int *arr = (int *)calloc(length, sizeof(int));
    // int *arr = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    // Realloc
    length = 6;
    arr = (int *)realloc(arr, length * sizeof(int));
    printf("\n");

    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
}
