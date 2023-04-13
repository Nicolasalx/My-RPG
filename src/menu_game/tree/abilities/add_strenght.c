/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** add_strenght.c
*/

#include "tree.h"

void add_strenght(int i)
{
    if (strenght_up == false){
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        strenght_up = true;
    } else {
        print("Already Upgrade your strenght\n");
    }
}
