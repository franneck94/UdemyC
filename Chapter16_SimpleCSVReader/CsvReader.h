#ifndef CSV_READER_H
#define CSV_READER_H

#include "errors.h"
#include "Record.h"

RETURN_TYPES line_count(const char * const file_path, unsigned int * const num_lines);

RETURN_TYPES read_simple_csv(const char * const file_path, records_t * const records);

RETURN_TYPES write_simple_csv(const char * const file_path, const records_t * const records);

#endif // CSV_READER_H
