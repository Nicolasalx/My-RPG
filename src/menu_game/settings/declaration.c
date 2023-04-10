/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "game_menu.h"
#include "settings.h"
#include "menu_game.h"
#include "inventory.h"

settings_button_game_menu_t settings_button_game_menu[] = {
    {
        .path_img = "game_src/Menu_button/setting.png",
        .pos_sprite = {550, 300},
        .size_sprite = {5, 5},
        .choose_opt = 1,
    },
    {
        .path_img = "game_src/Menu_button/quit.png",
        .pos_sprite = {500, 700},
        .size_sprite = {5, 5},
        .choose_opt = 2,
    },
    {
        .path_img = "game_src/Menu_button/quit.png",
        .pos_sprite = {700, 900},
        .size_sprite = {3, 3},
        .choose_opt = 3,
    }
};

const int size_settings_button_game_menu = NB_ELEM(settings_button_game_menu);
