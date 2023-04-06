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
    player.anim_to_play = ATTACK;
    anim_sprite(&player.player_anim, player.anim_to_play);
    sfRenderWindow_drawSprite(window, player.player_anim.sprite_sheet[player.anim_to_play].sprite, NULL);
}
