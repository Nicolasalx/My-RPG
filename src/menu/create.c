/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "menu_game.h"

void create_menu_button(int i)
{
    img_button_menu[i].texture = sfTexture_createFromFile
        (img_button_menu[i].path_img, NULL);
    img_button_menu[i].sprite = sfSprite_create();
    sfSprite_setTexture(img_button_menu[i].sprite, img_button_menu[i].texture,
        sfTrue);
    sfSprite_setScale(img_button_menu[i].sprite, img_button_menu[i].size);
    sfSprite_setPosition(img_button_menu[i].sprite, img_button_menu[i].pos);
}

void ini_menu_button(void)
{
    for (int i = 0; i < size_img_button_menu; ++i) {
        create_menu_button(i);
    }
}
