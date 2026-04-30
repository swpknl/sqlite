//
// Created by swpknl on 5/1/26.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "headers/constants.h"
#include "headers/input_buffer.h"
#include "headers/statement.h"
#include "headers/meta_command.h"
#include "headers/definitions.h"

int main() {
    InputBuffer* input_buffer = new_input_buffer();
    while (true) {
        print_prompt();
        read_input(input_buffer);

        if (strcmp(input_buffer->buffer, EXIT_COMMAND) == 0) {
            if (input_buffer->buffer[0] == '.') {
                switch (do_meta_command(input_buffer)) { // Non_SQL statements like .exit are called as meta commands
                    case (META_COMMAND_SUCCESS):
                        continue;
                    case (META_COMMAND_UNRECOGNIZED_COMMAND):
                        printf("Unrecognized command '%s'\n", input_buffer->buffer);
                        continue;
                }
            }
        }

        Statement statement;
        switch (prepare_statement(input_buffer, &statement)) {
            case PREPARE_SUCCESS:
                break;
            case PREPARE_UNRECOGNIZED_STATEMENT:
                printf("Unrecognized keyword at start of '%s'. \n", input_buffer->buffer);
                continue;;
        }

        execute_statement(&statement);
        printf("Executed \n");
    }
}