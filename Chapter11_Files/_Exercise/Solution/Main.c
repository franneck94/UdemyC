#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyC/";

int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath,
            "Chapter11_Files/_Exercise/Solution/InputData.txt",
            60);

    FILE *fp = fopen(output_filepath, "r");

    if (NULL == fp)
    {
        return 1;
    }

    char text[10][100] = {'\0'};

    int idx = 0;
    int line_size = 100;
    char line[100] = {'\0'};

    while ((fgets(line, line_size, fp) != NULL) && (idx < 10))
    {
        strncpy(text[idx], line, 100);

        idx++;
    }

    for (unsigned int i = 0; i < 10; i++)
    {
        printf("%s\n", text[i]);
    }

    return 0;
}
