#include <stdio.h>


void f(int v)
{
    printf("%d\n", v);
}

int main()
{
    int i = 0;
    printf("%d\n", i++); // post
    printf("%d\n", ++i); // pre

    i = 0;
    f(i++);
    f(++i);

    i = 0;
    i++;
    ++i;
    printf("%d\n", i);

    for (int k = 0; k < 3; k++)
    {
        printf("%d\n", k);
    }

    for (int k = 0; k < 3; ++k)
    {
        printf("%d\n", k);
    }

    return 0;
}
