#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "Record.h"

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
