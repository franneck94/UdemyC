#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyC/";

int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath,
            "Chapter11_Files/UnknownFileSizeWrite/OutputData.txt",
            60);

    FILE *fp = fopen(output_filepath, "w");

    if (NULL == fp)
    {
        return 1;
    }

    int data[5] = {1, 2, 3, 4, 5};

    for (unsigned int i = 0; i < 5; i++)
    {
        char temp[50] = {'\0'};
        sprintf(temp, "Value: %d - LineEnd\n", data[i]);
        fputs(temp, fp);
    }

    fclose(fp);

    return 0;
}
