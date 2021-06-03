#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#include "CsvReader.h"

#define NEW_LINE_ASCII 10
#define BUFFER_SIZE 32
#define NUM_VALUES 2

RETURN_TYPES line_count(const char * const file_path, unsigned int * const num_lines)
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
        if (temp == NEW_LINE_ASCII)
        {
            count++;
        }
    }

    *num_lines = count;

    return SUCCESS;
}

RETURN_TYPES read_simple_csv(const char * const file_path, records_t * const records)
{
    FILE *fp = fopen(file_path, "r");

    if (fp == NULL)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
        return FAILURE;
    }

    unsigned int num_lines = 0;
    RETURN_TYPES err_line_count = line_count(file_path, &num_lines);
    if (err_line_count == FAILURE)
    {
        return err_line_count;
    }

    entry_t *entries = create_entries(num_lines);

    if (entries == NULL)
    {
        return FAILURE;
    }

    for (unsigned int i = 0; i < num_lines; ++i)
    {
        char buffer[BUFFER_SIZE] = { '\0' };
        fgets(buffer, BUFFER_SIZE, fp);
        buffer[strcspn(buffer, "\r\n")] = '\0';

        int scanned_arguments = sscanf(buffer, "%c,%d", &entries[i].letter, &entries[i].value);

        if (scanned_arguments != NUM_VALUES)
        {
            num_lines = i;
            break;
        }
    }

    int return_close = fclose(fp);
    fp = NULL;

    if (return_close == EOF)
    {
        return FAILURE;
    }

    fill_records(records, entries, num_lines);

    return SUCCESS;
}

RETURN_TYPES write_simple_csv(const char * const file_path, const records_t * const records)
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
        const entry_t * const entry = &records->entries[i];
        int printed_characters = fprintf(fp, "%c,%d", entry->letter, entry->value);

        if (i < records->length - 1)
        {
            fprintf(fp, "\n");
        }

        if (printed_characters < NUM_VALUES)
        {
            return FAILURE;
        }
    }

    int return_close = fclose(fp);
    fp = NULL;

    if (return_close == EOF)
    {
        return FAILURE;
    }

    return SUCCESS;
}
