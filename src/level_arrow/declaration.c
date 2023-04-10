/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "level_arrow.h"
#include "main.h"
#include <stdio.h>

touret_arrow_t touret_arrow[] = {
    {
    .position_touret = {500, 300},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_left.png",
    .rotation_touret = -90.0f,

    .position_arrow = {150, 150},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {400, 400},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 350,
    .pos_start_arrow = {527, 274},
    .pos_end_arrow = {510, 879},
    .distance = 0.0f,
    },

    {
    .position_touret = {750, 700},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_left.png",
    .rotation_touret = 90.0f,

    .position_arrow = {150, 150},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {400, 400},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 350,
    .pos_start_arrow = {705, 724},
    .pos_end_arrow = {722, 138},
    .distance = 0.0f,
    },

    {
    .position_touret = {750, 770},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_right.png",
    .rotation_touret = -45.0f,

    .position_arrow = {150, 150},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {400, 400},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 400,
    .pos_start_arrow = {869, 700},
    .pos_end_arrow = {1343, 218},
    .distance = 0.0f,
    },

    {
    .position_touret = {1450, 670},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_left.png",
    .rotation_touret = 45.0f,

    .position_arrow = {150, 150},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {200, 200},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 400,
    .pos_start_arrow = {1446, 717},
    .pos_end_arrow = {902, 221},
    .distance = 0.0f,
    },

    {
    .position_touret = {850, 100},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_right.png",
    .rotation_touret = 52.0f,

    .position_arrow = {400, 400},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {400, 400},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 400,
    .pos_start_arrow = {1347, 218},
    .pos_end_arrow = {871, 695},
    .distance = 0.0f,
    },

    {
    .position_touret = {1300, 220},
    .size_touret = {0.3, 0.3},
    .path_img = "game_src/level_arrow/touret_left.png",
    .rotation_touret = -52.0f,

    .position_arrow = {200, 200},
    .radius = 10,
    .color_arrow = (sfColor) {255, 0, 0, 255},
    .color_border_arrow = (sfColor) {0, 0, 0, 255},
    .outlineThickness = 3,
    .reset_pos_arrow = {400, 400},

    .current_position_arrow = {0, 0},
    .direction_arrow = {0, 0},
    .speed_arrow = 400,
    .pos_start_arrow = {902, 221},
    .pos_end_arrow = {1444, 712},
    .distance = 0.0f,
    }

};

const int size_touret_arrow = NB_ELEM(touret_arrow);

clock_level_arrow_t clock_level_arrow = {.clock_animation = NULL, .reset_pos = NULL};
