#include <stdio.h>

static int run_cnt = 0;

int my_computation(int a, int b)
{
    static int cnt = 1;
    printf("%d\n", cnt);

    int result = a * b;

    cnt++;
    return result;
}

int main()
{
    int a = 1;
    int b = 2;

    for (int i = 0; i < 3; i++)
    {
        a = my_computation(a, b);
    }

    return 0;
}
