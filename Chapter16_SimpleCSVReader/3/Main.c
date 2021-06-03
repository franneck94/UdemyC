#include <stdio.h>
#include <string.h>

#include "Record.h"
#include "CsvReader.h"

#define FOLDER_LEN 128
#define FILE_LEN 64

const char PROJECT_PATH[FOLDER_LEN] = "C:/Users/Jan/Dropbox/_Coding/UdemyC/Chapter16_SimpleCSVReader/";

int main()
{
    records_t *my_records = create_records();

    char input_filepath[FOLDER_LEN + FILE_LEN] = { '\0' };
    strncpy(input_filepath, PROJECT_PATH, FOLDER_LEN);
    strncat(input_filepath, "data_in.csv", FILE_LEN);

    RETURN_CODES return_code = read_simple_csv(input_filepath, my_records);

    if (return_code != SUCCESS)
    {
        return return_code;
    }

    print_records(my_records, "Read Input");

    return 0;
}
