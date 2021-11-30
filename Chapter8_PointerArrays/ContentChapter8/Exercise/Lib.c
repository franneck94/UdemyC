#include <stdio.h>
#include <stdlib.h>

#include "Lib.h"

void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

unsigned int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i - 1);
}

int max(int number_a, int number_b)
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

int min(int number_a, int number_b)
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

float mean(int number_a, int number_b)
{
    float sum = number_a + number_b;
    float mean = sum / 2.0f;

    return mean;
}

void binom(int *a, int *b, int *c)
{
    // a^2 + ab + b^2
    *c = (*a) * (*a) + (*a) * (*b) + (*b) * (*b);
}

float meanArray(int array[], unsigned int length)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    float mean = sum / length;
    return mean;
}

int minArray(int array[], unsigned int length)
{
    int min;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            min = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int maxArray(int array[], unsigned int length)
{
    int max;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max = array[i];
        }

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

int *createArray(unsigned int length, int value)
{
    int *array;
    array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *p_array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", p_array[i]);
    }
}

int *freeArray(int *p_array)
{
    free(p_array);
    p_array = NULL;
    return p_array;
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = createArray(num_cols, value);
    }

    return matrix;
}

void printMatrix(int **p_matrix, unsigned int num_rows, unsigned int num_cols)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        printArray(p_matrix[i], num_cols);
    }
}

int **freeMatrix(int **p_matrix, unsigned int num_rows)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        p_matrix[i] = freeArray(p_matrix[i]);
    }

    free(p_matrix);
    p_matrix = NULL;
    return p_matrix;
}
