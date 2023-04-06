/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create.c
*/

#include "quest.h"

void create_menu_quest(void)
{
    for (int i = 0; i < size_quest_menu; ++i) {
        img_quest_menu[i].texture = sfTexture_createFromFile
        (img_quest_menu[i].path_img, NULL);
        img_quest_menu[i].sprite = sfSprite_create();
        sfSprite_setTexture(img_quest_menu[i].sprite,
            img_quest_menu[i].texture, sfTrue);
        sfSprite_setScale(img_quest_menu[i].sprite, img_quest_menu[i].size);
        sfSprite_setPosition(img_quest_menu[i].sprite, img_quest_menu[i].pos);
    }
}
