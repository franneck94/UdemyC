#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#include "CsvReader.h"

ERROR_TYPES line_count(const char *file_path, unsigned int *num_lines)
{
    FILE *fp = fopen(file_path, "r");

    if (fp == NULL)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
        return FAILURE;
    }

    unsigned int count = 1;
    char temp;

    while (fscanf(fp, "%c", &temp) != -1)
    {
        if (temp == 10)
            count++;
    }

    *num_lines = count;

    return SUCCESS;
}

ERROR_TYPES read_simple_csv(const char *file_path, records_t *records)
{
    FILE *fp = fopen(file_path, "r");

    if (fp == NULL)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
        return FAILURE;
    }

    unsigned int num_lines = 0;
    ERROR_TYPES err_line_count = line_count(file_path, &num_lines);
    if (err_line_count == FAILURE)
        return err_line_count;

    entry_t *entries = create_entries(num_lines);

    if (entries == NULL)
        return FAILURE;

    for (unsigned int i = 0; i < num_lines; ++i)
    {
        int scanned_arguments = fscanf(fp, "%c,%d\n", &entries[i].letter, &entries[i].value);

        if (scanned_arguments != 2)
        {
            num_lines = i - 1;
            break;
        }
    }

    fclose(fp);
    fp = NULL;

    fill_records(records, entries, num_lines);

    return SUCCESS;
}

ERROR_TYPES write_simple_csv(const char *file_path, records_t *records)
{
    FILE *fp = fopen(file_path, "w");

    if (fp == NULL)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
        return FAILURE;
    }

    for (unsigned int i = 0; i < records->length; ++i)
    {
        int printed_characters = 0;

        if (i < records->length - 1)
        {
            printed_characters = fprintf(fp, "%c,%d\n", records->entries[i].letter, records->entries[i].value);
        }
        else
        {
            printed_characters = fprintf(fp, "%c,%d", records->entries[i].letter, records->entries[i].value);
        }

        if (printed_characters < 2)
        {
            break;
        }
    }

    fclose(fp);
    fp = NULL;

    return SUCCESS;
}