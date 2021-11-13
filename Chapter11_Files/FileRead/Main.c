#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    char path[] = "C:/Users/schaf/Dropbox/_Coding/UdemyC/Chapter11_Files/FileRead/InputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    Vector v1 = { .data = createVector(5, 0), .length = 5 };

    for (unsigned int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);
    }

    // Close the file
    fclose(fp);

    for (unsigned int i = 0; i < v1.length; i++)
    {
        printf("%d\n", v1.data[i]);
    }

    // Free vector data
    freeVector(&v1);

    return 0;
}
