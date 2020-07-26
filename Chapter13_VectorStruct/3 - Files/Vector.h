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
// Declaration
Vector* createVector(unsigned int length, float value);

// Return Type: void
// Name: deleteVector
// Parameters: Vector* vec
// Declaration
void deleteVector(Vector* vec);

// Return Type: Vector*
// Name: addVectors
// Parameters: Vector* vec1, Vector* vec2
// Declaration
Vector* addVectors(Vector* vec1, Vector* vec2);

// Return Type: Vector*
// Name: subVectors
// Parameters: Vector* vec1, Vector* vec2
// Declaration
Vector* subVectors(Vector* vec1, Vector* vec2);

// Return Type: double
// Name: dotVectors
// Parameters: Vector* vec1, Vector* vec2
// Declaration
double dotVectors(Vector* vec1, Vector* vec2);

// Return Type: Vector*
// Name: multiplyScalarVector
// Parameters: double scalar, Vector* vec
// Declaration
Vector* multiplyScalarVector(double scalar, Vector* vec);

// Return Type: Vector*
// Name: divideScalarVector
// Parameters: double scalar, Vector* vec
// Declaration
Vector* divideScalarVector(double scalar, Vector* vec);

// Return Type: void
// Name: printVector
// Parameters: Vector* vec
// Declaration
void printVector(Vector* vec);

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
// Declaration
float meanVector(Vector* vec);

// Return Type: float
// Name: minVector
// Parameters: Vector* vec
// Declaration
float minVector(Vector* vec);

// Return Type: float
// Name: maxVector
// Parameters: Vector* vec
// Declaration
float maxVector(Vector* vec);

// Return Type: int
// Name: readInVectorData
// Parameters: Vector* vec, const char* path
// Declaration
int readInVectorData(Vector* vec, const char* path);

// Return Type: int
// Name: writeOutVectorData
// Parameters: Vector* vec, const char* path
// Declaration
int writeOutVectorData(Vector* vec, const char* path);

#endif