#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "Record.h"

#define FOLDER_LEN 128
#define FILE_LEN 64
#define HELP_LEN 7

int main(int argc, char **argv)
{
    // IO Code
    char project_path[FOLDER_LEN] = {'\0'};
    char input_filename[FILE_LEN] = {'\0'};
    char output_filename[FILE_LEN] = {'\0'};
    char input_filepath[FOLDER_LEN + FILE_LEN] = {'\0'};
    char output_filepath[FOLDER_LEN + FILE_LEN] = {'\0'};

    if (argc == 4)
    {
        strncpy(project_path, argv[1], FOLDER_LEN);
        strncpy(input_filename, argv[2], FILE_LEN);
        strncpy(output_filename, argv[3], FILE_LEN);
    }
    else if (argc == 2)
    {
        if (strncmp(argv[1], "--help", HELP_LEN) == 0)
        {
            printf("Argument 1: project_path\n");
            printf("Argument 2: input_filename\n");
            printf("Argument 3: output_filename\n");
        }

        return 0;
    }
    else
    {
        strncpy(project_path, "C:/Users/Jan/Dropbox/_Coding/UdemyC/Chapter16_SimpleCSVReader/", FOLDER_LEN);
        strncpy(input_filename, "data_in.csv", FILE_LEN);
        strncpy(output_filename, "data_out.csv", FILE_LEN);
    }

    strncpy(input_filepath, project_path, FOLDER_LEN);
    strncat(input_filepath, input_filename, FILE_LEN);
    strncpy(output_filepath, project_path, FOLDER_LEN);
    strncat(output_filepath, output_filename, FILE_LEN);

    // CSV Functions
    records_t *my_records = create_records();

    RETURN_CODES return_code = read_simple_csv(input_filepath, my_records);

    if (return_code != SUCCESS)
    {
        my_records = delete_records(my_records);
        return return_code;
    }

    print_records(my_records, "Read Input");

    random_fill_records(my_records);
    print_records(my_records, "Fill Random");

    sort_records(my_records, SORT_ASCENDING);
    print_records(my_records, "Ascending Sort");

    sort_records(my_records, SORT_DESCENDING);
    print_records(my_records, "Descending Sort");

    return_code = write_simple_csv(output_filepath, my_records);

    if (return_code != SUCCESS)
    {
        my_records = delete_records(my_records);
        return return_code;
    }

    my_records = delete_records(my_records);

    return 0;
}
