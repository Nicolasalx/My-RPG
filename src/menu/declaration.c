/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "menu_game.h"

img_button_menu_t img_button_menu [] = {
    {.pos = {800, 300}, .path_img = "game_src/Menu_button/settings.png",
    .size = {0.3, 0.3}, .redirect = setting_button},

    {.pos = {800, 500}, .path_img = "game_src/Menu_button/back_to_menu.png",
    .size = {0.3, 0.3}, .redirect = go_home_button},

    {.pos = {800, 700}, .path_img = "game_src/Menu_button/sound_plus.png",
    .size = {0.3, 0.3}, .redirect = sound_up_button},
};

const int size_img_button_menu =
    sizeof(img_button_menu) / sizeof(img_button_menu_t);
