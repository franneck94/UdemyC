#ifndef RECORD_H
#define RECORD_H

/** TYPES **/

typedef struct
{
    char letter;
    int value;
} entry_t;

typedef struct
{
    entry_t *entries;
    unsigned int length;
} records_t;

typedef enum
{
    SORT_ASCENDING = 0,
    SORT_DESCENDING = 1,
} SortingScheme;

/** DECLARATIONS **/

entry_t *create_entries(const unsigned int num_entries);

void *delete_entries(entry_t *entries);

records_t *create_records();

void fill_records(records_t *const records, entry_t *const entries, const unsigned int length);

void *delete_records(records_t *records);

void print_records(const records_t * const records, const char * const text);

void random_fill_records(records_t * const records);

void sort_records(const records_t * const records, const SortingScheme sorting_scheme);

#endif // RECORD_H
