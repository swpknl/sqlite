//
// Created by swpknl on 5/1/26.
//

#ifndef SQLITE_INPUT_BUFFER_H
#define SQLITE_INPUT_BUFFER_H
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include "definitions.h"

typedef struct InputBuffer {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void print_prompt();
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);

#endif //SQLITE_INPUT_BUFFER_H
