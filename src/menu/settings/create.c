/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "main.h"
#include "settings.h"

void create_img_settings(void)
{
    for (int i = 0; i < size_settings_img; ++i) {
        settings_img[i].texture = sfTexture_createFromFile
        (settings_img[i].path_img, NULL);
        settings_img[i].sprite = sfSprite_create();
        sfSprite_setTexture(settings_img[i].sprite,
            settings_img[i].texture, sfTrue);
        sfSprite_setScale(settings_img[i].sprite, settings_img[i].size);
        sfSprite_setPosition(settings_img[i].sprite, settings_img[i].pos);
    }
}

void create_button_settings(void)
{
    for (int i = 0; i < size_button_settings; ++i) {
        button_settings[i].text = sfText_create();
        sfText_setString(button_settings[i].text,
        button_settings[i].text_to_write);
        sfText_setFont(button_settings[i].text, font);
        sfText_setCharacterSize(button_settings[i].text, 50);
        sfText_setPosition(button_settings[i].text,
        button_settings[i].pos_text);
        sfText_setFillColor(button_settings[i].text, sfWhite);
        button_settings[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setOutlineThickness(button_settings[i].rectangle,
            3);
        sfRectangleShape_setOutlineColor(button_settings[i].rectangle,
        sfBlack);
        sfRectangleShape_setSize(button_settings[i].rectangle,
            button_settings[i].size);
        sfRectangleShape_setFillColor(button_settings[i].rectangle,
            (sfColor) {COLOR_BG_BUTTON_SETTINGS});
        sfRectangleShape_setPosition(button_settings[i].rectangle,
            button_settings[i].pos);
    }
}
