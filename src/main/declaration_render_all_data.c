/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_render_all_data
*/

#include "main.h"
#include "menu_game.h"
#include "quest.h"
#include "player.h"
#include "settings.h"
#include "map.h"
#include "game_menu.h"
#include "tree.h"
#include "level_arrow.h"
#include "system_bot_skelet.h"
#include "collision_map.h"
#include "manage_view.h"

render_func_t render_func[] = {
    {render_map, GAME},
    {render_menu, MENU},
    //{render_level_arrow, GAME},
    {render_system_bot, GAME},
    {render_player, GAME},
    {render_menu_quest, GAME},
    {render_tutorial, MENU},
    {render_game_menu_button, GAME},
    {render_collision_map, GAME},
    {render_view, GAME},
    {NULL, 0}
};
