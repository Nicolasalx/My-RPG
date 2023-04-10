/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** event_player_move.c
*/

#include "player.h"

bool player_attack_left(unsigned int *anim_attack_frame)
{
    if (*anim_attack_frame != 0) {
        if (*anim_attack_frame
        >= player.player_anim.sprite_sheet[ATTACK_LEFT].nb_frame) {
            *anim_attack_frame = -1;
        }
        if (sfClock_getElapsedTime(player.player_anim.clock).microseconds /1000
        >= 1000 / player.player_anim.sprite_sheet[ATTACK_LEFT].frame_rate) {
            ++ *anim_attack_frame;
        }
        return true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        player.anim_to_play = ATTACK_LEFT;
        ++ *anim_attack_frame;
        return true;
    }
    return false;
}

bool player_attack_right(unsigned int *anim_attack_frame)
{
    if (*anim_attack_frame != 0) {
        if (*anim_attack_frame
        >= player.player_anim.sprite_sheet[ATTACK_RIGHT].nb_frame) {
            *anim_attack_frame = -1;
        }
        if (sfClock_getElapsedTime(player.player_anim.clock).microseconds /1000
        >= 1000 / player.player_anim.sprite_sheet[ATTACK_RIGHT].frame_rate) {
            ++ *anim_attack_frame;
        }
        return true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        player.anim_to_play = ATTACK_RIGHT;
        ++ *anim_attack_frame;
        return true;
    }
    return false;
}

void player_run(bool *direction)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        player.anim_to_play = RUN_LEFT;
        *direction = LEFT;
    } else if (*direction == LEFT) {
        player.anim_to_play = IDLE_LEFT;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        player.anim_to_play = RUN_RIGHT;
        *direction = RIGHT;
    } else if (*direction == RIGHT) {
        player.anim_to_play = IDLE_RIGHT;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)
    || sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (*direction == LEFT) {
            player.anim_to_play = RUN_LEFT;
        } else {
            player.anim_to_play = RUN_RIGHT;
        }
    }
}

void player_move(void)
{
    static unsigned int anim_attack_frame = 0;
    static bool direction = RIGHT;

    if (direction == LEFT && player_attack_left(&anim_attack_frame))
        return;
    if (direction == RIGHT && player_attack_right(&anim_attack_frame))
        return;

    player_run(&direction);

    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        player.pos.x -= player.speed;
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        player.pos.x += player.speed;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        player.pos.y -= player.speed;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        player.pos.y += player.speed;
}
