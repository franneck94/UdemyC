#include <stdio.h>

#include "Record.h"
#include "CsvReader.h"

int main()
{
    records_t *my_records = create_records();

    const char input_file_path[] = "C:/Users/Jan/Dropbox/_Coding/UdemyCKurs/Kapitel 16 - Programmierprojekt2/data_in.csv";
    ERROR_TYPES err_read = read_simple_csv(input_file_path, my_records);
    if (err_read == FAILURE)
        return FAILURE;

    print_records(my_records);
    random_fill_records(my_records);
    print_records(my_records);
    sort_records(my_records, SORT_ASCENDING);
    print_records(my_records);
    sort_records(my_records, SORT_DESCENDING);
    print_records(my_records);

    const char output_file_path[] = "C:/Users/Jan/Dropbox/_Coding/UdemyCKurs/Kapitel 16 - Programmierprojekt2/data_out.csv";
    ERROR_TYPES err_write = write_simple_csv(output_file_path, my_records);
    if (err_write == FAILURE)
        return FAILURE;

    return 0;
}