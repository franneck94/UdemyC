#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char PROJECT_DIR[] = "C:/Users/Jan/OneDrive/_Coding/UdemyC/";

int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath,
            "Chapter11_Files/ContentChapter11/Exercise/InputData.txt",
            60);

    return 0;
}
