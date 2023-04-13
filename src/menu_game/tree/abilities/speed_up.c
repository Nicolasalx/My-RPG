/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** abilities.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void speed_up(int i)
{
    if (is_speed_up == false && inventory_content.nb_xp >= 6) {
        player.speed *= 2;
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_speed_up = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (is_speed_up == true){
        print("Already Upgrade Your Movement Speed\n");
        return;
    }
    if (inventory_content.nb_xp < 6) {
        print("Not Enough XP\n");
    }
}
