#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(sizeof(int));
    int b = 1337;
    int c = -10;
    int *array = (int *)malloc(3 * sizeof(int));

    *a = b;
    array[0] = b;
    array[1] = c;
    array[2] = *a;

    free(array);
    array = NULL;
    free(a);
    a = NULL;

    return 0;
}
