/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_all_data
*/

#include "main.h"
#include "menu_game.h"

void render_all_data(void)
{
    for (int i = 0; render_func[i].render != NULL; ++i) {
        if (render_func[i].render_categ == game_state) {
            render_func[i].render();
        }
    }
}
