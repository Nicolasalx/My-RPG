/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** check_collision_player
*/

#include "collision_map.h"
#include "main.h"
#include "generic_func.h"
#include "player.h"

bool compute_new_player_pos(bool is_collide,
    sfVector2f prev_pos_player, sfVector2f prev_pos_rect)
{
    if (is_collide == true) {
        player.pos = prev_pos_player;
        sfRectangleShape_setPosition(player.collision, prev_pos_rect);
        return true;
    }
    return false;
}

void check_collision_player(sfVector2f prev_pos_player,
sfVector2f prev_pos_rect)
{
    for (int i = 0; i < collision_map.nb_line; ++i) {
        for (int j = 0; j < collision_map.size_line; ++j) {
            if (collision_map.full_map[i][j] != NULL &&
            compute_new_player_pos(check_collision(player.collision,
            collision_map.full_map[i][j]),
            prev_pos_player, prev_pos_rect) != false) {
                return;
            }
        }
    }
}
