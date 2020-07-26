#include <stdio.h>

// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
// Declaration
void printEvenOrOdd(int number);

// Return Type: int
// Name: getNumberFromUser
// Parameters: None
// Declaration
int getNumberFromUser();

int main()
{
    int i = getNumberFromUser(); // 0xAA: 12
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

// Definition
int getNumberFromUser()
{
    int number_from_user; //0x00: 12
    
    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}