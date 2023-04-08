/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_map
*/

#include "main.h"
#include "map.h"

void render_map(void)
{
    sfVector2f pos_tile = map.pos;

    for (int i = 0; i < map.nb_line; ++i) {
        for (int j = 0; j < map.size_line ; ++j) {
            sfSprite_setPosition(map.full_map[i][j], pos_tile);
            sfSprite_setScale(map.full_map[i][j], map.scale);
            sfRenderWindow_drawSprite(window, map.full_map[i][j], NULL);
            pos_tile.x += (TILE_RESOLUTION * map.scale.x);
        }
        pos_tile.x = map.pos.x;
        pos_tile.y += (TILE_RESOLUTION * map.scale.y);
    }
}
