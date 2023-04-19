/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "inventory.h"
#include "main.h"
#include "game_menu.h"

void display_first_part_item(void)
{
    if (inventory_content.money > 0) {
        sfText_setString(stuff_inventory[0].text,
            INT(inventory_content.money));
    } else {
        sfText_setString(stuff_inventory[0].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[0].text, NULL);

    if (inventory_content.nb_xp > 0) {
        sfText_setString(stuff_inventory[1].text,
            INT(inventory_content.nb_xp));
    } else {
        sfText_setString(stuff_inventory[1].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[1].text, NULL);
}

void display_second_part_item(void)
{
    if (inventory_content.nb_potion > 0) {
        sfText_setString(stuff_inventory[2].text,
            INT(inventory_content.nb_potion));
    } else {
        sfText_setString(stuff_inventory[2].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[2].text, NULL);
    if (inventory_content.have_totem == true) {
        sfText_setString(stuff_inventory[3].text,
            INT(1));
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
        sfText_setString(stuff_inventory[4].text,
            INT(1));
    } else {
        sfText_setString(stuff_inventory[4].text, "0");
    }
    sfRenderWindow_drawText(window, stuff_inventory[4].text, NULL);
    if (inventory_content.nb_key > 0) {
        sfText_setString(stuff_inventory[5].text,
            INT(inventory_content.nb_key));
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
