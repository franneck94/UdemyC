#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    unsigned int length = 10;
    int fill_value = 0;

    Vector v1 = { .data=createVector(length, fill_value), .length=length };

    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] = i * i;
    }

    char path[] = "C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 11 - Dateien/UnknownFileSizeWrite/OutputData.txt";
    // read=r, write=w
    FILE* fp = fopen(path, "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < v1.length; i++)
    {
        char str[12]; // 12 chars fits all values for int32
        sprintf(str, "%d\n", v1.data[i]);
        fputs(str, fp);
    }

    // Close the file
    fclose(fp);

    return 0;
}