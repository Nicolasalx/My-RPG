/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "menu_game.h"
#include "my_def.h"

img_button_menu_t img_button_menu[] = {
    {.pos = {800, 250}, .path_img = "game_src/Menu_button/play.png",
    .size = {1.7, 1.7}, .redirect = play_button},

    {.pos = {800, 450}, .path_img = "game_src/Menu_button/setting.png",
    .size = {1.7, 1.7}, .redirect = setting_button},

    {.pos = {790, 650}, .path_img = "game_src/Menu_button/quit.png",
    .size = {1.7, 1.7}, .redirect = quit_button},
};

const int size_img_button_menu = NB_ELEM(img_button_menu);

bool quit_status;
