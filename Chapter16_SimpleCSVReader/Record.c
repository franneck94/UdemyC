#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Record.h"

value_pair_t *create_entries(const size_t num_entries)
{
    value_pair_t *values = (value_pair_t *)malloc(num_entries * sizeof(value_pair_t));

    return values;
}

void free_entries(value_pair_t *values)
{
    if (NULL == values)
    {
        return;
    }

    free(values);
}

records_t *create_records()
{
    records_t *records = (records_t *)malloc(sizeof(records_t));

    return records;
}

void free_records(records_t *records)
{
    if (NULL == records)
    {
        return;
    }

    free_entries(records->values);
    free(records);
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

    for (size_t i = 0; i < records->num_values; ++i)
    {
        const value_pair_t *const entry = &records->values[i];

        printf("%c, %d\n", entry->value_a, entry->value_b);
    }

    printf("\n");
}

int comp_ascending(const void *const left_v, const void *const right_v)
{
    const value_pair_t *const left = (value_pair_t *)(left_v);
    const value_pair_t *const right = (value_pair_t *)(right_v);

    if (left->value_b < right->value_b)
    {
        return -1;
    }
    else if (right->value_b < left->value_b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int comp_descending(const void *const left_v, const void *const right_v)
{
    const value_pair_t *const left = (value_pair_t *)(left_v);
    const value_pair_t *const right = (value_pair_t *)(right_v);

    if (left->value_b > right->value_b)
    {
        return -1;
    }
    else if (right->value_b > left->value_b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sort_records(const records_t *const records, const sorting_scheme_t sorting_scheme)
{
    if (NULL == records)
    {
        return;
    }

    switch (sorting_scheme)
    {
    case SORTING_SCHEME_ASCENDING:
    {
        qsort(records->values, records->num_values, sizeof(value_pair_t), comp_ascending);
        break;
    }
    case SORTING_SCHEME_DESCENDING:
    {
        qsort(records->values, records->num_values, sizeof(value_pair_t), comp_descending);
        break;
    }
    default:
    {
        break;
    }
    }
}
