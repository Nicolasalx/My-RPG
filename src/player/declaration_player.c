/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_player
*/

#include "player.h"

player_t player = {
    .pos = {0, 0},
    .scale = {5, 5},
    .anim_to_play = IDLE,
    .player_anim = {
        .current_frame = 0,
        .last_anim = IDLE,
        .sprite_sheet = {
            {
                .sheet_path = "game_src/Other_pack/District/Characters/Hero/Swordsman_Idle/Swordsman0000-sheet.png",
                .nb_frame = 4,
                .frame_rate = 4 * 1.5
            }, {
                .sheet_path = "game_src/Other_pack/District/Characters/Hero/Swordsman_Run/hero-running-separated1.png",
                .nb_frame = 9,
                .frame_rate = 9 * 1.5
            }, {
                .sheet_path = "game_src/Other_pack/District/Characters/Hero/Swordsman_Jump/Swordsman0000-sheet.png",
                .nb_frame = 9,
                .frame_rate = 9 * 1.5
            }, {
                .sheet_path = "game_src/Other_pack/District/Characters/Hero/Swordsman_Slash/Swordsman0000-sheet.png",
                .nb_frame = 6,
                .frame_rate = 6 * 1.5
            }
        }
    }
};
