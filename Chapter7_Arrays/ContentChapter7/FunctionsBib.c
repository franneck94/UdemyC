#include <stdio.h>

#include "FunctionsBib.h"

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
    int min = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int maxArray(int array[], unsigned int length)
{
    int max = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
