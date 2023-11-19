#include <float.h>
#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

/**********************/
/*   MAIN FUNCTIONS   */
/**********************/

float *createArray(const unsigned int length, const float value)
{
    float *data = (float *)malloc(length * sizeof(float));

    if (NULL == data)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = value;
    }

    return data;
}

float *freeArray(float *array)
{
    if (NULL == array)
    {
        return NULL;
    }

    free(array);

    return NULL;
}

Vector *createVector(const unsigned int length, const float value)
{
    Vector *result = (Vector *)malloc(sizeof(Vector));

    if (NULL == result)
    {
        return NULL;
    }

    result->data = createArray(length, value);

    if (result->data == NULL)
    {
        free(result);
        return NULL;
    }

    result->length = length;

    return result;
}

Vector *freeVector(Vector *vector)
{
    if (NULL == vector)
    {
        return NULL;
    }

    if (vector->data != NULL)
    {
        free(vector->data);
        vector->data = NULL;
    }

    free(vector);

    return NULL;
}

/**********************/
/*  I/O FUNCTIONS     */
/**********************/

int readInVectorData(Vector *vec, const char *filepath)
{
    if (NULL == vec || NULL == filepath)
    {
        return 1;
    }

    FILE *fp = fopen(filepath, "r");

    if (NULL == fp)
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
    if (NULL == vec || NULL == filepath)
    {
        return 1;
    }

    FILE *fp = fopen(filepath, "w");

    if (NULL == fp)
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

void printVector(const Vector *vector)
{
    if (vector->data == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < vector->length; i++)
    {
        printf("%f\n", vector->data[i]);
    }

    printf("\n");
}

/**********************/
/*  MATH. FUNCTIONS   */
/**********************/

Vector *addVectors(const Vector *vec1, const Vector *vec2)
{
    if (NULL == vec1 || NULL == vec2 || vec1->data == NULL ||
        vec2->data == NULL || vec1->length != vec2->length)
    {
        return NULL;
    }

    Vector *result = createVector(vec1->length, 0.0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] + vec2->data[i];
    }

    return result;
}

Vector *subVectors(const Vector *vec1, const Vector *vec2)
{
    if (NULL == vec1 || NULL == vec2 || vec1->data == NULL ||
        vec2->data == NULL || vec1->length != vec2->length)
    {
        return NULL;
    }

    Vector *result = createVector(vec1->length, 0.0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] - vec2->data[i];
    }

    return result;
}

float multiplyVectors(const Vector *vec1, const Vector *vec2)
{
    if (NULL == vec1 || NULL == vec2 || vec1->data == NULL ||
        vec2->data == NULL || vec1->length != vec2->length)
    {
        return 0.0f;
    }

    float result = 0.0f;

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result += vec1->data[i] * vec2->data[i];
    }

    return result;
}

Vector *multiplyScalar(const Vector *vec, const float scalar)
{
    if (NULL == vec || vec->data == NULL)
    {
        return NULL;
    }

    Vector *result = createVector(vec->length, 0.0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] * scalar;
    }

    return result;
}

Vector *divideScalar(const Vector *vec, const float scalar)
{
    if (NULL == vec || vec->data == NULL || scalar == 0.0f)
    {
        return NULL;
    }

    Vector *result = createVector(vec->length, 0.0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] / scalar;
    }

    return result;
}

float meanVector(const Vector *vector)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < vector->length; i++)
    {
        sum += vector->data[i];
    }

    return (float)(sum) / (float)(vector->length);
}

float minVector(const Vector *vector)
{
    if (vector->length == 0)
    {
        return FLT_MAX;
    }

    float current_min = vector->data[0];

    for (unsigned int i = 1; i < vector->length; i++)
    {
        if (vector->data[i] < current_min)
        {
            current_min = vector->data[i];
        }
    }

    return current_min;
}

float maxVector(const Vector *vector)
{
    if (vector->length == 0)
    {
        return FLT_MIN;
    }

    float current_max = vector->data[0];

    for (unsigned int i = 1; i < vector->length; i++)
    {
        if (vector->data[i] > current_max)
        {
            current_max = vector->data[i];
        }
    }

    return current_max;
}
