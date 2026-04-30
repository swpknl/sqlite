//
// Created by swpknl on 5/1/26.
//

#ifndef SQLITE_STATEMENT_H
#define SQLITE_STATEMENT_H

#include "definitions.h"
#include "input_buffer.h"

typedef enum Statement_Type {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct Statements {
    StatementType type;
} Statement;

PrepareResult prepare_statement(const InputBuffer* input_buffer, Statement* statement);
void execute_statement(const Statement* statement);

#endif //SQLITE_STATEMENT_H
