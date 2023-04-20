/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** check_if_save_exist
*/

#include "save_system.h"
#include "save_system.h"
#include "my_string.h"
#include "my_number.h"
#include <stdbool.h>

void check_if_save_exit(void)
{
    char path[100];

    for (int i = 1; i < NB_SAVE; ++i) {
        build_path_save(path, i);
        my_strcat(path, "save_");
        my_strcat(path, INT(i));
        load_data(path, &is_save_exist[i], sizeof(bool));
    }
}
