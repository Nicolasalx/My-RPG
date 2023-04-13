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
    if (critical_up == true && is_fureur == false &&
    inventory_content.nb_xp >= 10) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_fureur = true;
        inventory_content.nb_xp -= 10;
        return;
    }
    if (critical_up == false) {
        print("Please Unlock first Your Critical Chance\n");
        return;
    }
    if (is_fureur == true) {
        print("Already Unlock Fureur\n");
        return;
    }
    if (inventory_content.nb_xp < 10) {
        print("Not Enough XP\n");
    }
}
