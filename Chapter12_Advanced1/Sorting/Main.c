#include <stdio.h>
#include <stdlib.h>

int comp(const void *value1, const void *value2)
{
    int left = *((int *)value1);
    int right = *((int *)value2);

    if (left > right)
        return 1;
    if (right > left)
        return -1;
    else
        return 0;
}

int main()
{
    int *data = (int *)malloc(4 * sizeof(int));
    data[0] = -2;
    data[1] = 3;
    data[2] = -1;
    data[3] = 12;

    qsort(data, 4, sizeof(int), comp);

    for (int i = 0; i < 4; i++)
    {
        printf("Data[%d] = %d\n", i, data[i]);
    }
}