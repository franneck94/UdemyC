#ifndef VECTOR_H
#define VECTOR_H

/**********************/
/* DEFINES AND TYPES  */
/**********************/
struct Vector
{
    float *data;
    unsigned int length;
};

typedef struct Vector Vector;

/**********************/
/*   MAIN FUNCTIONS   */
/**********************/

Vector *createVector(const unsigned int length, const float value);

void *freeVector(Vector *vec);

/**********************/
/*  I/O FUNCTIONS     */
/**********************/

int readInVectorData(Vector *vec, const char *filepath);

int writeOutVectorData(Vector *vec, const char *filepath);

void printVector(const Vector *vec);

/**********************/
/*  MATH. FUNCTIONS   */
/**********************/

Vector *addVectors(const Vector *vec1, const Vector *vec2);

Vector *subVectors(const Vector *vec1, const Vector *vec2);

float multiplyVectors(const Vector *vec1, const Vector *vec2);

Vector *multiplyScalar(const Vector *vec, const float scalar);

Vector *divideScalar(const Vector *vec, const float scalar);

float meanVector(const Vector *vec);

float minVector(const Vector *vec);

float maxVector(const Vector *vec);

#endif // VECTOR_H
