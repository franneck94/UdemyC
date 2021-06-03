#ifndef RECORD_H
#define RECORD_H

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

/* DECLARATIONS */

entry_t *create_entries(const unsigned int num_entries);

void *delete_entries(entry_t *entries);

records_t *create_records();

#endif // RECORD_H
