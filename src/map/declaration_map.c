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
    .scale = {4, 4},
    .map_path = "config/map_1.txt",
    .nb_line = 0,
    .size_line = 0,
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
            .representation = '}',
            .path = "game_src/tileset/right_wall.png"
        }, {
            .representation = '{',
            .path = "game_src/tileset/left_wall.png"
        }, {
            .representation = '5',
            .path = "game_src/tileset/top_left_in_wall.png"
        }, {
            .representation = '6',
            .path = "game_src/tileset/top_right_in_wall.png"
        }, {
            .representation = '7',
            .path = "game_src/tileset/down_left_in_wall.png"
        }, {
            .representation = '8',
            .path = "game_src/tileset/down_right_in_wall.png"
        }, {
            .representation = ')',
            .path = "game_src/tileset/right_in_wall.png"
        }, {
            .representation = '(',
            .path = "game_src/tileset/left_in_wall.png"
        }, {
            .representation = 'D',
            .path = "game_src/tileset/door.png"
        }, {
            .representation = 'L',
            .path = "game_src/tileset/light_on_wall.png"
        }, {
            .representation = 'C',
            .path = "game_src/tileset/crane.png"
        }, {
            .representation = 'F',
            .path = "game_src/tileset/blue_banniere.png"
        }, {
            .representation = 'B',
            .path = "game_src/tileset/bibliotheque.png"
        }, {
            .representation = '$',
            .path = "game_src/tileset/egout.png"
        }, {
            .representation = '|',
            .path = "game_src/tileset/egout_water.png"
        }, {
            .representation = '\0',
            .path = NULL
        }
    }
};
