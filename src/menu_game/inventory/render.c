/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "inventory.h"
#include "main.h"
#include "game_menu.h"

void anim_helmet(sfColor *color)
{
    if (inventory_content.have_a_helmet == true) {
        color->a = 255;
    } else {
        color->a = 50;
    }
}

void anim_armor(sfColor *color)
{
    if (inventory_content.have_armor == true) {
        color->a = 255;
    } else {
        color->a = 50;
    }
}

void anim_gloves(sfColor *color)
{
    if (inventory_content.have_glove == true) {
        color->a = 255;
    } else {
        color->a = 50;
    }
}

void anim_boots(sfColor *color)
{
    if (inventory_content.have_boot == true) {
        color->a = 255;
    } else {
        color->a = 50;
    }
}

void anim_clothes(int i)
{
    sfColor color = sfSprite_getColor(clothes_inventory[i].sprite);
    switch (clothes_inventory[i].content_clothes)
    {
    case IS_HELMET:
        anim_helmet(&color);
        break;
    case IS_ARMOR:
        anim_armor(&color);
        break;
    case IS_GLOVES:
        anim_gloves(&color);
        break;
    case IS_BOOTS:
        anim_boots(&color);
        break;
    default:
        break;
    }
    sfSprite_setColor(clothes_inventory[i].sprite, color);
}

void display_first_part_item(void)
{
    if (inventory_content.money > 0) {
        char str[10];
        sfText_setString(stuff_inventory[0].text,
            int_to_string(inventory_content.money, str));
    } else {
        sfText_setString(stuff_inventory[0].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[0].text, NULL);

    if (inventory_content.nb_xp > 0) {
        char str[10];
        sfText_setString(stuff_inventory[1].text,
            int_to_string(inventory_content.nb_xp, str));
    } else {
        sfText_setString(stuff_inventory[1].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[1].text, NULL);
}

void display_second_part_item(void)
{
    if (inventory_content.nb_potion > 0) {
        char str[10];
        sfText_setString(stuff_inventory[2].text,
            int_to_string(inventory_content.nb_potion, str));
    } else {
        sfText_setString(stuff_inventory[2].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[2].text, NULL);
    if (inventory_content.have_totem == true) {
        char str[10];
        sfText_setString(stuff_inventory[3].text,
            int_to_string(1, str));
    } else {
        sfText_setString(stuff_inventory[3].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[3].text, NULL);
}

void display_nb_item(void)
{
    display_first_part_item();
    display_second_part_item();
    if (inventory_content.have_a_helmet == true) {
        char str[10];
        sfText_setString(stuff_inventory[4].text,
            int_to_string(1, str));
    } else {
        sfText_setString(stuff_inventory[4].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[4].text, NULL);
    if (inventory_content.nb_key > 0) {
        char str[10];
        sfText_setString(stuff_inventory[5].text,
            int_to_string(inventory_content.nb_key, str));
    } else {
        sfText_setString(stuff_inventory[5].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[5].text, NULL);
}

void display_inventory(void)
{
    for (int i = 0; i < size_inventory_front; ++i) {
        sfRenderWindow_drawRectangleShape(window, inventory_front[i].rectangle,
            NULL);
        sfRenderWindow_drawText(window, inventory_front[i].text, NULL);
    }
    for (int i = 0; i < size_clothes_inventory; ++i) {
        anim_clothes(i);
        sfRenderWindow_drawRectangleShape(window, clothes_inventory[i].
            rectangle, NULL);
        sfRenderWindow_drawSprite(window, clothes_inventory[i].sprite, NULL);
        sfRenderWindow_drawText(window, clothes_inventory[i].text, NULL);
    }
    display_nb_item();
    for (int i = 0; i < size_stuff_inventory; ++i) {
        sfRenderWindow_drawRectangleShape(window, stuff_inventory[i].rectangle,
            NULL);
        sfRenderWindow_drawSprite(window, stuff_inventory[i].sprite, NULL);
        sfRenderWindow_drawText(window, stuff_inventory[i].text, NULL);
    }
}
