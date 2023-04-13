/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** upgrade_health.c
*/

#include "tree.h"
#include "player.h"

void upgrade_health(int i)
{
    if (health_up == false) {
        sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 255});
        health_up = true;
    } else {
        print("Already Upgrade Your Health\n");
    }
}
