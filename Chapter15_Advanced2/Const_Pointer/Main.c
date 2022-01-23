#include <stdio.h>

void function1(int *value)
{
    (*value)++;

    printf("function1: %d\n", *value);
}

void function2(const int *value)
{
    // (*value)++;

    printf("function2: %d\n", *value);
}

void function3(int *const value)
{
    (*value)++;

    // int b = 2;
    // value = &b;

    printf("function3: %d\n", *value);
}

void function4(const int *const value)
{
    // (*value)++;

    // int b = 2;
    // value = &b;

    printf("function4: %d\n", *value);
}

int main()
{
    int val = 2;

    // Pointer
    function1(&val);
    function2(&val);
    function3(&val);
    function4(&val);

    return 0;
}
