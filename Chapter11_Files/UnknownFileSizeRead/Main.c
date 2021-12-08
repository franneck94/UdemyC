#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/Dropbox/_Coding/UdemyC/";

int main()
{
    Vector v1 = {.data = createArray(5, 0), .length = 5};

    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter11_Files/UnknownFileSizeRead/InputData.txt", 60);

    FILE *fp = fopen(input_filepath, "r");

    if (fp == NULL)
    {
        return 1;
    }

    int idx = 0;
    int line_size = 50;
    char line[50] = {'\0'};

    while (fgets(line, line_size, fp) != NULL)
    {
        int value = atoi(line);
        v1.data[idx] = value;

        idx++;
    }

    fclose(fp);

    for (unsigned int i = 0; i < v1.length; i++)
    {
        printf("%d\n", v1.data[i]);
    }

    return 0;
}
