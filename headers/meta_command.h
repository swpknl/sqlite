//
// Created by swpknl on 5/1/26.
//

#ifndef SQLITE_META_COMMAND_H
#define SQLITE_META_COMMAND_H

#include "definitions.h"
#include "input_buffer.h"

typedef enum MetaCommand_Result {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer* input_buffer);

#endif //SQLITE_META_COMMAND_H
