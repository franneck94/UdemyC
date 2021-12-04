#ifndef VECTOR_H
#define VECTOR_H

/**********************/
/* DEFINES AND TYPES  */
/**********************/
typedef struct Vector
{
    float *data;
    unsigned int length;
} Vector;

/**********************/
/*   MAIN FUNCTIONS   */
/**********************/

float *createArray(const unsigned int length, const float value);

float *freeArray(float *array);

Vector *createVector(const unsigned int length, const float value);

Vector *freeVector(Vector *vector);

/**********************/
/*  I/O FUNCTIONS     */
/**********************/

int readInVectorData(Vector *vec, const char *filepath);

int writeOutVectorData(Vector *vec, const char *filepath);

void printVector(const Vector *vector);

/**********************/
/*  MATH. FUNCTIONS   */
/**********************/

Vector *addVectors(const Vector *vec1, const Vector *vec2);

Vector *subVectors(const Vector *vec1, const Vector *vec2);

float multiplyVectors(const Vector *vec1, const Vector *vec2);

Vector *multiplyScalar(const Vector *vec, const float scalar);

Vector *divideScalar(const Vector *vec, const float scalar);

float meanVector(const Vector *vector);

float minVector(const Vector *vector);

float maxVector(const Vector *vector);

#endif // VECTOR_H
