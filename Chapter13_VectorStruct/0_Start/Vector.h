#ifndef VECTOR_H
#define VECTOR_H

struct Vector
{
    int *data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
float meanVector(Vector *vec);

// Return Type: int
// Name: minVector
// Parameters: Vector* vec
int minVector(Vector *vec);

// Return Type: int
// Name: maxVector
// Parameters: Vector* vec
int maxVector(Vector *vec);

// Return Type: int*
// Name: createVector
// Parameters: unsigned int length, int value
int *createVector(unsigned int length, int value);

#endif // FUNCTIONS_BIB_H