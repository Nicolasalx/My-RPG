/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** critical.c
*/

#include "tree.h"
#include "player.h"

void critical(int i)
{
    if (strenght_up == true && critical_up == false){
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        critical_up = true;
        return;
    }
    if (strenght_up == false) {
        print("Please Unlock First The Damages Upgrade\n");
        return;
    }
    if (critical_up == true) {
        print("Already Unlock Your Critical Chances\n");
    }
}
