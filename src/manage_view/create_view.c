/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_view
*/

#include "main.h"

sfView *window_view;
bool go_to_next_level = {false};

void create_view(void)
{
    window_view = sfView_create();
    sfView_reset(window_view,
        (sfFloatRect) {
            0,
            0,
            render_window.mode.width,
            render_window.mode.height
        }
    );
    sfRenderWindow_setView(window, window_view);
}
