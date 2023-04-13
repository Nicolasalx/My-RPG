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
#include "game_menu.h"
#include "inventory.h"
#include "level_arrow.h"
#include "tree.h"
#include "system_bot_skelet.h"
#include "collision_map.h"

void (*create[])(void) = {
    create_default_font,
    create_menu_button,
    create_menu_quest,
    create_player,
    create_img_settings,
    create_button_settings,
    create_button_menu_game,
    create_button_tree,
    create_front_inventory,
    create_tutorial,
    create_system_bot,
    create_button_settings_game_menu,
    create_map,
    create_clothes_inventory,
    create_saving_inventory,
    create_validate_saving_option,
    create_stuff_inventory,
    create_arrow_and_touret,
    create_collision_map,
    NULL
};
