/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** event_player
*/

#include "player.h"

void event_player(sfEvent *event)
{
    if (event->type == sfEvtKeyPressed && event->key.code == sfKeyA) {
        if (player.player_anim.last_anim == WALK_UP
        || player.player_anim.last_anim == IDLE_UP)
            player.anim_to_play = ATTACK_UP;
        if (player.player_anim.last_anim == WALK_LEFT
        || player.player_anim.last_anim == IDLE_LEFT)
            player.anim_to_play = ATTACK_LEFT;
        if (player.player_anim.last_anim == WALK_RIGHT
        || player.player_anim.last_anim == IDLE_RIGHT)
            player.anim_to_play = ATTACK_RIGHT;
        if (player.player_anim.last_anim == WALK_DOWN
        || player.player_anim.last_anim == IDLE_DOWN)
            player.anim_to_play = ATTACK_DOWN;
    }
    if (event->type == sfEvtKeyPressed) {
        player_move(event);
    }
    if (event->type == sfEvtKeyReleased) {
        player_reset();
    }
}
