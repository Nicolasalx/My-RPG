/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** glacial_slow.c
*/

#include "tree.h"
#include "inventory.h"

void glacial_slow(int i)
{
    if (attackspeed_up == true && is_glacial_slow == false &&
    inventory_content.nb_xp >= 10) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_glacial_slow = true;
        inventory_content.nb_xp -= 10;
        return;
    }
    if (attackspeed_up == false) {
        print("Please Unlock First Your Attack Speed\n");
        return;
    }
    if (is_glacial_slow == true) {
        print("Already Unlock Glacial Slow\n");
        return;
    }
    if (inventory_content.nb_xp < 10) {
        print("Not Enough XP\n");
    }
}
