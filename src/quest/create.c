/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create.c
*/

#include "quest.h"
#include "main.h"

void create_menu_quest(void)
{
    for (int i = 0; i < size_quest_menu; ++i) {
        img_quest_menu[i].text = sfText_create();
        sfText_setFont(img_quest_menu[i].text, font);
        sfText_setCharacterSize(img_quest_menu[i].text, img_quest_menu[i].size_text);
        sfText_setString(img_quest_menu[i].text, img_quest_menu[i].text_to_write);
        sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
        sfText_setFillColor(img_quest_menu[i].text, img_quest_menu[i].color_text);

        img_quest_menu[i].texture = sfTexture_createFromFile
        (img_quest_menu[i].path_img, NULL);
        img_quest_menu[i].sprite = sfSprite_create();
        sfSprite_setTexture(img_quest_menu[i].sprite,
            img_quest_menu[i].texture, sfTrue);
        sfSprite_setScale(img_quest_menu[i].sprite, img_quest_menu[i].size);
        sfSprite_setPosition(img_quest_menu[i].sprite, img_quest_menu[i].pos);
    }
}
