/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** final.c
*/

#include "tree.h"
#include "inventory.h"

void final(int i)
{
    if (is_fureur == true && is_bloodbath == true &&
        is_glacial_slow == true && is_final == false
        && inventory_content.nb_xp >= 12) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_final = true;
        inventory_content.nb_xp -= 12;
        return;
    }
    if (is_fureur == false || is_bloodbath == false ||
        is_glacial_slow == false) {
        print("Please Unlock First The 3 Last Abilities Of Each Lines\n");
        return;
    }
    if (is_final == true) {
        print("You Already Have The Final Upgrade\n");
        return;
    }
    if (inventory_content.nb_xp < 12) {
        print("Not Enough XP\n");
    }
}
