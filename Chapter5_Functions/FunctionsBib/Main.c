#include <stdio.h>

#include "FunctionsBib.h"

int main()
{
    int number_user_a = getNumberFromUser();
    int number_user_b = getNumberFromUser();
    int bigger_number = compareNumbers(number_user_a, number_user_b);
    printf("Bigger number is: %d", bigger_number);

    return 0;
}