#include <stdio.h>

// call by value
float add1(float v)
{
    printf("mem addr of v: %p\n", &v);

    v = v + 1.0f;
    return v;
}

// call by reference1
void add2(float *v)
{
    printf("mem addr of v: %p\n", v);

    *v = *v + 1.0f; // dereference
}

int main()
{
    float v_main = 0.0f;
    printf("mem addr of v_main: %p\n", &v_main);

    printf("%f\n", v_main);
    v_main = add1(v_main);
    printf("%f\n", v_main);

    add2(&v_main);
    printf("%f\n", v_main);

    return 0;
}
