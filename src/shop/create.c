/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "shop.h"
#include "main.h"

void create_rectangle_sprite_shop(int i)
{
    shop[i].rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(shop[i].rectangle, 3);
    sfRectangleShape_setOutlineColor(shop[i].rectangle, sfBlack);
    sfRectangleShape_setSize(shop[i].rectangle, shop[i].size_rectangle);
    sfRectangleShape_setFillColor(shop[i].rectangle, shop[i].color_rectangle);
    sfRectangleShape_setPosition(shop[i].rectangle, shop[i].pos_rectangle);
    shop[i].texture = sfTexture_createFromFile(shop[i].path_img, NULL);
    shop[i].sprite = sfSprite_create();
    sfSprite_setScale(shop[i].sprite, shop[i].size_sprite);
    sfSprite_setTexture(shop[i].sprite, shop[i].texture, sfTrue);
    sfSprite_setPosition(shop[i].sprite, shop[i].pos_sprite);
}

void create_shop(void)
{
    detect_shop.rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(detect_shop.rectangle, 3);
    sfRectangleShape_setOutlineColor(detect_shop.rectangle, sfBlack);
    sfRectangleShape_setSize(detect_shop.rectangle,
        detect_shop.size_rectangle);
    sfRectangleShape_setFillColor(detect_shop.rectangle,
        detect_shop.color_rectangle);
    sfRectangleShape_setPosition(detect_shop.rectangle,
        detect_shop.pos_rectangle);

    for (int i = 0; i < size_shop; ++i) {
        shop[i].text = sfText_create();
        sfText_setString(shop[i].text, shop[i].text_to_write);
        sfText_setFont(shop[i].text, font);
        sfText_setCharacterSize(shop[i].text, shop[i].size_text);
        sfText_setPosition(shop[i].text, shop[i].pos_text);
        sfText_setFillColor(shop[i].text, shop[i].color_text);

        create_rectangle_sprite_shop(i);
    }
}
