#ifndef RECORD_H
#define RECORD_H

/* INCLUDES */

#include <stdint.h>

/* DEFINES */

#define NUM_VALUES 2

/* TYPES */

typedef struct
{
    char value_a;
    int32_t value_b;
} value_pair_t;

typedef struct
{
    value_pair_t *values;
    size_t num_values;
} records_t;

typedef enum
{
    SORTING_SCHEME_ASCENDING,
    SORTING_SCHEME_DESCENDING,
} sorting_scheme_t;

/* DECLARATIONS */

value_pair_t *create_pairs(const size_t num_pairs);

void free_pairs(value_pair_t *pairs);

records_t *create_records();

void free_records(records_t *records);

void print_records(const records_t *const records, const char *const header);

void sort_records(const records_t *const records,
                  const sorting_scheme_t sorting_scheme);

#endif /* RECORD_H */
