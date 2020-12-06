#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

Vector* createVector(unsigned int length, float value)
{
    Vector* vec = (Vector*)malloc(sizeof(Vector));
    float* vec_data = (float*)malloc(length * sizeof(float));

    for (int i = 0; i < length; i++)
    {
        vec_data[i] = value;
    }

    vec->data = vec_data;
    vec->length = length;

    return vec;
}

void deleteVector(Vector* vec)
{
    free(vec->data);
    free(vec);
}

Vector* addVectors(Vector* vec1, Vector* vec2)
{
    Vector* vec_result = createVector(vec1->length, 0.0);

    for (int i = 0; i < vec1->length; i++)
    {
        vec_result->data[i] = vec1->data[i] + vec2->data[i];
    }

    return vec_result;
}

Vector* subVectors(Vector* vec1, Vector* vec2)
{
    Vector* vec_result = createVector(vec1->length, 0.0);

    for (int i = 0; i < vec1->length; i++)
    {
        vec_result->data[i] = vec1->data[i] - vec2->data[i];
    }

    return vec_result;
}

double dotVectors(Vector* vec1, Vector* vec2)
{
    double result = 0.0;

    for (int i = 0; i < vec1->length; i++)
    {
        result += vec1->data[i] * vec2->data[i];
    }

    return result;
}

Vector* multiplyScalarVector(double scalar, Vector* vec)
{
    Vector* vec_result = createVector(vec->length, 0.0);

    for (int i = 0; i < vec->length; i++)
    {
        vec_result->data[i] = vec->data[i] * scalar;
    }

    return vec_result;
}

Vector* divideScalarVector(double scalar, Vector* vec)
{
    Vector* vec_result = createVector(vec->length, 0.0);

    for (int i = 0; i < vec->length; i++)
    {
        vec_result->data[i] = vec->data[i] / scalar;
    }

    return vec_result;
}

void printVector(Vector* vec)
{
    for (int i = 0; i < vec->length; i++)
    {
        printf("%f\n", vec->data[i]);
    }

    printf("\n");
}

float meanVector(Vector* vec)
{
    float sum = 0.0f;

    for (int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / vec->length;
    return mean;
}

float minVector(Vector* vec)
{
    float min;

    for (int i = 0; i < vec->length; i++)
    {
        if (i == 0)
        {
            min = vec->data[i];
        }

        if (vec->data[i] < min)
        {
            min = vec->data[i];
        }
    }

    return min;
}

float maxVector(Vector* vec)
{
    float max;

    for (int i = 0; i < vec->length; i++)
    {
        if (i == 0)
        {
            max = vec->data[i];
        }

        if (vec->data[i] > max)
        {
            max = vec->data[i];
        }
    }

    return max;
}

int readInVectorData(Vector* vec, const char* path)
{
    FILE* fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < vec->length; i++)
    {
        fscanf(fp, "%f", &vec->data[i]);
    }

    fclose(fp);
    return 0;
}

int writeOutVectorData(Vector* vec, const char* path)
{
    FILE* fp = fopen(path, "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < vec->length; i++)
    {
        if (i < vec->length - 1)
            fprintf(fp, "%f\n", vec->data[i]);
        else
            fprintf(fp, "%f", vec->data[i]);
    }

    fclose(fp);
    return 0;
}