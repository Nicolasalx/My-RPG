/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** reso_fps
*/


#include "main.h"
#include "settings.h"
#include "menu_game.h"

void change_resolution(int i)
{
    if (button_settings[i].choose_opt == 2) {
        if (my_strcmp(button_settings[i].text_to_write, "1280x720") == 0) {
            info_setting.little_reso = true;
        } else {
            info_setting.little_reso = false;
        }
        sfRectangleShape_setFillColor(
            button_settings[info_setting.last_index_reso].rectangle,
        (sfColor) {COLOR_BG_BUTTON_SETTINGS});
        sfRectangleShape_setFillColor(button_settings[i].rectangle,
        (sfColor) {COLOR_PRESSED_SETTINGS});
        info_setting.last_index_reso = i;
        ++ info_setting.nb_button_pressed;
    }
}

void change_fps(int i)
{
    if (button_settings[i].choose_opt == 1) {
        if (my_strcmp(button_settings[i].text_to_write, "30 fps") == 0) {
            info_setting.little_frame = true;
        } else {
            info_setting.little_frame = false;
        }
        sfRectangleShape_setFillColor(
            button_settings[info_setting.last_index_frame].rectangle,
        (sfColor) {COLOR_BG_BUTTON_SETTINGS});
        sfRectangleShape_setFillColor(button_settings[i].rectangle,
        (sfColor) {COLOR_PRESSED_SETTINGS});
        info_setting.last_index_frame = i;
        ++ info_setting.nb_button_pressed;
    }
}
