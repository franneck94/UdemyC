#include <stdio.h>

#include "Lib.h"

static int my_inner_computation(int a, int b)
{
    static int cnt = 1;
    printf("%d\n", cnt);

    int result = a * b;

    cnt++;
    return result;
}

int my_outer_computation(int a, int b)
{
    return my_inner_computation(a, b);
}
