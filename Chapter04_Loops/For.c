#include <stdio.h>

int main()
{
    int num_iterations = 10;

    for (int i = 0; i < num_iterations; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");

    for (int i = 0; i < num_iterations; i += 2)
    {
        printf("%d\n", i);
    }

    printf("\n");

    for (int i = num_iterations - 1; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
