/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_collision_map
*/

#include "map.h"
#include "collision_map.h"
#include "my_def.h"

collision_map_t collision_map = {
    .map_path = "config/collision_map.txt",
    .nb_line = 0,
    .size_line = 0,
    .pos = {0, 0},
    .scale = {1, 1},
    .collision_tile = {
        {
            .representation = ' ',
            .pos = {0, 0},
            .size = {0, 0}
        }, {
            .representation = '#',
            .pos = {0, 0},
            .size = {TILE_RESOLUTION, TILE_RESOLUTION}
        }, {
            .representation = '}',
            .pos = {0, 0},
            .size = {TILE_RESOLUTION / 3.0, TILE_RESOLUTION}
        }, {
            .representation = '{',
            .pos = {TILE_RESOLUTION / 1.5, 0},
            .size = {TILE_RESOLUTION / 3.0, TILE_RESOLUTION}
        }, {
            .representation = '\0',
            .pos = {0, 0},
            .size = {0, 0}
        }
    }
};
