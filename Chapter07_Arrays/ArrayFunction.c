#include <stdio.h>

float meanArray(int* array, unsigned int length)
{
    float sum = 0.0F;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum / length;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float mean = meanArray(array, 10);
    printf("Mean: %f\n", mean);

    int array2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    float mean2 = meanArray(array2, 8);
    printf("Mean: %f\n", mean2);

    return 0;
}
