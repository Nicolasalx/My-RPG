/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** free_all_data
*/

#include "main.h"
#include "inventory.h"

void free_all_data(void)
{
    for (int i = 0; i < size_clothes_inventory; ++i) {
        sfRectangleShape_destroy(clothes_inventory[i].rectangle);
        sfSprite_destroy(clothes_inventory[i].sprite);
    }
    return;
}
