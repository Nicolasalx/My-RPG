/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "menu_game.h"
#include "main.h"
#include "my_graphical.h"
#include "settings.h"

void setting_button(void)
{
    can_open_settings = true;
}

void resize_button(void)
{
    if (is_fullscreen == true) {
        sfRenderWindow_destroy(window);
        window = sfRenderWindow_create(
            render_window.mode,
            "my_rpg",
            sfTitlebar | sfClose,
            NULL);
        is_fullscreen = false;
    } else if (is_fullscreen == false) {
        sfRenderWindow_destroy(window);
        window = sfRenderWindow_create(
            render_window.mode,
            "my_rpg",
            sfFullscreen,
            NULL);
        is_fullscreen = true;
    }
}

void render_menu(void)
{
    for (int i = 0; i < size_img_button_menu; ++i) {
        if (is_mouse_over_sprite(img_button_menu[i].sprite) == true
            && mouse_button_pressed == true) {
            img_button_menu[i].redirect();
        }
        sfRenderWindow_drawSprite(window, img_button_menu[i].sprite, NULL);
    }
    if (can_open_settings == true) {
        render_settings();
    }
}
