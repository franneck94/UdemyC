#include <stdio.h>

// Declaration
void printEvenOrOdd(int number);

// Declaration
int getNumberFromUser();

int main()
{
    int user_number = getNumberFromUser();
    printEvenOrOdd(user_number);

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

// Definition
int getNumberFromUser()
{
    int number_from_user;

    printf("Please enter an integer number: ");
    scanf("%d", &number_from_user);

    return number_from_user;
}
