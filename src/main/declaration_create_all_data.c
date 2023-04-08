/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_create_all_data
*/

#include "main.h"
#include "menu_game.h"
#include "quest.h"
#include "player.h"
#include "settings.h"
#include "map.h"

void (*create[])(void) = {
    create_default_font,
    create_menu_button,
    create_menu_quest,
    create_player,
    create_img_settings,
    create_button_settings,
    create_tutorial,
    create_map,
    NULL
};
