#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

/**********************/
/*  HELPER FUNCTIONS  */
/**********************/

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}


Vector *createVector(unsigned int length, int value)
{
    Vector *vec = (Vector *)malloc(sizeof(Vector));
    float *data = (float *)malloc(length * sizeof(float));

    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = value;
    }

    vec->data = data;
    vec->length = length;

    return vec;
}


void printVector(Vector *vec)
{
    for (unsigned int i = 0; i < vec->length; i++)
    {
        printf("%f\n", vec->data[i]);
    }

    printf("\n");
}


void freeVector(Vector *vec)
{
    free(vec->data);
    vec->data = NULL;

    free(vec);
    vec = NULL;
}


/**********************/
/*  MATH. FUNCTIONS   */
/**********************/
Vector *addVectors(Vector *vec1, Vector *vec2)
{
    Vector *result = createVector(vec1->length, 0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] + vec2->data[i];
    }

    return result;
}


Vector *subVectors(Vector *vec1, Vector *vec2)
{
    Vector *result = createVector(vec1->length, 0);

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result->data[i] = vec1->data[i] - vec2->data[i];
    }

    return result;
}


float multiplyVectors(Vector *vec1, Vector *vec2)
{
    float result = 0.0f;

    for (unsigned int i = 0; i < vec1->length; i++)
    {
        result += vec1->data[i] * vec2->data[i];
    }

    return result;
}


Vector *multiplyScalar(Vector *vec, float scalar)
{
    Vector *result = createVector(vec->length, 0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] * scalar;
    }

    return result;
}


Vector *divideScalar(Vector *vec, float scalar)
{
    Vector *result = createVector(vec->length, 0);

    for (unsigned int i = 0; i < vec->length; i++)
    {
        result->data[i] = vec->data[i] / scalar;
    }

    return result;
}


float meanVector(Vector *vec)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / vec->length;
    return mean;
}


int minVector(Vector *vec)
{
    int min;

    for (unsigned int i = 0; i < vec->length; i++)
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


int maxVector(Vector *vec)
{
    int max;

    for (unsigned int i = 0; i < vec->length; i++)
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
