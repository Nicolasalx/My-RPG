/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** critical.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void critical(void)
{
    if (abilities[STRENGHT_UP] == true && abilities[CRITICAL_UP] == false &&
    inventory_content.nb_xp >= 8){
        abilities[CRITICAL_UP] = true;
        inventory_content.nb_xp -= 8;
        return;
    }
    if (abilities[STRENGHT_UP] == false) {
        return;
    }
    if (abilities[CRITICAL_UP] == true) {
        return;
    }
    if (inventory_content.nb_xp < 8) {
        return;
    }
}
