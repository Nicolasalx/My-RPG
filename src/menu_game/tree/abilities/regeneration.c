/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** regeneration.c
*/

#include "tree.h"
#include "player.h"

void regeneration(int i)
{
    if (health_up == true && regene == false) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        regene = true;
        return;
    }
    if (health_up == false) {
        print("Please Unlock First Your Health\n");
        return;
    }
    if (regene == true) {
        print("Already Unlock Your Regeneration\n");
    }
}
