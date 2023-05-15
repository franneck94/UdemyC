#include <stdio.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyC/";

int main()
{
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJECT_DIR, 100);
    strncat(input_filepath, "Chapter11_Files/FileWrite/InputData.txt", 60);

    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/FileWrite/OutputData.txt", 60);

    FILE *fp_in = fopen(input_filepath, "r");

    if (NULL == fp_in)
    {
        return 1;
    }

    Vector v1 = {.data = createArray(5, 0), .length = 5};

    for (unsigned int i = 0; i < v1.length; i++)
    {
        fscanf(fp_in, "%d", &v1.data[i]);
    }

    fclose(fp_in);

    for (unsigned int i = 0; i < v1.length; i++)
    {
        v1.data[i] -= 1;
    }

    FILE *fp_out = fopen(output_filepath, "w");

    if (NULL == fp_out)
    {
        return 1;
    }

    for (unsigned int i = 0; i < v1.length; i++)
    {
        fprintf(fp_out, "%d\n", v1.data[i]);
    }

    fclose(fp_out);

    freeArray(v1.data);

    return 0;
}
