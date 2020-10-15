#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    /*******************/
    /*      READ      */
    /*******************/
    char path[] = "C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 11 - Dateien/ContentChapter11/InputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        return 1;
    }

    Vector v1 = {.data = createVector(8, 1), .length = 8};

    for (int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);
    }

    fclose(fp);
    fp = NULL;

    /*******************/
    /*      WRITE      */
    /*******************/
    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] *= 2;
    }

    char path2[] = "C:/Users/Jan/Dropbox/_Programmieren/UdemyCKurs/Kapitel 11 - Dateien/ContentChapter11/OutputData.txt";
    // read=r, write=w
    FILE *fp2 = fopen(path2, "w");
    if (fp2 == NULL)
    {
        return 1;
    }

    for (int i = 0; i < v1.length; i++)
    {
        fprintf(fp2, "%d\n", v1.data[i]);
    }

    fclose(fp2);
    fp2 = NULL;

    free(v1.data);
    v1.data = NULL;
    v1.length = 0;

    return 0;
}