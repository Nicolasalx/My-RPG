/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** catch_error
*/

#include "my_error.h"
#include <stdlib.h>

void catch_error(void *data, error_code_enum error_code)
{
    if (data == NULL) {
        print_fatal_error_and_exit(error_code);
    }
}
