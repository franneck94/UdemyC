#include <stdio.h>

// Stack, variable value
void function1(int val)
{
    // val++; // OKAY
    printf("function1: %d\n", val);
}

// Stack, const value
void function2(const int val)
{
    // val++; // FORBIDDEN
    printf("function2: %d\n", val);
}

// Pointer, variable value, variable adress
void function3(int * val)
{
    // (*val)++; // OKAY
    printf("function3: %d\n", *val);
}

// Pointer, const value, variable adress
// const DataType * VariableName
void function4(const int * val)
{
    // (*val)++; // FORBIDDEN
    int b = -2;
    val = &b;

    printf("function4: %d\n", *val);
}

// Pointer, variable value, const adress
// DataType * const VariableName
void function5(int * const val)
{
    (*val)++; // OKAY
    // int b = -2; // FORBIDDEN
    // val = &b; // FORBIDDEN

    printf("function5: %d\n", *val);
}

// Pointer, const value, const adress
// combination of function andf function5
// const DataType * const VariableName
// ReadOnly
void function6(const int * const val)
{
    // (*val)++; // FORBIDDEN
    // int b = -2; // FORBIDDEN
    // val = &b; // FORBIDDEN

    printf("function6: %d\n", *val);
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