#include <stdio.h>
#include <stdlib.h>

#define ARR_DTYPE double

int comp(const void *value1, const void *value2)
{
    ARR_DTYPE left = *((ARR_DTYPE *)value1);
    ARR_DTYPE right = *((ARR_DTYPE *)value2);

    if (left > right)
    {
        return 1;
    }
    else if (right > left)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

#define ARR_LEN 4U

int main()
{
    ARR_DTYPE data[ARR_LEN] = {-2.0, 3.0, -1.0, 12.0};

    qsort(&data, ARR_LEN, sizeof(ARR_DTYPE), comp);

    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("data[%d] = %f\n", i, data[i]);
    }

    return 0;
}
