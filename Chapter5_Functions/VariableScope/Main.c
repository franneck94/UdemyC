#include <stdio.h>
#include <math.h>

//#include "FunctionsBib.h"

int a = 3; // global variable

void func()
{
    int b = 2; // local variable

    printf("(FUNC) a = %d\n", a);
    printf("(FUNC) b = %d\n", b);
}
 
int main()
{
    int c = 1;
    
    printf("(MAIN) a = %d\n", a);
    printf("(FUNC) c = %d\n", c);
    func();

    return 0;
}