#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = NULL;
    printf("0x%p\n", a);
    // ...
    a = (int *)malloc(sizeof(int));
    *a = 10; // some computations
    printf("%d\n", *a);
    printf("0x%p\n", a);
    free(a);
    a = NULL;

    if (NULL != a)
    {
        printf("%d\n", *a);
    }
}
