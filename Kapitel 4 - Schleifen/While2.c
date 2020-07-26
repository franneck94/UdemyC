#include <stdio.h>

int main()
{
    int n_rounds = 10;
    int i = 0;

    while(1)
    {
        printf("i = %d\n", i);
        i++;

        if (i >= n_rounds)
        {
            break;
        }
    }

    printf("%d", i);

    return 0;
}