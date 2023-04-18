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
        .path_img = "game_src/butons/Menu/Large/Colored/Settings.png",
        .pos_sprite = {600, 200},
        .size_sprite = {1, 1},
        .choose_opt = 1,
    },
    {
        .path_img = "game_src/butons/Menu/Large/Colored/Controls.png",
        .pos_sprite = {600, 600},
        .size_sprite = {1, 1},
        .choose_opt = 2,
    },
    {
        .path_img = "game_src/butons/Menu/Large/Colored/Quit.png",
        .pos_sprite = {750, 900},
        .size_sprite = {0.5, 0.5},
        .choose_opt = 3,
    }
};

const int size_settings_button_game_menu = NB_ELEM(settings_button_game_menu);
