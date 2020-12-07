#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(sizeof(int));
    *a = 10; // some computations
    printf("%d\n", *a);
    free(a);
    a = NULL;
    // printf("%d\n", *a);

    int num = 10;
    int *p_int = &num;

    void *p_void = &num;
    printf("%d\n", *((int *)p_void));
}