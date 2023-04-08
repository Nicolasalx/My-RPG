/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** main_loop
*/

#include "main.h"

bool mouse_button_pressed;
bool mouse_button_maintain;
bool mouse_button_released;
sfVector2i mouse_pos = {0, 0};

void main_loop(void)
{
    create_render_window();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, (sfColor) {20, 24, 46, 255});
        manage_event();
        render_all_data();
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
