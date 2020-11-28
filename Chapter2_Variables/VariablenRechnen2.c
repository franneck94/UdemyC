#include <stdio.h>

int main()
{
    float a = 5.0;
    int nfache = 10;

    //a = a * nfache;
    a -= nfache;
    printf("A: %f", a);

    int b = 0;
    printf("%d\n", b);
    b = b + 1;
    printf("%d\n", b);
    b += 1;
    printf("%d\n", b);

    return 0;
}