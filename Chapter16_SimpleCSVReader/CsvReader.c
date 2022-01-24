#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "Record.h"

#define BUFFER_SIZE (size_t)(128)
#define NEW_LINE_CHARACTER_ASCII '\n'

void line_count(const char *const file_path, size_t *const num_lines)
{
    FILE *const fp = fopen(file_path, "r");

    if (NULL == fp)
    {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
    }

    size_t count = 0;
    char temp;

    while (fscanf(fp, "%c", &temp) != EOF)
    {
        if (NEW_LINE_CHARACTER_ASCII == temp)
        {
            ++count;
        }
    }

    *num_lines = count;

    fclose(fp);
}

void read_simple_csv(const char *const file_path, records_t *const records)
{
    FILE *const fp = fopen(file_path, "r");

    if (NULL == fp)
    {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
    }

    size_t num_lines = 0;
    line_count(file_path, &num_lines);

    entry_t *entries = create_entries(num_lines);

    if (NULL == entries)
    {
        fclose(fp);
        return;
    }

    for (size_t i = 0; i < num_lines; ++i)
    {
        char buffer[BUFFER_SIZE] = {'\0'};
        fgets(buffer, BUFFER_SIZE, fp);

        sscanf(buffer, "%c,%d", &entries[i].letter, &entries[i].value);
    }

    fclose(fp);

    set_records(records, entries, num_lines);
}

void write_simple_csv(const char *const file_path, const records_t *const records)
{
    FILE *const fp = fopen(file_path, "w");

    if (NULL == fp)
    {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
    }

    for (size_t i = 0; i < records->length; ++i)
    {
        const entry_t *const entry = &records->entries[i];

        fprintf(fp, "%c, %d\n", entry->letter, entry->value);
    }

    fclose(fp);
}
