#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(sizeof(int));
    // DO SMTH
    free(a);
    a = NULL;

    int num = 10;
    void *p;
    p = &num;

    printf("%d", *((int *)p));
}