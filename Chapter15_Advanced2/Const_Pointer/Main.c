#include <stdio.h>

// Stack, variable value
void function1(int value)
{
    // value++; // OKAY
    printf("function1: %d\n", value);
}

// Stack, const value
void function2(const int value)
{
    // value++; // FORBIDDEN
    printf("function2: %d\n", value);
}

// Pointer, variable value, variable adress
void function3(int *value)
{
    // (*value)++; // OKAY
    printf("function3: %d\n", *value);
}

// Pointer, const value, variable adress
// const DataType * VariableName
void function4(const int *value)
{
    // (*value)++; // FORBIDDEN
    int b = -2;
    value = &b;

    printf("function4: %d\n", *value);
}

// Pointer, variable value, const adress
// DataType * const VariableName
void function5(int *const value)
{
    (*value)++; // OKAY
    // int b = -2; // FORBIDDEN
    // value = &b; // FORBIDDEN

    printf("function5: %d\n", *value);
}

// Pointer, const value, const adress
// combination of function andf function5
// const DataType * const VariableName
// ReadOnly
void function6(const int *const value)
{
    // (*value)++; // FORBIDDEN
    // int b = -2; // FORBIDDEN
    // value = &b; // FORBIDDEN

    printf("function6: %d\n", *value);
}

int main()
{
    int a = 2;

    // Stack
    //function1(a);
    //function2(a);
    // Pointer
    //function3(&a);
    function4(&a);
    function5(&a);
    function6(&a);

    return 0;
}
