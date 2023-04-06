/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** main_loop
*/

#include "main.h"

sfBool mouse_button_pressed = false;
sfBool mouse_button_maintain = false;
sfBool mouse_button_released = false;
sfVector2i mouse_pos = {0, 0};

void main_loop(void)
{
    create_render_window();
    create_all_data();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        manage_event();
        render_all_data();
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
