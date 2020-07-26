#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"
#include "Vector.h"

int main()
{
    Vector* v1 = createVector(3, 1.0);
    printf("v1 = \n");
    printVector(v1);

    Vector* v2 = createVector(3, 2.0);
    printf("v2 = \n");
    printVector(v2);

    Vector* v3 = addVectors(v1, v2);
    printf("v3 = \n");
    printVector(v3);

    Vector* v4 = subVectors(v3, v2);
    printf("v4 = \n");
    printVector(v4);

    // = 1 * 2 + 1 * 2 + 1 * 2 = 3 * 2 = 6
    double vector_dot = dotVectors(v1 ,v2);
    printf("Dot = %f\n", vector_dot);

    Vector* v5 = multiplyScalarVector(2.0, v1);
    printf("v5 = \n");
    printVector(v5);

    Vector* v6 = divideScalarVector(2.0, v5);
    printf("v6 = \n");
    printVector(v6);

    writeOutVectorData(v6, "C:/Users/Jan/Dropbox/_Programmieren/Udemy C Kurs/Kapitel 13 - Projekt/data.txt");

    deleteVector(v1);
    deleteVector(v2);
    deleteVector(v3);
    deleteVector(v4);
    deleteVector(v5);
    deleteVector(v6);

    return 0;
}