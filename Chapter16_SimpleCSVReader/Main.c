#include <stdio.h>
#include <string.h>

#include "Record.h"
#include "CsvReader.h"

#define FOLDER_LEN 128
#define FILE_LEN 64

// MainDebug.exe "data_in.csv" "data_out2.csv"
int main(int argc, char **argv)
{
    // IO Code

    char project_path[FOLDER_LEN] = { '\0' };
    char input_filename[FILE_LEN] = { '\0' };
    char input_filepath[FOLDER_LEN + FILE_LEN] = { '\0' };
    char output_filename[FILE_LEN] = { '\0' };
    char output_filepath[FOLDER_LEN + FILE_LEN] = { '\0' };

    if (argc == 4)
    {
        strncpy(project_path, argv[1], FOLDER_LEN);
        strncpy(input_filename, argv[2], FILE_LEN);
        strncpy(output_filename, argv[3], FILE_LEN);
    }
    else
    {
        strncpy(project_path, "C:/Users/Jan/Dropbox/_Coding/UdemyC/Chapter16_SimpleCSVReader/", FOLDER_LEN);
        strncpy(input_filename, "data_in.csv", FILE_LEN);
        strncpy(output_filename, "data_out.csv", FILE_LEN);
    }

    strncpy(input_filepath, project_path, FOLDER_LEN);
    strncpy(input_filepath, input_filename, FILE_LEN);
    strncpy(output_filepath, project_path, FOLDER_LEN);
    strncpy(output_filepath, output_filename, FILE_LEN);

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
