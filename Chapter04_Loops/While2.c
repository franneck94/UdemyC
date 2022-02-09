#include <stdio.h>

int main()
{
    int num_iterations = 3;
    int i = 0;

    while (1)
    {
        printf("Hello World!\n");

        i++;

        if (i >= num_iterations)
        {
            break;
        }
    }

    return 0;
}
