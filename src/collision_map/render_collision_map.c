/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_collision_map
*/

#include "map.h"
#include "collision_map.h"
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include "my_file.h"

void exec_collisions(int i, char **config_map)
{
    for (int j = 0; config_map[i][j] != '\0'; ++j) {
        if (find_matching_size(config_map[i][j],
        collision_map.collision_tile).x != 0) {
            collision_map.full_map[i][j] = sfRectangleShape_create();
            sfRectangleShape_setFillColor(collision_map.full_map[i][j],
            sfTransparent);
            sfRectangleShape_setOutlineColor(collision_map.full_map[i][j],
            sfGreen);
            sfRectangleShape_setOutlineThickness
            (collision_map.full_map[i][j], 1);
            sfRectangleShape_setSize(collision_map.full_map[i][j],
            find_matching_size(config_map[i][j],
            collision_map.collision_tile));
            sfRectangleShape_setPosition(collision_map.full_map[i][j],
            find_matching_pos(config_map[i][j], collision_map.collision_tile));
        } else {
            collision_map.full_map[i][j] = NULL;
        }
    }
}

void draw_hitbox(int i, sfVector2f *pos_tile)
{
    for (int j = 0; j < collision_map.size_line ; ++j) {
        if (collision_map.full_map[i][j] != NULL) {
            sfRectangleShape_setPosition(collision_map.full_map[i][j],
            (sfVector2f) {
                pos_tile->x + sfRectangleShape_getPosition
                (collision_map.full_map[i][j]).x,
                pos_tile->y + sfRectangleShape_getPosition
                (collision_map.full_map[i][j]).y
            });
            sfRenderWindow_drawRectangleShape(window,
            collision_map.full_map[i][j], NULL);
        }
        pos_tile->x += (TILE_RESOLUTION * map.scale.x);
    }
}

void draw_colision(int i)
{
    for (int j = 0; j < collision_map.size_line ; ++j) {
        if (collision_map.full_map[i][j] != NULL) {
            sfRectangleShape_move(collision_map.full_map[i][j],
            collision_map.pos);
            sfRenderWindow_drawRectangleShape(window,
            collision_map.full_map[i][j], NULL);
        }
    }
}

void set_ini_pos_collision(void)
{
    sfVector2f pos_tile = collision_map.pos;

    for (int i = 0; i < collision_map.nb_line; ++i) {
        draw_hitbox(i, &pos_tile);
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
        draw_colision(i);
    }
}
