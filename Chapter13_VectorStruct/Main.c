#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

int main()
{
    Vector *v1 = createArray(3, 1);
    Vector *v2 = createArray(3, -1);

    Vector *v3 = addVectors(v1, v2);
    printVector(v3);
    Vector *v4 = subVectors(v1, v2);
    printVector(v4);

    float scalar = 2.0f;
    Vector *v5 = multiplyScalar(v1, scalar);
    printVector(v5);
    Vector *v6 = divideScalar(v1, scalar);
    printVector(v6);

    (void)writeOutVectorData(v6, "v6.txt");
    Vector *v6_copy = createArray(3, 0);
    (void)readInVectorData(v6_copy, "v6.txt");
    printVector(v6_copy);

    float result = multiplyVectors(v1, v2);
    printf("%f\n", result);

    v1 = freeArray(v1);
    v2 = freeArray(v2);
    v3 = freeArray(v3);
    v4 = freeArray(v4);
    v5 = freeArray(v5);
    v6 = freeArray(v6);
    v6_copy = freeArray(v6_copy);

    return 0;
}
