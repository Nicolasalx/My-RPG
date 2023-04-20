/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** load_all_data
*/

#include <stdbool.h>
#include "save_system.h"
#include "save_system.h"
#include "inventory.h"
#include "player.h"
#include "manage_view.h"

void load_all_data(save_num_t save_num)
{
    char path[100];

    for (int i = 0; data_to_save[i].data != NULL; ++i) {
        build_path_save(path, save_num);
        load_data(my_strcpy(path, data_to_save[i].file),
            data_to_save[i].data, data_to_save[i].size);
    }
}
