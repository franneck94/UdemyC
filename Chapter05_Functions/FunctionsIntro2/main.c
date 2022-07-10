#include <stdio.h>

void printEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is even!\n", number);
    }
    else
    {
        printf("%d is odd!\n", number);
    }
}

int getNumberFromUser()
{
    int number = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &number);

    return number;
}

int main()
{
    int n = getNumberFromUser();
    printEvenOrOdd(n);

    return 0;
}
