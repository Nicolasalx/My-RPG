/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_player
*/

#include "player.h"

player_t player = {
    .anim_to_play = IDLE,
    .current_frame = 0,
    .last_anim = IDLE,
    .player_anim = {
        {
            .sheet_path = "game_src/District/Characters/Hero/Swordsman_Idle/Swordsman0000-sheet.png",
            .nb_frame = 4
        }, {
            .sheet_path = "game_src/District/Characters/Hero/Swordsman_Run/hero-running-separated1.png",
            .nb_frame = 9
        }, {
            .sheet_path = "game_src/District/Characters/Hero/Swordsman_Jump/Swordsman0000-sheet.png",
            .nb_frame = 9
        }, {
            .sheet_path = "game_src/District/Characters/Hero/Swordsman_Jump/Swordsman0000-sheet.png",
            .nb_frame = 6
        }
    }
};
