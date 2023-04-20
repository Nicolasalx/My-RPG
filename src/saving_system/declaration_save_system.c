/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_save_system
*/

#include <stdbool.h>
#include "save_system.h"
#include "inventory.h"
#include "player.h"
#include "manage_view.h"

bool is_save_exist[] = {
    [SAVE_1] = false,
    [SAVE_2] = false,
    [SAVE_3] = false
};

data_to_save_t data_to_save[] = {
    {
        .file = "inventory",
        .data = &inventory_content,
        .size = sizeof(inventory_content_t)
    }, {
        .file = "next_level",
        .data = &next_level,
        .size = sizeof(int)
    }, {
        .file = NULL,
        .data = NULL,
        .size = 0
    }
};
