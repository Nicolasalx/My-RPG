/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** fureur.c
*/

#include "tree.h"
#include "inventory.h"

void fureur(int i)
{
    if (abilities[CRITICAL_UP] == true && abilities[IS_FUREUR] == false &&
    inventory_content.nb_xp >= 10) {
        abilities[IS_FUREUR] = true;
        inventory_content.nb_xp -= 10;
        return;
    }
    if (abilities[CRITICAL_UP] == false) {
        print("Please Unlock first Your Critical Chance\n");
        return;
    }
    if (abilities[IS_FUREUR] == true) {
        print("Already Unlock Fureur\n");
        return;
    }
    if (inventory_content.nb_xp < 10) {
        print("Not Enough XP\n");
    }
}
