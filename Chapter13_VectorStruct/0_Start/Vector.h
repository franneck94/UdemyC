#ifndef VECTOR_H
#define VECTOR_H

struct Vector
{
    int* data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
// Declaration
float meanVector(Vector* vec);

// Return Type: int
// Name: minVector
// Parameters: Vector* vec
// Declaration
int minVector(Vector* vec);

// Return Type: int
// Name: maxVector
// Parameters: Vector* vec
// Declaration
int maxVector(Vector* vec);

// Return Type: int*
// Name: createVector
// Parameters: unsigned int length, int value
// Declaration
int* createVector(unsigned int length, int value);

#endif