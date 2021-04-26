#ifndef CSV_READER_H
#define CSV_READER_H

#include "errors.h"
#include "Record.h"

ERROR_TYPES line_count(const char *file_path, unsigned int *num_lines);

ERROR_TYPES read_simple_csv(const char *file_path, records_t *records);

ERROR_TYPES write_simple_csv(const char *file_path, records_t *records);

#endif // CSV_READER_H
