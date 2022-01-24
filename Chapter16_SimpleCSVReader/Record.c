#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Record.h"

entry_t *create_entries(const size_t num_entries)
{
    entry_t *entries = (entry_t *)malloc(num_entries * sizeof(entry_t));

    return entries;
}

void *delete_entries(entry_t *entries)
{
    if (NULL == entries)
    {
        return NULL;
    }

    free(entries);

    return NULL;
}

records_t *create_records()
{
    records_t *records = (records_t *)malloc(sizeof(records_t));

    return records;
}

void *delete_records(records_t *records)
{
    if (NULL == records)
    {
        return NULL;
    }

    records->entries = delete_entries(records->entries);
    records->length = 0;

    free(records);

    return NULL;
}

void set_records(records_t *const records, entry_t *const entries, const size_t length)
{
    if (NULL == records || NULL == entries)
    {
        return;
    }

    records->entries = entries;
    records->length = length;
}

void print_records(const records_t *const records, const char *const header)
{
    if (NULL == records)
    {
        return;
    }

    if (NULL != header)
    {
        printf("Records %s:\n", header);
    }

    for (size_t i = 0; i < records->length; i++)
    {
        const entry_t *const entry = &records->entries[i];
        printf("%c, %d\n", entry->letter, entry->value);
    }

    printf("\n");
}

static int comp_ascending(const void *value1, const void *value2)
{
    const entry_t *const left = (entry_t *)(value1);
    const entry_t *const right = (entry_t *)(value2);

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
    const entry_t *const left = (entry_t *)(value1);
    const entry_t *const right = (entry_t *)(value2);

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

void sort_records(const records_t *const records, const SORTING_SCHEME sorting_scheme)
{
    if (NULL == records)
    {
        return;
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
}
