#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

int main()
{
    Vector *v1 = createVector(3, 1);
    Vector *v2 = createVector(3, -1);

    assert(v1 != NULL);
    assert(v2 != NULL);

    assert(v1->data[0] == 1);
    assert(v1->data[1] == 1);
    assert(v1->data[2] == 1);
    assert(v1->length == 3);

    assert(v2->data[0] == -1);
    assert(v2->data[1] == -1);
    assert(v2->data[2] == -1);
    assert(v2->length == 3);

    Vector *v3 = addVectors(v1, v2);
    printVector(v3);

    assert(v3 != NULL);
    assert(v3->data[0] == 0);
    assert(v3->data[1] == 0);
    assert(v3->data[2] == 0);
    assert(v3->length == 3);

    Vector *v4 = subVectors(v1, v2);
    printVector(v4);

    assert(v4 != NULL);
    assert(v4->data[0] == 2);
    assert(v4->data[1] == 2);
    assert(v4->data[2] == 2);
    assert(v4->length == 3);

    float scalar = 2.0f;
    Vector *v5 = multiplyScalar(v1, scalar);
    printVector(v5);

    assert(v5 != NULL);
    assert(v5->data[0] == 2);
    assert(v5->data[1] == 2);
    assert(v5->data[2] == 2);
    assert(v5->length == 3);

    Vector *v6 = divideScalar(v1, scalar);
    printVector(v6);

    assert(v6 != NULL);
    assert(v6->data[0] == 0.5F);
    assert(v6->data[1] == 0.5F);
    assert(v6->data[2] == 0.5F);
    assert(v6->length == 3);

    (void)writeOutVectorData(v6, "v6.txt");
    Vector *v6_copy = createVector(3, 0);
    (void)readInVectorData(v6_copy, "v6.txt");
    printVector(v6_copy);

    float result = multiplyVectors(v1, v2);
    printf("%f\n", result);

    freeVector(v1);
    freeVector(v2);
    freeVector(v3);
    freeVector(v4);
    freeVector(v5);
    freeVector(v6);
    freeVector(v6_copy);

    return 0;
}
