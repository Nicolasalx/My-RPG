/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_event
*/

#include "main.h"

void manage_event(void)
{
    sfEvent event;
    mouse_button_maintain = sfMouse_isButtonPressed(sfMouseLeft);
    mouse_button_pressed = false;
    mouse_button_released = false;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        if (event.type == sfEvtMouseButtonPressed) {
            mouse_button_pressed = true;
        }
        if (event.type == sfEvtMouseButtonReleased) {
            mouse_button_released = true;
        }
    }
}
