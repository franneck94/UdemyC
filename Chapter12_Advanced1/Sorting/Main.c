#include <stdio.h>
#include <stdlib.h>

int comp(const void *value1, const void *value2)
{
    int left = *((int *)value1);
    int right = *((int *)value2);

    if (left > right)
    {
        return -1;
    }
    else if (right > left)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int data[4] = {-2, 3, -1, 12};

    qsort(&data, 4, sizeof(int), comp);

    for (int i = 0; i < 4; i++)
    {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}
