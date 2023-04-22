/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_chest
*/

#include "chest.h"
#include "my_def.h"
#include <stdlib.h>

chest_t chest[] = {
    {
        .pos = {1550, 450},
        .scale = {4, 4},
        .path = "game_src/chest/blue_chest.png",
        .anim = {
            .current_frame = 0,
            .frame_rate = 6,
            .nb_frame = 4,
            .play = false,
            .stop_playing = false
        },
        .choice_chest = CHEST_ARROW,

        .color_rectangle = (sfColor) {COLOR_DETECTION},
        .pos_rectangle = {1550, 450},
        .size_rectangle = {80, 80}
    }, {
        .pos = {1344, 800},
        .scale = {4, 4},
        .path = "game_src/chest/blue_chest.png",
        .anim = {
            .current_frame = 0,
            .frame_rate = 6,
            .nb_frame = 4,
            .play = false,
            .stop_playing = false
        },
        .choice_chest = CHEST_SKELET,
        .color_rectangle = (sfColor) {COLOR_DETECTION},
        .pos_rectangle = {1344, 800},
        .size_rectangle = {80, 80}
    }, {
        .pos = {1550, 450},
        .scale = {4, 4},
        .path = "game_src/chest/blue_chest.png",
        .anim = {
            .current_frame = 0,
            .frame_rate = 6,
            .nb_frame = 4,
            .play = false,
            .stop_playing = false
        },
        .choice_chest = CHEST_BOSS,
        .color_rectangle = (sfColor) {COLOR_DETECTION},
        .pos_rectangle = {1550, 450},
        .size_rectangle = {80, 80}
    }
};

const int nb_chest = NB_ELEM(chest);
