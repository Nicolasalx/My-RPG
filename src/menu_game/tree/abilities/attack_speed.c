/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** attack_speed.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void attack_speed_upgrade(void)
{
    if (abilities[SPEED_UP] == true && abilities[ATTACKSPEED_UP] == false &&
    inventory_content.nb_xp >= 8) {
        abilities[ATTACKSPEED_UP] = true;
        inventory_content.nb_xp -= 8;
        return;
    }
    if (abilities[SPEED_UP] == false) {
        print("Please Unlock First Your Movement Speed Upgrade\n");
        return;
    }
    if (abilities[ATTACKSPEED_UP] == true) {
        print("Already Upgrade Your Attack Speed \n");
        return;
    }
    if (inventory_content.nb_xp < 8) {
        print("Not Enough XP\n");
    }
}
