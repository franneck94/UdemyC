#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

// Call by Value:
// Local copy of the input !!!value!!!
float add(float z_func) // 0x61ff10
{
    printf("Add: 0x%x\n", &z_func);
    z_func += 3.0f;

    return z_func;
}

// Call by Reference:
// Input is the argument variable
void sub(float* z_func) // 0x61ff2c
{
    printf("Sub: 0x%x\n", z_func);
    *z_func = *z_func - 3.0f;
}
 
int main()
{
    float z_main = 1.0f; // 0x61ff2c
    printf("Main Addr.: 0x%x\n", &z_main);

    // Call by Value
    z_main = add(z_main);
    printf("Main Val.: %f\n", z_main);

    // Call by Reference
    sub(&z_main);
    printf("Main Val.: %f\n", z_main);

    return 0;
}