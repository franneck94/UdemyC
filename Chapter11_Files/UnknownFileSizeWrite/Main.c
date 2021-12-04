#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

int main()
{
    unsigned int length = 10;
    int fill_value = 0;

    Vector v1 = {.data = createArray(length, fill_value), .length = length};

    for (unsigned int i = 0; i < v1.length; i++)
    {
        v1.data[i] = i * i;
    }

    char path[] = "C:/Users/jan/Dropbox/_Coding/UdemyC/Chapter11_Files/UnknownFileSizeWrite/OutputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (unsigned int i = 0; i < v1.length; i++)
    {
        char str[12]; // 12 chars fits all values for int32
        sprintf(str, "%d\n", v1.data[i]);
        fputs(str, fp);
    }

    // Close the file
    fclose(fp);

    return 0;
}
