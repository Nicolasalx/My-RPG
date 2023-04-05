/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** main_loop
*/

#include "main.h"

void main_loop(void)
{
    create_render_window();
    create_all_data();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        render_all_data();
//        render_all_data();
        manage_event();
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
