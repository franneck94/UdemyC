#include <stdbool.h>
#include <stdio.h>

#include "Lib.h"

/**
 @brief
    Lege ein Array mit max. 1000 Speicherblöcken an.
    Lese vom User solange Integer-Werte für das Array ein, bis der User eine
    Zahl <= 0 eingibt. Somit liegen im Array nur positive Werte vor.
    Berechne danach von den Array Werten das Minimum und Maximum.
 */
void exercise()
{
    int data[1000] = {0};

    int user_input = 0;
    unsigned int length = 0;

    printf("Please enter numbers:\n");

    do
    {
        scanf("%d", &user_input);

        if (user_input > 0)
        {
            data[length] = user_input;
            length++;
        }
        else
        {
            break;
        }
    } while (true);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    int min_value = minArray(data, length);
    int max_value = maxArray(data, length);

    printf("Min: %d\n", min_value);
    printf("Max: %d\n", max_value);
}

int main()
{
    exercise();

    return 0;
}
