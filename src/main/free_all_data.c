/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** free_all_data
*/

#include "main.h"
#include "inventory.h"
#include "tree.h"
#include "level_arrow.h"
#include "heal_xp_bar.h"

void free_all_data(void)
{
    for (int i = 0; i < size_clothes_inventory; ++i) {
        sfRectangleShape_destroy(clothes_inventory[i].rectangle);
        sfSprite_destroy(clothes_inventory[i].sprite);
    }
    for (int i = 0; i < size_touret_arrow; ++i) {
        sfCircleShape_destroy(touret_arrow[i].arrow);
        sfSprite_destroy(touret_arrow[i].sprite);
    }
    for (int i = 0; i < size_heal_xp_bar; ++i) {
        sfRectangleShape_destroy(heal_xp_bar[i].rectangle);
        sfText_destroy(heal_xp_bar[i].text);
    }
    for (int i = 0; i < size_tree; ++i) {
        sfSprite_destroy(fondation[i].sprite);
    }
    for (int i = 0; i < size_arrows; ++i) {
        sfSprite_destroy(arrows[i].sprite);
    }
    return;
}
