#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"
#include "Vector.h"

int main()
{
    Vector* v1 = createVector(3, 1.0);
    printVector(v1);

    deleteVector(v1);

    return 0;
}