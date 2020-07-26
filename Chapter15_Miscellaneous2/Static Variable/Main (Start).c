#include <stdio.h>

int my_computation(int a, int b)
{
    int result = a * b;

    return result;
}

int main()
{
    int a = 1;
    int b = 2;

    for(int i = 0; i < 10; i++)
    {
        a = my_computation(a, b);
    }

    return 0;
}