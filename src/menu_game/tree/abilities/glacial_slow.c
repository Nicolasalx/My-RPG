/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** glacial_slow.c
*/

#include "tree.h"
#include "inventory.h"

void glacial_slow(void)
{
    if (abilities[ATTACKSPEED_UP] == true &&
    abilities[IS_GLACIAL_SLOW] == false &&
    inventory_content.nb_xp >= 10) {
        abilities[IS_GLACIAL_SLOW] = true;
        inventory_content.nb_xp -= 10;
        return;
    }
    if (abilities[ATTACKSPEED_UP] == false) {
        return;
    }
    if (abilities[IS_GLACIAL_SLOW] == true) {
        return;
    }
    if (inventory_content.nb_xp < 10) {
        return;
    }
}
