/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_player
*/

#include "player.h"

player_t player = {
    .pos = {0, 0},
    .scale = {2, 2},
    .speed = 2,
    .anim_to_play = IDLE_LEFT,
    .player_anim = {
        .current_frame = 0,
        .last_anim = IDLE_LEFT,
        .sprite_sheet = {
            {
                .sheet_path = "game_src/Character/idle_right.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/run_right.png",
                .nb_frame = 8,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/attack_right.png",
                .nb_frame = 8,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/idle_left.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/run_left.png",
                .nb_frame = 8,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/attack_left.png",
                .nb_frame = 8,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }
        }
    }
};
