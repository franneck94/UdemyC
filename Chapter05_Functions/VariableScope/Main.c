#include <stdio.h>

int a = 1;

void func()
{
    int b = 2;

    printf("(FUNC) a = %d\n", a);
    printf("(FUNC) b = %d\n", b);

    if (1)
    {
        int d = 4;

        printf("(FUNC) a = %d\n", a);
        printf("(FUNC) b = %d\n", b);
        printf("(FUNC) d = %d\n", d);
    }
}

int main()
{
    int c = 3;

    func();

    printf("(MAIN) a = %d\n", a);
    printf("(MAIN) c = %d\n", c);

    return 0;
}
