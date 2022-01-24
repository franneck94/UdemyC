#ifndef CSV_READER_H
#define CSV_READER_H

/* INCLUDES */

#include "Record.h"

/* DECLARTIONS */

void line_count(const char *const file_path, size_t *const num_lines);

void read_simple_csv(const char *const file_path, records_t *const records);

void write_simple_csv(const char *const file_path, const records_t *const records);

#endif /* CSV_READER_H */
