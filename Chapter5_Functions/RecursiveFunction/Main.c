#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    // 1! = 1
    // 2! = 2 * 1
    // 3! = 3 * 2 * 1
    // 4! = 4 * 3 * 2 * 1     = 24
    // 5! = 5 * 4 * 3 * 2 * 1 = 120

    // 5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1
    unsigned int a = getNumberFromUser();
    unsigned int a_fac = factorial(a);

    printf("%d! = %d", a, a_fac);

    return 0;
}