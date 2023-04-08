/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_main
*/

#include "main.h"

sfRenderWindow *window = NULL;

render_window_t render_window = {
    .mode = {1920, 1080, 32},
    .name = "my_rpg",
    .style = sfTitlebar | sfClose,
    .fps = 60
};

bool is_create_success = {true};
game_state_t game_state = {MENU};
