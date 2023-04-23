/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** final.c
*/

#include "tree.h"
#include "inventory.h"

void final(void)
{
    if (abilities[IS_FUREUR] == true && abilities[IS_BLOODBATH] == true &&
        abilities[IS_GLACIAL_SLOW] == true && abilities[IS_FINAL] == false
        && inventory_content.nb_xp >= 12) {
        abilities[IS_FINAL] = true;
        inventory_content.nb_xp -= 12;
        return;
    }
    if (abilities[IS_FUREUR] == false || abilities[IS_BLOODBATH] == false ||
        abilities[IS_GLACIAL_SLOW] == false) {
        return;
    }
    if (abilities[IS_FINAL] == true) {
        return;
    }
    if (inventory_content.nb_xp < 12) {
        return;
    }
}
