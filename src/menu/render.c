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

bool can_open_tutorial = false;

void setting_button(void)
{
    can_open_settings = true;
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

void render_tutorial(void)
{
    if (can_open_tutorial == true) {
        for (int i = 0; i < size_tutorial_info; ++i) {
            if (is_mouse_over_sprite(tutorial_info[i].sprite) == true
            && mouse_button_pressed == true && tutorial_info[i].can_quit == true) {
                can_open_tutorial = false;
            }
            sfRenderWindow_drawSprite(window, tutorial_info[i].sprite, NULL);
            sfRenderWindow_drawText(window, tutorial_info[i].text, NULL);
        }
    }
}
