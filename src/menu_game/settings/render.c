/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "game_menu.h"
#include "settings.h"
#include "menu_game.h"
#include "inventory.h"

void display_settings_and_tuto(bool *open_settings, bool *open_tuto)
{
    if (*open_tuto == true && *open_settings == false) {
        can_open_tutorial = true;
        render_tutorial();
        can_open_tutorial = false;
        if (is_mouse_over_sprite(settings_button_game_menu[2].sprite) &&
            mouse_button_pressed == true) {
            *open_tuto = false;
        }
        sfRenderWindow_drawSprite(window, settings_button_game_menu[2].sprite,
            NULL);
    } else if (*open_settings == true && *open_tuto == false) {
        render_settings();
        if (is_mouse_over_sprite(settings_button_game_menu[2].sprite) &&
            mouse_button_pressed == true) {
            *open_settings = false;
        }
        sfRenderWindow_drawSprite(window, settings_button_game_menu[2].sprite,
            NULL);
    }
}

void choose_opt_tuto_or_settings(int i, bool *open_tuto, bool *open_settings)
{
    if (settings_button_game_menu[i].choose_opt == 2) {
        *open_settings = false;
        *open_tuto = true;
    } else if (settings_button_game_menu[i].choose_opt == 1) {
        *open_tuto = false;
        *open_settings = true;
    }
}

void display_settings_inventory(void)
{
    static bool open_settings = false;
    static bool open_tuto = false;
    display_settings_and_tuto(&open_settings, &open_tuto);
    for (int i = 0; i < size_settings_button_game_menu; ++i) {
        if (is_mouse_over_sprite(settings_button_game_menu[i].sprite) &&
            mouse_button_pressed == true) {
            choose_opt_tuto_or_settings(i, &open_tuto, &open_settings);
        }
        if (open_settings == false && open_tuto == false &&
            settings_button_game_menu[i].choose_opt != 3) {
            sfRenderWindow_drawSprite(window, settings_button_game_menu[i].
                sprite, NULL);
        }
    }
}
