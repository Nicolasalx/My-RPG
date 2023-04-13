/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** fureur.c
*/

#include "tree.h"

void fureur(int i)
{
    if (critical_up == true && is_fureur == false) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        is_fureur = true;
        return;
    }
    if (critical_up == false) {
        print("Please Unlock first Your Critical Chance\n");
        return;
    }
    if (is_fureur == true) {
        print("Already Unlock Fureur\n");
    }
}
