#ifndef CSV_READER_H
#define CSV_READER_H

#include "Record.h"
#include "errors.h"

RETURN_CODES line_count(const char *const file_path, unsigned int *const num_lines);

RETURN_CODES read_simple_csv(const char *const file_path, records_t *const records);

RETURN_CODES write_simple_csv(const char *const file_path, const records_t *const records);

#endif // CSV_READER_H
