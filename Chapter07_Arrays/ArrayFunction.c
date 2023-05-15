#include <stdio.h>

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10};

    float mean = meanArray(array, 10);

    printf("%f\n", mean);

    return 0;
}
