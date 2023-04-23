/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** regeneration.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"
#include "heal_xp_bar.h"

void regeneration(void)
{
    if (abilities[HEALTH_UP] == true && abilities[REGENE] == false &&
    inventory_content.nb_xp >= 8) {
        abilities[REGENE] = true;
        inventory_content.nb_xp -= 8;
        return;
    }
    if (abilities[HEALTH_UP] == false) {
        return;
    }
    if (abilities[REGENE] == true) {
        return;
    }
    if (inventory_content.nb_xp < 8) {
        return;
    }
}
