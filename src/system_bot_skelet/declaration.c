/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "system_bot_skelet.h"

system_bot_t system_bot[] = {
    {
        .bot_pos_sprite = {600, 600},
        .bot_size_sprite = {0.2, 0.2},
        .bot_path_img = "game_src/system_bot/skelet.png",
        .reset_pos_bot = {1000, 100},
        .pos_bot_ini = {0, 0},

        .big_life_color_rectangle = (sfColor) {0, 0, 0, 100},
        .big_life_pos_rectangle = {100, 100},
        .big_life_size_rectangle = {100, 10},

        .little_life_color_rectangle = (sfColor) {0, 0, 255, 255},
        .little_life_pos_rectangle = {100, 100},
        .little_life_size_rectangle = {100, 10},

        .position_zone = {1000, 1000},
        .radius = 350.0f,
        .color_zone = (sfColor) {255, 0, 0, 50},
        .border_zone = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3.0f,

        .bot_can_move = false,

        .clock = NULL,

        .current_position_bot = {0, 0},
        .direction_bot = {0, 0},
        .pos_start_bot = {0, 0},
        .pos_end_bot = {0, 0},
        .speed_bot = 50.0f,
        .distance = 100.0f,
        .nb_life_bot = 100,
        .can_draw = true
    },
    {
        .bot_pos_sprite = {1350, 300},
        .bot_size_sprite = {0.2, 0.2},
        .bot_path_img = "game_src/system_bot/skelet.png",
        .reset_pos_bot = {1000, 100},
        .pos_bot_ini = {0, 0},

        .big_life_color_rectangle = (sfColor) {0, 0, 0, 100},
        .big_life_pos_rectangle = {100, 100},
        .big_life_size_rectangle = {100, 10},

        .little_life_color_rectangle = (sfColor) {0, 0, 255, 255},
        .little_life_pos_rectangle = {100, 100},
        .little_life_size_rectangle = {100, 10},

        .position_zone = {1000, 1000},
        .radius = 350.0f,
        .color_zone = (sfColor) {255, 0, 0, 50},
        .border_zone = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3.0f,

        .bot_can_move = false,

        .clock = NULL,

        .current_position_bot = {0, 0},
        .direction_bot = {0, 0},
        .pos_start_bot = {0, 0},
        .pos_end_bot = {0, 0},
        .speed_bot = 50.0f,
        .distance = 100.0f,
        .nb_life_bot = 100,
        .can_draw = true
    },
    {
        .bot_pos_sprite = {250, 250},
        .bot_size_sprite = {0.2, 0.2},
        .bot_path_img = "game_src/system_bot/skelet.png",
        .reset_pos_bot = {1000, 100},
        .pos_bot_ini = {0, 0},

        .big_life_color_rectangle = (sfColor) {0, 0, 0, 100},
        .big_life_pos_rectangle = {100, 100},
        .big_life_size_rectangle = {100, 10},

        .little_life_color_rectangle = (sfColor) {0, 0, 255, 255},
        .little_life_pos_rectangle = {100, 100},
        .little_life_size_rectangle = {100, 10},

        .position_zone = {1000, 1000},
        .radius = 350.0f,
        .color_zone = (sfColor) {255, 0, 0, 50},
        .border_zone = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3.0f,

        .bot_can_move = false,

        .clock = NULL,

        .current_position_bot = {0, 0},
        .direction_bot = {0, 0},
        .pos_start_bot = {0, 0},
        .pos_end_bot = {0, 0},
        .speed_bot = 50.0f,
        .distance = 100.0f,
        .nb_life_bot = 100,
        .can_draw = true
    },
    {
        .bot_pos_sprite = {400, 800},
        .bot_size_sprite = {0.2, 0.2},
        .bot_path_img = "game_src/system_bot/skelet.png",
        .reset_pos_bot = {1000, 100},
        .pos_bot_ini = {0, 0},

        .big_life_color_rectangle = (sfColor) {0, 0, 0, 100},
        .big_life_pos_rectangle = {100, 100},
        .big_life_size_rectangle = {100, 10},

        .little_life_color_rectangle = (sfColor) {0, 0, 255, 255},
        .little_life_pos_rectangle = {100, 100},
        .little_life_size_rectangle = {100, 10},

        .position_zone = {1000, 1000},
        .radius = 350.0f,
        .color_zone = (sfColor) {255, 0, 0, 50},
        .border_zone = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3.0f,

        .bot_can_move = false,

        .clock = NULL,

        .current_position_bot = {0, 0},
        .direction_bot = {0, 0},
        .pos_start_bot = {0, 0},
        .pos_end_bot = {0, 0},
        .speed_bot = 50.0f,
        .distance = 100.0f,
        .nb_life_bot = 100,
        .can_draw = true
    },
    {
        .bot_pos_sprite = {1000, 200},
        .bot_size_sprite = {0.2, 0.2},
        .bot_path_img = "game_src/system_bot/skelet.png",
        .reset_pos_bot = {1000, 100},
        .pos_bot_ini = {0, 0},

        .big_life_color_rectangle = (sfColor) {0, 0, 0, 100},
        .big_life_pos_rectangle = {100, 100},
        .big_life_size_rectangle = {100, 10},

        .little_life_color_rectangle = (sfColor) {0, 0, 255, 255},
        .little_life_pos_rectangle = {100, 100},
        .little_life_size_rectangle = {100, 10},

        .position_zone = {1000, 1000},
        .radius = 350.0f,
        .color_zone = (sfColor) {255, 0, 0, 50},
        .border_zone = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3.0f,

        .bot_can_move = false,

        .clock = NULL,

        .current_position_bot = {0, 0},
        .direction_bot = {0, 0},
        .pos_start_bot = {0, 0},
        .pos_end_bot = {0, 0},
        .speed_bot = 50.0f,
        .distance = 100.0f,
        .nb_life_bot = 100,
        .can_draw = true
    },
};

const int size_system_bot = NB_ELEM(system_bot);
