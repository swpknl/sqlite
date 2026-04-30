//
// Created by swpknl on 5/1/26.
//

#ifndef SQLITE_INPUT_BUFFER_H
#define SQLITE_INPUT_BUFFER_H
#include <stddef.h>
#include <stdio.h>

#endif //SQLITE_INPUT_BUFFER_H
#include "definitions.h"

typedef struct InputBuffer {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();