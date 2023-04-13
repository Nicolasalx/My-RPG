/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** blood_bath.c
*/

#include "tree.h"

void blood_bath(int i)
{
    if (regene == true && is_bloodbath == false) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_bloodbath = true;
        return;
    }
    if (regene == false) {
        print("Please Unlock First Fhe Regeneration\n");
        return;
    }
    if (is_bloodbath == true) {
        print("Already Unlock Blood Bath\n");
    }
}
