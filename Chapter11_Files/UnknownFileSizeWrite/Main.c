#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/Dropbox/_Coding/UdemyC/";

int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/UnknownFileSizeWrite/OutputData.txt", 60);

    unsigned int length = 10;
    int fill_value = 0;

    Vector v1 = {.data = createArray(length, fill_value), .length = length};

    for (unsigned int i = 0; i < v1.length; i++)
    {
        v1.data[i] = (int)(i * i);
    }

    FILE *fp = fopen(output_filepath, "w");

    if (fp == NULL)
    {
        return 1;
    }

    for (unsigned int i = 0; i < v1.length; i++)
    {
        char str[12] = {'\0'}; // 12 chars fits all values for int32
        sprintf(str, "%d\n", v1.data[i]);
        fputs(str, fp);
    }

    fclose(fp);

    freeArray(v1.data);

    return 0;
}
