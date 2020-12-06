#ifndef VECTOR_H
#define VECTOR_H

struct Vector
{
    float* data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: Vector*
// Name: createVector
// Parameters: unsigned int length, float value
Vector* createVector(unsigned int length, float value);

// Return Type: void
// Name: deleteVector
// Parameters: Vector* vec
void deleteVector(Vector* vec);

// Return Type: Vector*
// Name: addVectors
// Parameters: Vector* vec1, Vector* vec2
Vector* addVectors(Vector* vec1, Vector* vec2);

// Return Type: Vector*
// Name: subVectors
// Parameters: Vector* vec1, Vector* vec2
Vector* subVectors(Vector* vec1, Vector* vec2);

// Return Type: double
// Name: dotVectors
// Parameters: Vector* vec1, Vector* vec2
double dotVectors(Vector* vec1, Vector* vec2);

// Return Type: Vector*
// Name: multiplyScalarVector
// Parameters: double scalar, Vector* vec
Vector* multiplyScalarVector(double scalar, Vector* vec);

// Return Type: Vector*
// Name: divideScalarVector
// Parameters: double scalar, Vector* vec
Vector* divideScalarVector(double scalar, Vector* vec);

// Return Type: void
// Name: printVector
// Parameters: Vector* vec
void printVector(Vector* vec);

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
float meanVector(Vector* vec);

// Return Type: float
// Name: minVector
// Parameters: Vector* vec
float minVector(Vector* vec);

// Return Type: float
// Name: maxVector
// Parameters: Vector* vec
float maxVector(Vector* vec);

#endif