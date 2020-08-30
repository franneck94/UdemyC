#include <stdio.h>

int main()
{
    int n_rounds = 10;
    int i = 1;

    while(i <= n_rounds)
    {
        printf("You are in round %d\n", i);
        i++;
    }

    printf("%d", i);

    return 0;
}