//
// Created by swpknl on 5/1/26.
//

#include "../headers/meta_command.h"
#include "../headers/input_buffer.h"
#include "../headers/constants.h"

#include <stdlib.h>
#include <string.h>

MetaCommandResult do_meta_command(const InputBuffer* input_buffer) {
    if (strcmp(input_buffer->buffer, EXIT_COMMAND) == 0) {
        exit(EXIT_SUCCESS);
        return META_COMMAND_SUCCESS;
    } else {
        return META_COMMAND_UNRECOGNIZED_COMMAND;
    }
}