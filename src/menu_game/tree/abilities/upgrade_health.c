/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** upgrade_health.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void upgrade_health(void)
{
    if (abilities[HEALTH_UP] == false && inventory_content.nb_xp >= 6) {
        abilities[HEALTH_UP] = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (abilities[HEALTH_UP] == true) {
        return;
    }
    if (inventory_content.nb_xp < 6) {
        return;
    }
}
