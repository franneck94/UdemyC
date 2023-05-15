#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyC/";

int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath,
            "Chapter11_Files/UnknownFileSizeRead/InputData.txt",
            60);

    FILE *fp = fopen(input_filepath, "r");

    if (NULL == fp)
    {
        return 1;
    }

    int line_size = 100;
    char line[100] = {'\0'};

    while (fgets(line, line_size, fp) != NULL)
    {
        int value = atoi(line);
        printf("%s", line);
        printf("%d\n\n", value);
    }

    fclose(fp);

    return 0;
}
