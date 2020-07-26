#include <stdio.h>

#include "FunctionsBib.h"

int my_computation(int a, int b)
{
    static int cnt = 1;
    printf("%d\n", cnt);

    int result = a * b;

    cnt++;
    return result;
}