#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "Record.h"

#define FOLDER_LEN (size_t)(256)
#define FILE_LEN (size_t)(128)

#define DEFAULT_PROJECT_PATH                                                   \
    "C:/Users/Jan/OneDrive/_Coding/UdemyC/Chapter16_SimpleCSVReader/"
#define DEFAULT_INPUT_FILENAME "data_in.csv"
#define DEFAULT_OUTPUT_FILENAME "data_out.csv"

int main(int argc, char **argv)
{
    // IO Code
    char project_path[FOLDER_LEN] = {'\0'};
    char input_filename[FILE_LEN] = {'\0'};
    char output_filename[FILE_LEN] = {'\0'};
    char input_filepath[FOLDER_LEN + FILE_LEN] = {'\0'};
    char output_filepath[FOLDER_LEN + FILE_LEN] = {'\0'};

    if (4 == argc)
    {
        strncpy(project_path, argv[1], FOLDER_LEN - (size_t)(1U));
        strncpy(input_filename, argv[2], FILE_LEN - (size_t)(1U));
        strncpy(output_filename, argv[3], FILE_LEN - (size_t)(1U));
    }
    else
    {
        strncpy(project_path, DEFAULT_PROJECT_PATH, FOLDER_LEN);
        strncpy(input_filename, DEFAULT_INPUT_FILENAME, FILE_LEN);
        strncpy(output_filename, DEFAULT_OUTPUT_FILENAME, FILE_LEN);
    }

    strncpy(input_filepath, project_path, FOLDER_LEN);
    strncat(input_filepath, input_filename, FILE_LEN);
    strncpy(output_filepath, project_path, FOLDER_LEN);
    strncat(output_filepath, output_filename, FILE_LEN);

    records_t *my_records = create_records();

    read_simple_csv(input_filepath, my_records);
    print_records(my_records, "Read Input");

    sort_records(my_records, SORTING_SCHEME_ASCENDING);
    print_records(my_records, "Ascending Sort");

    sort_records(my_records, SORTING_SCHEME_DESCENDING);
    print_records(my_records, "Descending Sort");

    write_simple_csv(output_filepath, my_records);
    free_records(my_records);

    return 0;
}
