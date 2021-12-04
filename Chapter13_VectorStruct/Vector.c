#include <float.h>
#include <stdio.h>
#include <stdlib.h>


#include "Vector.h"

/**********************/
/*   MAIN FUNCTIONS   */
/**********************/

Vector *createArray(const unsigned int length, const float value)
{
    Vector *vec = (Vector *)malloc(sizeof(Vector));

    if (vec == NULL)
    {
        return NULL;
    }

    vec->data = (float *)malloc(length * sizeof(float));
    vec->length = length;

    if (vec->data == NULL)
    {
        free(vec);
        vec = NULL;

        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        vec->data[i] = value;
    }

    return vec;
}

void *freeArray(Vector *vec)
{
    if (vec == NULL)
    {
        return NULL;
    }

    if (vec->data != NULL)
    {
        free(vec->data);
        vec->data = NULL;
    }

    free(vec);
    vec = NULL;

    return NULL;
}

/**********************/
/*  I/O FUNCTIONS     */
/**********************/

int readInVectorData(Vector *vec, const char *filepath)
{
    if (vec == NULL || filepath == NULL)
    {
        return 1;
    }

    FILE *fp = fopen(filepath, "r");

    if (fp == NULL)
    {
        return 1;
    }

    for (unsigned int i = 0; i < vec->length; i++)
    {
        fscanf(fp, "%f", &vec->data[i]);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}

int writeOutVectorData(Vector *vec, const char *filepath)
{
    if (vec == NULL || filepath == NULL)
    {
        return 1;
    }

    FILE *fp = fopen(filepath, "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (unsigned int i = 0; i < vec->length; i++)
    {
        if (i < vec->length - 1)
        {
            fprintf(fp, "%f\n", vec->data[i]);
        }
        else
        {
            fprintf(fp, "%f", vec->data[i]);
        }
    }

    fclose(fp);
    fp = NULL;

    return 0;
}

void printVector(const Vector *vec)
{
    if (vec == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < vec->length; i++)
    {
        printf("%f\n", vec->data[i]);
    }

    printf("\n");
}

/**********************/
/*  MATH. FUNCTIONS   */
/**********************/
Vector *addVectors(const Vector *vec1, const Vector *vec2)
{
    if (vec1 == NULL || vec2 == NULL)
    {
        return NULL;
    }

    Vector *result = createArray(vec1->length, 0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] + vec2->data[i];
    }

    return result;
}

Vector *subVectors(const Vector *vec1, const Vector *vec2)
{
    if (vec1 == NULL || vec2 == NULL)
    {
        return NULL;
    }

    Vector *result = createArray(vec1->length, 0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] - vec2->data[i];
    }

    return result;
}

float multiplyVectors(const Vector *vec1, const Vector *vec2)
{
    float result = 0.0f;

    if (vec1 == NULL || vec2 == NULL)
    {
        return result;
    }

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result += vec1->data[i] * vec2->data[i];
    }

    return result;
}

Vector *multiplyScalar(const Vector *vec, const float scalar)
{
    if (vec == NULL)
    {
        return NULL;
    }

    Vector *result = createArray(vec->length, 0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] * scalar;
    }

    return result;
}

Vector *divideScalar(const Vector *vec, const float scalar)
{
    if (vec == NULL)
    {
        return NULL;
    }

    Vector *result = createArray(vec->length, 0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] / scalar;
    }

    return result;
}

float meanVector(const Vector *vec)
{
    float sum = 0.0f;

    if (vec == NULL)
    {
        return sum;
    }

    for (unsigned int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / (float)vec->length;
    return mean;
}

float minVector(const Vector *vec)
{
    float min = FLT_MAX;

    if (vec == NULL)
    {
        return min;
    }

    min = vec->data[0];

    for (unsigned int i = 1; i < vec->length; i++)
    {
        if (vec->data[i] < min)
        {
            min = vec->data[i];
        }
    }

    return min;
}

float maxVector(const Vector *vec)
{
    float max = FLT_MIN;

    if (vec == NULL)
    {
        return max;
    }

    max = vec->data[0];

    for (unsigned int i = 1; i < vec->length; i++)
    {
        if (vec->data[i] > max)
        {
            max = vec->data[i];
        }
    }

    return max;
}
