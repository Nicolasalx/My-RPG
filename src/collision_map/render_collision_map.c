/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_collision_map
*/

#include "main.h"
#include "collision_map.h"
#include "map.h"

void set_ini_pos_collision(void)
{
    sfVector2f pos_tile = collision_map.pos;

    for (int i = 0; i < collision_map.nb_line; ++i) {
        for (int j = 0; j < collision_map.size_line ; ++j) {
            if (collision_map.full_map[i][j] != NULL) {
                sfRectangleShape_setPosition(collision_map.full_map[i][j],
                (sfVector2f) {
                    pos_tile.x + sfRectangleShape_getPosition(collision_map.full_map[i][j]).x,
                    pos_tile.y + sfRectangleShape_getPosition(collision_map.full_map[i][j]).y
                });
                sfRenderWindow_drawRectangleShape(window, collision_map.full_map[i][j], NULL);
            }
            pos_tile.x += (TILE_RESOLUTION * map.scale.x);
        }
        pos_tile.x = collision_map.pos.x;
        pos_tile.y += (TILE_RESOLUTION * map.scale.y);
    }
}

void render_collision_map(void)
{
    static bool ini_pos = true;

    if (ini_pos == true) {
        ini_pos = false;
        set_ini_pos_collision();
        return;
    }
    for (int i = 0; i < collision_map.nb_line; ++i) {
        for (int j = 0; j < collision_map.size_line ; ++j) {
            if (collision_map.full_map[i][j] != NULL) {
                sfRenderWindow_drawRectangleShape(window, collision_map.full_map[i][j], NULL);
            }
        }
    }
}
