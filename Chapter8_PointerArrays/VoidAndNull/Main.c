#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = NULL;
    printf("0x%x\n", a);
    // ...
    a = (int *)malloc(sizeof(int));
    *a = 10; // some computations
    printf("%d\n", *a);
    printf("0x%x\n", a);
    free(a);
    a = NULL;

    if (a != NULL)
    {
        printf("%d\n", *a);
    }
}
