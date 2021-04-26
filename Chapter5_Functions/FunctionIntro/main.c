#include <stdio.h>

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

int main()
{
    printEvenOrOdd(1);
    printEvenOrOdd(2);
    printEvenOrOdd(3);

    return 0;
}
