/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_all_data
*/

#include "main.h"
#include "menu_game.h"
#include "quest.h"
#include "settings.h"

sfFont* font;

void create_all_data(void)
{
    quit_status = false;
    display_quest = false;
    can_open_settings = false;
    mouse_button_pressed = false;
    mouse_button_maintain = false;
    mouse_button_released = false;
    is_fullscreen = false;

    for (int i = 0; create[i] != NULL; ++i) {
        create[i]();
    }
}
