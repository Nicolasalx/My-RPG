/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_map
*/

#include "map.h"
#include "my_def.h"

map_t map = {
    .pos = {0, 0},
    .size = {1, 1},
    .map_path = "config/map_1.txt",
    .tile = {
        {
            .representation = ' ',
            .path = "game_src/tileset/empty_space.png"
        }, {
            .representation = '_',
            .path = "game_src/tileset/normal_floor.png"
        }, {
            .representation = '#',
            .path = "game_src/tileset/side_wall.png"
        }, {
            .representation = '1',
            .path = "game_src/tileset/top_left_wall.png"
        }, {
            .representation = '2',
            .path = "game_src/tileset/top_right_wall.png"
        }, {
            .representation = '3',
            .path = "game_src/tileset/down_left_wall.png"
        }, {
            .representation = '4',
            .path = "game_src/tileset/down_right_wall.png"
        }, {
            .representation = ')',
            .path = "game_src/tileset/down_right_wall.png"
        }, {
            .representation = '(',
            .path = "game_src/tileset/down_left_wall.png"
        },
        NULL
    }
};
