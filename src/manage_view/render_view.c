/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_view
*/

#include "manage_view.h"
#include "main.h"
#include "map.h"
#include "collision_map.h"
#include "chest.h"

void go_to_next_level(void)
{
    map.pos.x -= LEVEL_TRANSITION_SPEED;
    collision_map.pos.x = -LEVEL_TRANSITION_SPEED;
    ++ current_level;
}

void go_to_prev_level(void)
{
    map.pos.x += LEVEL_TRANSITION_SPEED;
    collision_map.pos.x = LEVEL_TRANSITION_SPEED;
    -- current_level;
}

void render_view(void)
{
    collision_map.pos.x = 0;
    if (current_level != next_level) {
        if (my_delta(current_level, next_level) < 0) {
            go_to_prev_level();
        } else {
            go_to_next_level();
        }
    }
}
