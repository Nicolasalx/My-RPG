/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** upgrade_health.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void upgrade_health(int i)
{
    if (health_up == false && inventory_content.nb_xp >= 6) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        health_up = true;
        inventory_content.nb_xp -= 6;
        return;
    }
    if (health_up == true) {
        print("Already Upgrade Your Health\n");
        return;
    }
    if (inventory_content.nb_xp < 6) {
        print("Not Enough XP\n");
    }
}
