/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_player
*/

#include "player.h"

player_t player = {
    .pos = {0, 0},
    .scale = {4, 4},
    .anim_to_play = IDLE_RIGHT,
    .player_anim = {
        .current_frame = 0,
        .last_anim = IDLE_RIGHT,
        .sprite_sheet = {
            {
                .sheet_path = "game_src/Character/Idle/Char_idle_left.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Idle/Char_idle_right.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Idle/Char_idle_up.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Idle/Char_idle_down.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Walk/Char_walk_left.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Walk/Char_walk_right.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Walk/Char_walk_up.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Walk/Char_walk_down.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Attack/Char_atk_left.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Attack/Char_atk_right.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Attack/Char_atk_up.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }, {
                .sheet_path = "game_src/Character/Attack/Char_atk_down.png",
                .nb_frame = 6,
                .frame_rate = 6 * PLAYER_ANIM_MULT
            }
        }
    }
};
