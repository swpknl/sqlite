//
// Created by swpknl on 5/1/26.
//
#include "../headers/constants.h"
#include "../headers/input_buffer.h"
#include "../headers/statement.h"
#include <string.h>

PrepareResult prepare_statement(InputBuffer* input_buffer, Statement* statement) {
    if (strncmp(input_buffer->buffer, INSERT, 6) == 0) {
        statement->type = STATEMENT_INSERT;
        return PREPARE_SUCCESS;
    }
    if (strcmp(input_buffer->buffer, SELECT) == 0) {
        statement->type = STATEMENT_SELECT;
        return PREPARE_SUCCESS;
    }

    return PREPARE_UNRECOGNIZED_STATEMENT;
}

void execute_statement(Statement* statement) {
    switch (statement->type) {
        case STATEMENT_INSERT:
            printf("This is where we would do an insert\n");
            break;
        case STATEMENT_SELECT:
            printf("This is where we would do a select\n");
            break;
    }
}