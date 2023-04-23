/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** attack_speed.c
*/

#include "tree.h"
#include "player.h"
#include "inventory.h"

void upgrade_as(void)
{
    player.player_anim.sprite_sheet[2].frame_rate = 15;
    player.player_anim.sprite_sheet[5].frame_rate = 15;
}

void attack_speed_upgrade(void)
{
    if (abilities[SPEED_UP] == true && abilities[ATTACKSPEED_UP] == false &&
    inventory_content.nb_xp >= 8) {
        abilities[ATTACKSPEED_UP] = true;
        inventory_content.nb_xp -= 8;
        return;
    }
    if (abilities[SPEED_UP] == false) {
        return;
    }
    if (abilities[ATTACKSPEED_UP] == true) {
        return;
    }
    if (inventory_content.nb_xp < 8) {
        return;
    }
}
