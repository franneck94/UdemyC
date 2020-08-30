#include <stdio.h>

// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
// Declaration
void printEvenOrOdd(int number);

int main()
{
    // Declaration + Init.
    int i = 12;

    // Name: printEvenOrOdd
    // Arguments: i
    printEvenOrOdd(i);
    printEvenOrOdd(i);
    printEvenOrOdd(i);
    printEvenOrOdd(i);

    return 0;
}

// Definition
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