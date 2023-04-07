/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** event_player_move.c
*/

#include "player.h"

void player_move(sfEvent *event)
{
    switch (event->key.code) {
    case sfKeyZ:
        player.pos.y -= 3;
        player.anim_to_play = WALK_UP;
        break;
    case sfKeyQ:
        player.pos.x -= 3;
        player.anim_to_play = WALK_LEFT;
        break;
    case sfKeyS:
        player.pos.y += 3;
        player.anim_to_play = WALK_DOWN;
        break;
    case sfKeyD:
        player.pos.x += 3;
        player.anim_to_play = WALK_RIGHT;
        break;
    default:
        break;
    }
}
