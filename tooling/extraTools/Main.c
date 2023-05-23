#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint32_t length = 4;
    int32_t *arr = (int32_t *)malloc(length * sizeof(int32_t));

    if (NULL == arr)
    {
        return 1;
    }

    for (uint32_t i = 0; i < length + 1; i++)
    {
        arr[i] = (int32_t)i;
        printf("%d\n", arr[i]);
    }

    free(arr);
}
