/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "main.h"
#include "settings.h"
#include "menu_game.h"


void setup_info_setting(void)
{
    for (int i = 0; i < size_settings_img; ++i) {
        sfRenderWindow_drawSprite(window, settings_img[i].sprite, NULL);
        if (is_mouse_over_sprite(settings_img[i].sprite) == true
            && mouse_button_pressed == true &&
            settings_img[i].can_quit == true) {
                can_open_settings = false;
                info_setting.last_index_frame = 0;
                info_setting.last_index_reso = 0;
                info_setting.nb_button_pressed = 0;
                info_setting.little_reso = false;
                info_setting.little_frame = false;
        }
    }
}

void setup_color_button_setting(void)
{
    for (int i = 0; i < size_button_settings; ++i) {
        sfRectangleShape_setFillColor(
            button_settings[i].rectangle,
        (sfColor) {COLOR_BG_BUTTON_SETTINGS});
    }
    if (info_setting.little_reso == true && is_fullscreen == false) {
        render_window.mode.width = 1280;
        render_window.mode.height = 720;
        sfRenderWindow_destroy(window);
        window = sfRenderWindow_create(render_window.mode,
        render_window.name, render_window.style, NULL);
    } else if (info_setting.little_reso == false && is_fullscreen == false) {
        render_window.mode.width = 1920;
        render_window.mode.height = 1080;
        sfRenderWindow_destroy(window);
        window = sfRenderWindow_create(render_window.mode,
        render_window.name, render_window.style, NULL);
    }
}

void setup_opt_3(void)
{
    if (info_setting.nb_button_pressed > 0) {
        setup_color_button_setting();
        if (info_setting.little_frame == true) {
            sfRenderWindow_setFramerateLimit(window, 30);
        } else {
            sfRenderWindow_setFramerateLimit(window, 60);
        }
        can_open_settings = false;
        info_setting.last_index_frame = 0;
        info_setting.last_index_reso = 0;
        info_setting.nb_button_pressed = 0;
        info_setting.little_reso = false;
        info_setting.little_frame = false;
    }
}

void render_button_pressed(int i)
{
    if (mouse_button_pressed == true &&
    is_mouse_over_rectangle_shape(button_settings[i].rectangle)) {
        change_fps(i);
        change_resolution(i);
        if (button_settings[i].choose_opt == 3) {
            setup_opt_3();
        }
    }
}

void render_settings(void)
{
    setup_info_setting();
    for (int i = 0; i < size_button_settings; ++i) {
        sfRenderWindow_drawRectangleShape(window,
        button_settings[i].rectangle, NULL);
        sfRenderWindow_drawText(window, button_settings[i].text, NULL);
        render_button_pressed(i);
    }
}
