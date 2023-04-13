/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_view
*/

#include "manage_view.h"
#include "main.h"

void render_view(void)
{
    static unsigned int window_x = 0;

    if (go_to_next_level) {
        sfView_move(window_view, (sfVector2f) {LEVEL_TRANSITION_SPEED, 0});
        sfRenderWindow_setView(window, window_view);
        window_x += LEVEL_TRANSITION_SPEED;
        if (window_x > render_window.mode.width) {
            ++ current_level;
            go_to_next_level = false;
            window_x = 0;
        }
    }
}
