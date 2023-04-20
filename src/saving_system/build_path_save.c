/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** build_path_save
*/

#include <stdbool.h>
#include "my_number.h"
#include "save_system.h"
#include "my_string.h"
#include "my_bitshift.h"

char *build_path_save(char *path, save_num_t save_num)
{
    my_memset(path, 0, sizeof(path));
    my_strcpy(path, "save/save_");
    my_strcat(path, INT(save_num));
    my_strcat(path, "/");
    return path;
}
