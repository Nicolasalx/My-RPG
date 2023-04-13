/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** attack_speed.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void attack_speed_upgrade(int i)
{
    if (is_speed_up == true && attackspeed_up == false &&
    inventory_content.nb_xp >= 8) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        attackspeed_up = true;
        inventory_content.nb_xp -= 8;
        return;
    }
    if (is_speed_up == false) {
        print("Please Unlock First Your Movement Speed Upgrade\n");
        return;
    }
    if (attackspeed_up == true) {
        print("Already Upgrade Your Attack Speed \n");
        return;
    }
    if (inventory_content.nb_xp < 8) {
        print("Not Enough XP\n");
    }
}
