#ifndef VECTOR_H
#define VECTOR_H

struct Vector
{
    float *data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: Vector*
// Name: createVector
// Parameters: unsigned int length, float value
// Declaration
Vector *createVector(unsigned int length, float value);

// Return Type: void
// Name: deleteVector
// Parameters: Vector* vec
// Declaration
void deleteVector(Vector *vec);

// Return Type: void
// Name: printVector
// Parameters: Vector* vec
// Declaration
void printVector(Vector *vec);

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
// Declaration
float meanVector(Vector *vec);

// Return Type: float
// Name: minVector
// Parameters: Vector* vec
// Declaration
float minVector(Vector *vec);

// Return Type: float
// Name: maxVector
// Parameters: Vector* vec
// Declaration
float maxVector(Vector *vec);

#endif