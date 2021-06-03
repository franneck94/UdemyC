#include <stdio.h>
#include <string.h>

#include "Record.h"
#include "CsvReader.h"

#define FOLDER_LEN 128
#define FILE_LEN 64

const char project_path[FOLDER_LEN] = "C:/Users/schaf/Dropbox/_Coding/UdemyC/Chapter16_SimpleCSVReader/";

int main()
{
    records_t *my_records = create_records();

    char input_file_path[FOLDER_LEN + FILE_LEN];
    strncpy(input_file_path, project_path, FOLDER_LEN);
    strncat(input_file_path, "data_in.csv", FILE_LEN);

    RETURN_TYPES err_read = read_simple_csv(input_file_path, my_records);
    if (err_read != SUCCESS)
    {
        return err_read;
    }

    print_records(my_records, "Read Input");

    random_fill_records(my_records);
    print_records(my_records, "Fill Random");

    sort_records(my_records, SORT_ASCENDING);
    print_records(my_records, "Sort Asc");

    sort_records(my_records, SORT_DESCENDING);
    print_records(my_records, "Sort Desc");

    char output_file_path[FOLDER_LEN + FILE_LEN];
    strncpy(output_file_path, project_path, FOLDER_LEN);
    strncat(output_file_path, "data_out.csv", FILE_LEN);

    RETURN_TYPES err_write = write_simple_csv(output_file_path, my_records);
    if (err_write != SUCCESS)
    {
        return err_write;
    }

    return 0;
}
