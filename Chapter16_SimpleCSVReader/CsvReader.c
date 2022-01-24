#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CsvReader.h"

#define NEW_LINE_CHARACTER_ASCII 10
#define BUFFER_SIZE 256

void line_count(const char *const file_path, size_t *const num_lines)
{
    FILE *fp = fopen(file_path, "r");

    if (NULL == fp)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
    }

    size_t count = 1;
    char temp = 0;

    while (fscanf(fp, "%c", &temp) != EOF)
    {
        if (temp == NEW_LINE_CHARACTER_ASCII)
        {
            ++count;
        }
    }

    *num_lines = count;

    fclose(fp);
}

void read_simple_csv(const char *const file_path, records_t *const records)
{
    FILE *fp = fopen(file_path, "r");

    if (NULL == fp)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
    }

    size_t num_lines = 0;
    line_count(file_path, &num_lines);

    entry_t *entries = create_entries(num_lines);

    if (entries == NULL)
    {
        fclose(fp);
    }

    for (size_t i = 0; i < num_lines; i++)
    {
        char buffer[BUFFER_SIZE] = {'\0'};
        fgets(buffer, BUFFER_SIZE, fp);
        buffer[strcspn(buffer, "\n")] = '\0';

        int scanned_arguments = sscanf(buffer, "%c,%d", &entries[i].letter, &entries[i].value);

        if (scanned_arguments != NUM_VALUES)
        {
            num_lines = i;
            break;
        }
    }

    fclose(fp);

    set_records(records, entries, num_lines);
}

void write_simple_csv(const char *const file_path, const records_t *const records)
{
    FILE *fp = fopen(file_path, "w");

    if (NULL == fp)
    {
        int errornum = errno;
        fprintf(stderr, "Error in opening file: %s\n", strerror(errornum));
    }

    for (size_t i = 0; i < records->length; i++)
    {
        const entry_t *const entry = &records->entries[i];
        fprintf(fp, "%c,%d\n", entry->letter, entry->value);
    }

    fclose(fp);
}
