/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_render_all_data
*/

#include "menu_game.h"
#include "quest.h"
#include "player.h"
#include "settings.h"
#include "map.h"

void (*render[])(void) = {
    render_map,
    render_menu,
    render_menu_quest,
    render_player,
    render_tutorial,
    NULL
};
