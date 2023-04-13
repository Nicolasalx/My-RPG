/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** add_strenght.c
*/

#include "tree.h"
#include "inventory.h"

void add_strenght(int i)
{
    if (strenght_up == false && inventory_content.nb_xp >= 6){
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        strenght_up = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (strenght_up == true) {
        print("Already Upgrade your strenght\n");
        return;
    }
    if (inventory_content.nb_xp < 6) {
        print("Not Enough XP\n");
    }
}
