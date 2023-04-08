/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_event
*/

#include "main.h"
#include "quest.h"
#include "menu_game.h"

void execute_event(sfEvent event)
{
    if (event.type == sfEvtClosed || quit_status == true) {
        sfRenderWindow_close(window);
    }
    if (game_state == GAME && event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyEscape) {
        print("GAME_MENU\n");
        can_open_game_menu = true;
    }
    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (event.type == sfEvtMouseButtonPressed) {
        mouse_button_pressed = true;
    }
    if (event.type == sfEvtMouseButtonReleased) {
        mouse_button_released = true;
    }
    if (display_quest == false && event.type == sfEvtKeyPressed
    && event.key.code == sfKeyH) {
        display_quest = true;
    } else if (display_quest == true && event.type == sfEvtKeyPressed
    && event.key.code == sfKeyH) {
        display_quest = false;
    }
    for (int i = 0; handle_event[i] != NULL; ++i) {
        handle_event[i](&event);
    }
}

void manage_event(void)
{
    sfEvent event;

    mouse_button_maintain = sfMouse_isButtonPressed(sfMouseLeft);
    mouse_button_pressed = false;
    mouse_button_released = false;
    while (sfRenderWindow_pollEvent(window, &event)) {
        execute_event(event);
    }
}
