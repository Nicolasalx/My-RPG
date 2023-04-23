/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** blood_bath.c
*/

#include "tree.h"
#include "inventory.h"

void blood_bath(void)
{
    if (abilities[REGENE] == true && abilities[IS_BLOODBATH] == false &&
    inventory_content.nb_xp >= 10) {
        abilities[IS_BLOODBATH] = true;
        inventory_content.nb_xp -= 10;
        return;
    }
    if (abilities[REGENE] == false) {
        return;
    }
    if (abilities[IS_BLOODBATH] == true) {
        return;
    }
    if (inventory_content.nb_xp < 10) {
        return
    }
}
