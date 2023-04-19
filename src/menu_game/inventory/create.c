/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "inventory.h"
#include "main.h"
#include "game_menu.h"

void create_clothes_sprite(int i)
{
    clothes_inventory[i].texture = sfTexture_createFromFile
    (clothes_inventory[i].path_img, NULL);
    clothes_inventory[i].sprite = sfSprite_create();
    sfSprite_setTexture(clothes_inventory[i].sprite,
        clothes_inventory[i].texture, sfTrue);
    sfSprite_setScale(clothes_inventory[i].sprite,
        clothes_inventory[i].size_sprite);
    sfSprite_setPosition(clothes_inventory[i].sprite,
        clothes_inventory[i].pos_sprite);
}

void create_clothes_inventory(void)
{
    for (int i = 0; i < size_clothes_inventory; ++i) {
        clothes_inventory[i].text = sfText_create();
        sfText_setString(clothes_inventory[i].text,
        clothes_inventory[i].text_to_write);
        sfText_setFont(clothes_inventory[i].text, font);
        sfText_setCharacterSize(clothes_inventory[i].text,
            clothes_inventory[i].size_text);
        sfText_setPosition(clothes_inventory[i].text,
        clothes_inventory[i].pos_text);
        sfText_setFillColor(clothes_inventory[i].text,
            clothes_inventory[i].color_text);

        create_clothes_rectangle(i);
        create_clothes_sprite(i);
    }
}

void create_rectangle_stuff(int i)
{
    stuff_inventory[i].rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(stuff_inventory[i].rectangle,
        3);
    sfRectangleShape_setOutlineColor(stuff_inventory[i].rectangle,
    sfBlack);
    sfRectangleShape_setSize(stuff_inventory[i].rectangle,
        stuff_inventory[i].size_rectangle);
    sfRectangleShape_setFillColor(stuff_inventory[i].rectangle,
        (sfColor) {CLOTHES_RECTANGLE_COLOR});
    sfRectangleShape_setPosition(stuff_inventory[i].rectangle,
        stuff_inventory[i].pos_rectangle);
}

void create_stuff_sprite(int i)
{
    stuff_inventory[i].texture = sfTexture_createFromFile
    (stuff_inventory[i].path_img, NULL);
    stuff_inventory[i].sprite = sfSprite_create();
    sfSprite_setTexture(stuff_inventory[i].sprite,
        stuff_inventory[i].texture, sfTrue);
    sfSprite_setScale(stuff_inventory[i].sprite,
        stuff_inventory[i].size_sprite);
    sfSprite_setPosition(stuff_inventory[i].sprite,
        stuff_inventory[i].pos_sprite);
}

void create_stuff_inventory(void)
{
    for (int i = 0; i < size_stuff_inventory; ++i) {
        stuff_inventory[i].text = sfText_create();
        sfText_setString(stuff_inventory[i].text,
        stuff_inventory[i].text_to_write);
        sfText_setFont(stuff_inventory[i].text, font);
        sfText_setCharacterSize(stuff_inventory[i].text,
            stuff_inventory[i].size_text);
        sfText_setPosition(stuff_inventory[i].text,
        stuff_inventory[i].pos_text);
        sfText_setFillColor(stuff_inventory[i].text,
            stuff_inventory[i].color_text);
        create_rectangle_stuff(i);
        create_stuff_sprite(i);
    }
}
