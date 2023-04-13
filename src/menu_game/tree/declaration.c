/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "game_menu.h"
#include "tree.h"

create_tree_t fondation[] = {
    {
        .size = {1.2, 1.2},
        .pos = {200, 200},
        .path_img = "game_src/upgrade/degats.png",
        .can_opac = true,
        .abilities = add_strenght
    }, {
        .size = {0.2, 0.2},
        .pos = {340, 215},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 200},
        .path_img = "game_src/upgrade/critical.png",
        .can_opac = true,
        .abilities = critical
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 215},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 200},
        .path_img = "game_src/upgrade/fureur.png",
        .can_opac = true,
        .abilities = fureur
    }, {
        .size = {0.35, 0.35},
        .pos = {880, 215},
        .path_img = "game_src/upgrade/fleche_35.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {200, 500},
        .path_img = "game_src/upgrade/upgrade_speed.png",
        .can_opac = true,
        .abilities = speed_up
    }, {
        .size = {0.2, 0.2},
        .pos = {340, 515},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 500},
        .path_img = "game_src/upgrade/upgrade_as.png",
        .can_opac = true,
        .abilities = attack_speed_upgrade
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 515},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 500},
        .path_img = "game_src/upgrade/glacial_slow.png",
        .can_opac = true,
        .abilities = glacial_slow
    }, {
        .size = {0.2, 0.2},
        .pos = {920, 515},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {1080, 500},
        .path_img = "game_src/upgrade/final.png",
        .can_opac = true,
        .abilities = final
    }, {
        .size = {1.2, 1.2},
        .pos = {200, 800},
        .path_img = "game_src/upgrade/upgrade_health.png",
        .can_opac = true,
        .abilities = upgrade_health
    }, {
        .size = {0.2, 0.2},
        .pos = {340, 815},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 800},
        .path_img = "game_src/upgrade/regeneration.png",
        .can_opac = true,
        .abilities = regeneration
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 815},
        .path_img = "game_src/upgrade/liaison.png",
        .can_opac = false,
        .abilities = NULL
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 800},
        .path_img = "game_src/upgrade/bloodbath.png",
        .can_opac = true,
        .abilities = blood_bath
    }, {
        .size = {0.35, 0.35},
        .pos = {890, 765},
        .path_img = "game_src/upgrade/fleche_70.png",
        .can_opac = false,
        .abilities = NULL
    }
};

const int size_tree = NB_ELEM(fondation);

bool is_speed_up;
bool strenght_up;
bool attackspeed_up;
bool health_up;
bool critical_up;
bool regene;
bool is_fureur;
bool is_bloodbath;
bool is_glacial_slow;
bool is_final;
