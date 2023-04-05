/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** main_loop
*/

#include "main.h"

void main_loop(void)
{
    sfEvent event;

    create_render_window();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
//        render_all_data();
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
