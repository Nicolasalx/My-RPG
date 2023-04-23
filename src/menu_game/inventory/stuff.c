/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** stuff.c
*/

#include "inventory.h"
#include "main.h"
#include "heal_xp_bar.h"
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
    switch (clothes_inventory[i].content_clothes) {
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
