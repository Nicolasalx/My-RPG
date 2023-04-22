/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** add_strenght.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void add_strenght(void)
{
    if (abilities[STRENGHT_UP] == false && inventory_content.nb_xp >= 6){
        abilities[STRENGHT_UP] = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (abilities[STRENGHT_UP] == true) {
        print("Already Upgrade your strenght\n");
        return;
    }
    if (inventory_content.nb_xp < 6) {
        print("Not Enough XP\n");
    }
}
