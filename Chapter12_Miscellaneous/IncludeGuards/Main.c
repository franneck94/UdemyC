#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"
#include "AnotherBib.h"

int main()
{
    function();

    FILE* fp = fopen("C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 12 - Weiteres/IncludeGuards/InputData.txt", "r");

    if (fp == NULL)
    {
        return 1;
    }

    Vector v1 = {createVector(8, 1), 8};

    for (int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);
    }

    fclose(fp);

    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] *= 2;
    }


    fp = fopen("C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 12 - Weiteres/IncludeGuards/OutputData.txt", "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < v1.length; i++)
    {
        fprintf(fp, "%d\n", v1.data[i]);
    }

    fclose(fp);

    return 0;
}