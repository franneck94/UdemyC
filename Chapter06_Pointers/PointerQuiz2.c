#include <stdio.h>

void sub(int *v, int s)
{
    *v = *v - s;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = ((*p_e) * (*p_e)) + ((*p_f) * (*p_f));
    sub(p_e, 2);
    p_d = &b;
    p_f = &a;
    sub(p_f, *p_e);

    *p_e = *p_d + *p_f;

    // Check what the output is, without running this file!
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
