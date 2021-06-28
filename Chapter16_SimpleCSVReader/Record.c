#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Record.h"

#define NUM_VALUES 2

entry_t *create_entries(const unsigned int num_entries)
{
    entry_t *entries = (entry_t *)malloc(num_entries * sizeof(entry_t));
    return entries;
}

void *delete_entries(entry_t *entries)
{
    if (entries != NULL)
    {
        free(entries);
    }

    return NULL;
}

records_t *create_records()
{
    records_t *records = (records_t *)malloc(sizeof(records_t));
    return records;
}

void *delete_records(records_t *records)
{
    if (records != NULL)
    {
        records->entries = delete_entries(records->entries);
        records->length = 0;
        free(records);
    }

    return NULL;
}

RETURN_CODES fill_records(records_t *const records, entry_t *const entries, const unsigned int length)
{
    if (records == NULL || entries == NULL)
    {
        return FAILURE;
    }

    records->entries = entries;
    records->length = length;

    return SUCCESS;
}

RETURN_CODES print_records(const records_t *const records, const char *const header)
{
    if (records == NULL)
    {
        return FAILURE;
    }

    if (header != NULL)
    {
        printf("Records %s:\n", header);
    }

    for (unsigned int i = 0; i < records->length; i++)
    {
        const entry_t *const entry = &records->entries[i];
        int printed_caracters = printf("%c, %d\n", entry->letter, entry->value);

        if (printed_caracters < NUM_VALUES)
        {
            break;
        }
    }

    printf("\n");

    return SUCCESS;
}

static int comp_ascending(const void *value1, const void *value2)
{
    const entry_t *left = ((entry_t *)value1);
    const entry_t *right = ((entry_t *)value2);

    if (left->value < right->value)
    {
        return -1;
    }
    else if (right->value < left->value)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

static int comp_descending(const void *value1, const void *value2)
{
    const entry_t *left = ((entry_t *)value1);
    const entry_t *right = ((entry_t *)value2);

    if (left->value > right->value)
    {
        return -1;
    }
    else if (right->value > left->value)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

RETURN_CODES random_fill_records(records_t *const records)
{
    if (records == NULL)
    {
        return FAILURE;
    }

    srand(42);

    const int lower_letter = 97;  // 'a'
    const int upper_letter = 122; // 'z'
    const int lower_value = 0;
    const int upper_value = 99;

    for (unsigned int i = 0; i < records->length; i++)
    {
        char random_letter = ((char)(rand()) % (upper_letter - lower_letter + 1)) + lower_letter;
        int random_value = (rand() % (upper_value - lower_value + 1)) + lower_value;

        records->entries[i].letter = random_letter;
        records->entries[i].value = random_value;
    }

    return SUCCESS;
}

RETURN_CODES sort_records(const records_t *const records, const SORTING_SCHEME sorting_scheme)
{
    if (records == NULL)
    {
        return FAILURE;
    }

    switch (sorting_scheme)
    {
    case SORT_ASCENDING:
    {
        qsort(records->entries, records->length, sizeof(entry_t), comp_ascending);
        break;
    }
    case SORT_DESCENDING:
    {
        qsort(records->entries, records->length, sizeof(entry_t), comp_descending);
        break;
    }
    default:
    {
        break;
    }
    }

    return SUCCESS;
}
