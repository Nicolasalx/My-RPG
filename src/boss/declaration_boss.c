/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_boss
*/

#include "boss.h"

boss_t boss[] = {
    {
        .pos = {500, 500},
        .scale = {4, 4},
        .speed = 1,
        .healt = 100,
        .max_healt = 100,
        .damage = 0,
        .boss_dps = 1,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }
};
