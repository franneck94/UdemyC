#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint32_t length = 4;
    int32_t *arr = (int32_t *)malloc(length * sizeof(int32_t));

    for (uint32_t i = 0; i < length; i++)
    {
        arr[i] = (int32_t)i;
    }

    for (uint32_t i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }

    // free(arr);
}
