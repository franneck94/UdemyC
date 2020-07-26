#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    // Char Array
    char name[] = {'J', 'a', 'n', '\0'};

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", name[i]);
    }

    // String
    char name2[] = "Jan";

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", name2[i]);
    }

    char* name3;
    name3 = (char*) malloc(4*sizeof(char));

    name3[0] = 'J';
    name3[1] = 'a';
    name3[2] = 'n';
    name3[3] = '\0';

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", name3[i]);
    }

    return 0;
}