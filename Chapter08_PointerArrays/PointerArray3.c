#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 42;
    int b = 1337;
    int c = -10;
    int *array = (int *)malloc(3 * sizeof(int));

    array[0] = a;
    array[1] = b;
    array[2] = c;

    free(array);
    array = NULL;

    return 0;
}
