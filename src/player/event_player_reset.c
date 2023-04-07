/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** event_player_reset.c
*/

#include "player.h"

void player_reset(void)
{
    if (player.player_anim.last_anim == WALK_UP ||
    player.anim_to_play == ATTACK_UP) {
        player.anim_to_play = IDLE_UP;
    }
    if (player.player_anim.last_anim == WALK_LEFT ||
    player.anim_to_play == ATTACK_LEFT) {
        player.anim_to_play = IDLE_LEFT;
    }
    if (player.player_anim.last_anim == WALK_RIGHT ||
    player.anim_to_play == ATTACK_RIGHT) {
        player.anim_to_play = IDLE_RIGHT;
    }
    if (player.player_anim.last_anim == WALK_DOWN ||
    player.anim_to_play == ATTACK_DOWN) {
        player.anim_to_play = IDLE_DOWN;
    }
}
