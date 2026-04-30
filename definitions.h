//
// Created by swpknl on 5/1/26.
//
#ifndef SQLITE_DEFINITIONS_H
#define SQLITE_DEFINITIONS_H

#endif //SQLITE_DEFINITIONS_H

typedef enum MetaCommand_Result {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum Prepare_Result {
    PREPARE_SUCCESS,
    PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

typedef enum Statement_Type {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct Statements {
    StatementType type;
} Statement;