/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** abilities.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void speed_up(void)
{
    if (abilities[SPEED_UP] == false && inventory_content.nb_xp >= 6) {
        abilities[SPEED_UP] = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (abilities[SPEED_UP] == true){
        print("Already Upgrade Your Movement Speed\n");
        return;
    }
    if (inventory_content.nb_xp < 6) {
        print("Not Enough XP\n");
    }
}
