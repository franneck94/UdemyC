#ifndef RECORD_H
#define RECORD_H

#include "errors.h"

/* TYPES */

typedef struct entry
{
    char letter;
    int value;
} entry_t;

typedef struct records
{
    entry_t *entries;
    unsigned int length;
} records_t;

typedef enum
{
    SORT_ASCENDING = 0,
    SORT_DESCENDING = 1
} SORTING_SCHEME;

/* DECLARATIONS */

entry_t *create_entries(const unsigned int num_entries);

void *delete_entries(entry_t *entries);

records_t *create_records();

void *delete_records(records_t *records);

RETURN_CODES fill_records(records_t *const records, entry_t *const entries, const unsigned int length);

RETURN_CODES print_records(const records_t *const records, const char *const header);

RETURN_CODES random_fill_records(records_t *const records);

RETURN_CODES sort_records(const records_t *const records, const SORTING_SCHEME sorting_scheme);

#endif // RECORD_H
