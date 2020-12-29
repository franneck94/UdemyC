#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    Vector *v1 = createVector(3, 1);
    Vector *v2 = createVector(3, -1);

    Vector *v3 = addVectors(v1, v2);
    printVector(v3);
    Vector *v4 = subVectors(v1, v2);
    printVector(v4);

    float scalar = 2.0f;
    Vector *v5 = multiplyScalar(v1, scalar);
    printVector(v5);
    Vector *v6 = divideScalar(v1, scalar);
    printVector(v6);

    writeOutVectorData(v6, "data.txt");

    float result = multiplyVectors(v1, v2);
    printf("%f\n", result);

    freeVector(v1);
    freeVector(v2);
    freeVector(v3);
    freeVector(v4);
    freeVector(v5);
    freeVector(v6);

    return 0;
}