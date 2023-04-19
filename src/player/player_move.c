/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** event_player_move.c
*/

#include "player.h"

bool player_attack(unsigned int *anim_attack_frame, player_anim_e player_anim)
{
    player.damage = 0;
    if (*anim_attack_frame != 0) {
        if (*anim_attack_frame
        >= player.player_anim.sprite_sheet[player_anim].nb_frame) {
            *anim_attack_frame = -1;
        }
        if (sfClock_getElapsedTime(player.player_anim.clock).microseconds /1000
        >= 1000 / player.player_anim.sprite_sheet[player_anim].frame_rate) {
            ++ *anim_attack_frame;
            player.damage = player.player_dps;
        }
        return true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        player.anim_to_play = player_anim;
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

void check_collission_again(
    sfVector2f *prev_pos_player, sfVector2f *prev_pos_rect)
{
    sfRectangleShape_setPosition(player.collision,
    (sfVector2f) {player.pos.x + (17 * player.scale.x), player.pos.y});
    check_collision_player(*prev_pos_player, *prev_pos_rect);
    *prev_pos_player = player.pos;
    *prev_pos_rect = sfRectangleShape_getPosition(player.collision);
}

void try_to_move(sfVector2f *prev_pos_player, sfVector2f *prev_pos_rect)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        player.pos.x -= player.speed;
    check_collission_again(prev_pos_player, prev_pos_rect);
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        player.pos.x += player.speed;
    check_collission_again(prev_pos_player, prev_pos_rect);
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        player.pos.y -= player.speed;
    check_collission_again(prev_pos_player, prev_pos_rect);
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        player.pos.y += player.speed;
}

void player_move(void)
{
    static unsigned int anim_attack_frame = 0;
    static bool direction = RIGHT;
    sfVector2f prev_pos_player = player.pos;
    sfVector2f prev_pos_rect = sfRectangleShape_getPosition(player.collision);

    if ((direction == LEFT && player_attack(&anim_attack_frame, ATTACK_LEFT))
    || (direction == RIGHT && player_attack(&anim_attack_frame, ATTACK_RIGHT)))
        return;

    player_run(&direction);

    if (sfClock_getElapsedTime(player.clock_move).microseconds / 1000
        >= 10) {
        sfClock_restart(player.clock_move);
        try_to_move(&prev_pos_player, &prev_pos_rect);
    }
    sfRectangleShape_setPosition(player.collision,
    (sfVector2f) {player.pos.x + (17 * player.scale.x), player.pos.y});
    set_pos_attack_collision(player.anim_to_play);
    check_collision_player(prev_pos_player, prev_pos_rect);
}
