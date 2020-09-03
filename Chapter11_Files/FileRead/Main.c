#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    char path[] = "C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 11 - Dateien/FileRead/InputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    Vector v1 = {.data = createVector(5, 0), .length = 5};

    for (int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);
    }

    // Close the file
    fclose(fp);

    for (int i = 0; i < v1.length; i++)
    {
        printf("%d\n", v1.data[i]);
    }

    // Free vector data
    free(v1.data);
    v1.data = NULL;
    v1.length = 0;

    return 0;
}