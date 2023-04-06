/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_player
*/

#include "player.h"

void create_player(void)
{
    for (int i = 0; i < NB_ANIM_PLAYER; ++i) {
        player.player_anim[i].texture = sfTexture_createFromFile(
            player.player_anim[i].sheet_path, NULL);
        player.player_anim[i].sprite = sfSprite_create();
        sfSprite_setTexture(player.player_anim[i].sprite,
            player.player_anim[i].texture, sfFalse);
        player.player_anim[i].texture_size = sfTexture_getSize
            (player.player_anim[i].texture);
    }
}
