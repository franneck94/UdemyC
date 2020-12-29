#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    char path[] = "C:/Users/Jan/Dropbox/_Coding/UdemyCKurs/Kapitel 11 - Dateien/UnknownFileSizeRead/InputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    // read line by line
    int line_size = 50;
    char *line = malloc(line_size * sizeof(char));

    while (fgets(line, line_size, fp) != NULL)
    {
        int value = atoi(line);
        printf("%d\n", value);
    }

    // Close the file
    fclose(fp);

    return 0;
}