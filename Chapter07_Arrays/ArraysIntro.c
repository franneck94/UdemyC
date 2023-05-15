#include <stdio.h>

int main()
{
    int numbers[4]; // array with length 4

    // index is an unsigned integer
    // Index Set = {0, 1, 2, 3}
    for (unsigned int i = 0; i < 4; i++)
    {
        numbers[i] = 1337; // left of =: write
    }

    for (unsigned int i = 0; i < 4; i++)
    {
        printf("%d\n", numbers[i]); // read
    }

    int numbers2[5] = {13, 24, 35, 46, 57};

    for (unsigned int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers2[i]); // read
    }

    return 0;
}
