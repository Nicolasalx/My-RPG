/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_event
*/

#include "main.h"
#include "quest.h"
#include "menu_game.h"
#include "player.h"
#include "map.h"
#include "manage_view.h"
#include "stdio.h"

void change_level(void)
{
    if (current_level == 0 && player.pos.x >= 310 && player.pos.x <= 384 &&
    player.pos.y >= 127 && player.pos.y <= 176 &&
    sfKeyboard_isKeyPressed(sfKeyE)) {
        go_to_next_level = true;
    }
    if (current_level == 0 && player.pos.x >= 1215 && player.pos.x <= 1285 &&
    player.pos.y >= 127 && player.pos.y <= 176 &&
    sfKeyboard_isKeyPressed(sfKeyE)) {
        go_to_next_level = true;
    }
}

void open_game_menu(sfEvent event)
{
    if (can_open_game_menu == true && game_state == GAME &&
        event.type == sfEvtKeyPressed &&
    event.key.code == sfKeyEscape) {
        can_open_game_menu = false;
    } else if (game_state == GAME && event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyEscape) {
        can_open_game_menu = true;
    }
}

void execute_event(sfEvent event)
{
    if (event.type == sfEvtClosed || quit_status == true) {
        sfRenderWindow_close(window);
    }
    open_game_menu(event);
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
    change_level();
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
