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

void render_view(void)
{
    static unsigned int window_x = 0;

    if (go_to_next_level) {
        map.pos.x -= LEVEL_TRANSITION_SPEED;
        collision_map.pos.x = -LEVEL_TRANSITION_SPEED;
        window_x += LEVEL_TRANSITION_SPEED;
        for (int i = 0; i < nb_chest; ++i) {
            sfSprite_move(chest[i].sprite,
            (sfVector2f) {-LEVEL_TRANSITION_SPEED, 0});
        }
        if (window_x > render_window.mode.width) {
            ++ current_level;
            collision_map.pos.x = 0;
            go_to_next_level = false;
            window_x = 0;
        }
    }
}
