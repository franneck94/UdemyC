#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// -5, -2, -1, 1, 2, 3, 4

// -2, -1, 1, -5, 2, 3, 4
void bubblesort(int *array, int length)
{
    int i, j, temp;

    for (i = 1; i < length; i++)
    {
        for (j = 0; j < length - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int comp(const void *elem1, const void *elem2)
{
    int l = *((int *)elem1);
    int r = *((int *)elem2);

    if (l > r)
        return 1;
    if (r > l)
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