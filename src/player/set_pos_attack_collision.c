/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** set_pos_attack_collision
*/

#include "player.h"

void set_pos_attack_collision(player_anim_e player_anim)
{
    if (player_anim == IDLE_LEFT
    || player_anim == RUN_LEFT
    || player_anim == ATTACK_LEFT) {
        sfRectangleShape_setPosition(player.attack_collision,
        (sfVector2f) {-20 + player.pos.x + (17 * player.scale.x), player.pos.y});
    } else {
        sfRectangleShape_setPosition(player.attack_collision,
        (sfVector2f) {20 + player.pos.x + (17 * player.scale.x), player.pos.y});
    }
}
