/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "main.h"
#include "settings.h"

#define COLOR_PRESSED_SETTINGS 177, 98, 49, 120

bool can_open_settings = false;

void render_settings(void)
{
    static int last_index_frame = 0;
    static int last_index_reso = 0;
    static int nb_button_pressed = 0;
    static bool little_frame = false;
    static bool little_reso = false;

    for (int i = 0; i < size_settings_img; ++i) {
        sfRenderWindow_drawSprite(window, settings_img[i].sprite, NULL);
        if (is_mouse_over_sprite(settings_img[i].sprite) == true
            && mouse_button_pressed == true && settings_img[i].can_quit == true) {
                can_open_settings = false;
                last_index_frame = 0;
                last_index_reso = 0;
                nb_button_pressed = 0;
                little_reso = false;
                little_frame = false;
        }
    }
    for (int i = 0; i < size_button_settings; ++i) {
        sfRenderWindow_drawRectangleShape(window, button_settings[i].rectangle, NULL);
        sfRenderWindow_drawText(window, button_settings[i].text, NULL);
        if (mouse_button_pressed == true && is_mouse_over_rectangle_shape(button_settings[i].rectangle)) {
            if (button_settings[i].choose_opt == 1) {
                if (my_strcmp(button_settings[i].text_to_write, "30 fps") == 0) {
                    little_frame = true;
                } else {
                    little_frame = false;
                }
                sfRectangleShape_setFillColor(button_settings[last_index_frame].rectangle, (sfColor) {COLOR_BG_BUTTON_SETTINGS});
                sfRectangleShape_setFillColor(button_settings[i].rectangle, (sfColor) {COLOR_PRESSED_SETTINGS});
                last_index_frame = i;
                ++ nb_button_pressed;
            }
            if (button_settings[i].choose_opt == 2) {
                if (my_strcmp(button_settings[i].text_to_write, "1280x920") == 0) {
                    little_reso = true;
                } else {
                    little_reso = false;
                }
                sfRectangleShape_setFillColor(button_settings[last_index_reso].rectangle, (sfColor) {COLOR_BG_BUTTON_SETTINGS});
                sfRectangleShape_setFillColor(button_settings[i].rectangle, (sfColor) {COLOR_PRESSED_SETTINGS});
                last_index_reso = i;
                ++ nb_button_pressed;
            }
            if (button_settings[i].choose_opt == 3) {
                if (nb_button_pressed > 1) {
                    if (little_reso == true) {
                        render_window.mode.width = 1280;
                        render_window.mode.height = 920;
                        sfRenderWindow_destroy(window);
                        window = sfRenderWindow_create(render_window.mode,
                        render_window.name, render_window.style, NULL);
                    } else {
                        render_window.mode.width = 1920;
                        render_window.mode.height = 1080;
                        sfRenderWindow_destroy(window);
                        window = sfRenderWindow_create(render_window.mode,
                        render_window.name, render_window.style, NULL);
                    }
                    if (little_frame == true) {
                        sfRenderWindow_setFramerateLimit(window, 30);
                    } else {
                        sfRenderWindow_setFramerateLimit(window, 60);
                    }
                    can_open_settings = false;
                    last_index_frame = 0;
                    last_index_reso = 0;
                    nb_button_pressed = 0;
                    little_reso = false;
                    little_frame = false;
                }
            }
        }
    }
}
