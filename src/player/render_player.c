/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_player
*/

#include "main.h"
#include "generic_func.h"
#include "player.h"

void render_player(void)
{
    anim_sprite(&player.player_anim, player.anim_to_play);
    for (int i = 0; i < NB_ANIM_PLAYER; ++i) {
        sfSprite_setPosition(player.player_anim.sprite_sheet[i].sprite, player.pos);
    }
    sfRenderWindow_drawSprite(window, player.player_anim.sprite_sheet[player.anim_to_play].sprite, NULL);
}
