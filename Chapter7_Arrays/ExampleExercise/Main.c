#include <stdbool.h>
#include <stdio.h>

#include "FunctionsBib.h"

int main()
{
    /*
    Lege ein Array mit max. 1000 Speicherblöccken an.
    Lese vom User solange Integer-Werte für das Array ein, bis der User eine
    Zahl <= 0 eingibt. Somit liegen im Array nur positive Werte vor.
    Berechne danach von den Array Werten das Minimum und Maximum.
    */

    int data[1000] = {0};

    int user_input;
    int length = 0;

    printf("Start with your input!\n");
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

    int min = minArray(data, length);
    int max = maxArray(data, length);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}
