/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "main.h"
#include "menu_game.h"

void create_menu_button(void)
{
    for (int i = 0; i < size_img_button_menu; ++i) {
        img_button_menu[i].texture = sfTexture_createFromFile
        (img_button_menu[i].path_img, NULL);
        img_button_menu[i].sprite = sfSprite_create();
        sfSprite_setTexture(img_button_menu[i].sprite,
            img_button_menu[i].texture, sfTrue);
        sfSprite_setScale(img_button_menu[i].sprite, img_button_menu[i].size);
        sfSprite_setPosition(img_button_menu[i].sprite,
            img_button_menu[i].pos);
    }
}

void create_tutorial(void)
{
    for (int i = 0; i < size_tutorial_info; ++i) {
        tutorial_info[i].texture = sfTexture_createFromFile
        (tutorial_info[i].path_img, NULL);
        tutorial_info[i].sprite = sfSprite_create();
        sfSprite_setTexture(tutorial_info[i].sprite,
            tutorial_info[i].texture, sfTrue);
        sfSprite_setScale(tutorial_info[i].sprite, tutorial_info[i].size_sprite);
        sfSprite_setPosition(tutorial_info[i].sprite,
            tutorial_info[i].pos_sprite);

        tutorial_info[i].text = sfText_create();
        sfText_setString(tutorial_info[i].text, tutorial_info[i].text_to_write);
        sfText_setFont(tutorial_info[i].text, font);
        sfText_setCharacterSize(tutorial_info[i].text, 50);
        sfText_setPosition(tutorial_info[i].text, tutorial_info[i].pos_text);
        sfText_setFillColor(tutorial_info[i].text, sfWhite);
    }
}
