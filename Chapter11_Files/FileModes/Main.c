#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

int main()
{
    unsigned int length = 10;
    int fill_value = 0;

    Vector v1 = {.data = createVector(length, fill_value), .length = length};

    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] = i * i;
    }

    char path[] = "C:/Users/schaf/Dropbox/_Coding/UdemyC/Chapter11_Files/FileModes/Data.txt";

    // r (read)
    // w (write, creates if not exist)
    // a (append with writing, creates if not exist)
    // r+ (read and  write)
    // w+ (read and write, truncates file, creates if not exist)
    // a+ (read and  write, creates if not exist, append with writing)
    FILE *fp = fopen(path, "a");

    if (fp == NULL)
    {
        return 1;
    }

    // read line by line
    int line_size = 50;
    char *line = malloc(line_size * sizeof(char));

    for (unsigned int i = 0; i < v1.length; i++)
    {
        char str[12]; // 12 chars fits all values for int32
        sprintf(str, "%d\n", v1.data[i]);
        fputs(str, fp);
    }

    // Close the file
    fclose(fp);

    // Free vector data
    freeVector(&v1);

    return 0;
}
