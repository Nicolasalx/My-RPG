/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_rectangle.c
*/

#include "inventory.h"
#include "main.h"
#include "game_menu.h"

void create_rectangle_front(int i)
{
        inventory_front[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setOutlineThickness(inventory_front[i].rectangle,
            3);
        sfRectangleShape_setOutlineColor(inventory_front[i].rectangle,
        sfBlack);
        sfRectangleShape_setSize(inventory_front[i].rectangle,
            inventory_front[i].size_rectangle);
        sfRectangleShape_setFillColor(inventory_front[i].rectangle,
            (sfColor) {COLOR_BUTTON_GAME_MENU});
        sfRectangleShape_setPosition(inventory_front[i].rectangle,
            inventory_front[i].pos_rectangle);
}

void create_front_inventory(void)
{
    for (int i = 0; i < size_inventory_front; ++i) {
        inventory_front[i].text = sfText_create();
        sfText_setString(inventory_front[i].text,
        inventory_front[i].text_to_write);
        sfText_setFont(inventory_front[i].text, font);
        sfText_setCharacterSize(inventory_front[i].text,
            inventory_front[i].size_text);
        sfText_setPosition(inventory_front[i].text,
        inventory_front[i].pos_text);
        sfText_setFillColor(inventory_front[i].text, sfWhite);

        create_rectangle_front(i);
    }
}

void create_clothes_rectangle(int i)
{
    clothes_inventory[i].rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(clothes_inventory[i].rectangle,
        3);
    sfRectangleShape_setOutlineColor(clothes_inventory[i].rectangle,
    sfBlack);
    sfRectangleShape_setSize(clothes_inventory[i].rectangle,
        clothes_inventory[i].size_rectangle);
    sfRectangleShape_setFillColor(clothes_inventory[i].rectangle,
        (sfColor) {CLOTHES_RECTANGLE_COLOR});
    sfRectangleShape_setPosition(clothes_inventory[i].rectangle,
        clothes_inventory[i].pos_rectangle);
}
