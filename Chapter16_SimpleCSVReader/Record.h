#ifndef RECORD_H
#define RECORD_H

typedef struct
{
    char letter;
    int value;
} entry_t;

entry_t* create_entries(unsigned int num_entries);

void* delete_entries(entry_t* entries);

typedef struct
{
    entry_t* entries;
    unsigned int length;
} records_t;

records_t* create_records();

void fill_records(records_t* records, entry_t* entries, unsigned int length);

void* delete_records(records_t* records);

void print_records(records_t* records);

void random_fill_records(records_t* records);

typedef enum
{
    SORT_ASCENDING = 0,
    SORT_DESCENDING = 1,
} SortingScheme;

void sort_records(records_t* records, SortingScheme sorting_scheme);

#endif // RECORD_H