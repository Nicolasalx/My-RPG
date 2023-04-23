/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "game_menu.h"
#include "tree.h"

bool abilities[] = {
    [SPEED_UP] = false,
    [STRENGHT_UP] = false,
    [ATTACKSPEED_UP] = false,
    [HEALTH_UP] = false,
    [CRITICAL_UP] = false,
    [REGENE] = false,
    [IS_FUREUR] = false,
    [IS_BLOODBATH] = false,
    [IS_GLACIAL_SLOW] = false,
    [IS_FINAL] = false
};

create_arrow_t arrows[] = {
    {
        .size = {0.2, 0.2},
        .pos = {340, 215},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 215},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.35, 0.35},
        .pos = {880, 215},
        .path_img = "game_src/upgrade/fleche_35.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {340, 515},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 515},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {920, 515},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {340, 815},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.2, 0.2},
        .pos = {620, 815},
        .path_img = "game_src/upgrade/liaison.png",
    }, {
        .size = {0.35, 0.35},
        .pos = {890, 765},
        .path_img = "game_src/upgrade/fleche_70.png",
    }
};

create_tree_t fondation[] = {
    {
        .size = {1.2, 1.2},
        .pos = {200, 200},
        .path_img = "game_src/upgrade/degats.png",
        .abilities = add_strenght
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 200},
        .path_img = "game_src/upgrade/critical.png",
        .abilities = critical
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 200},
        .path_img = "game_src/upgrade/fureur.png",
        .abilities = fureur
    }, {
        .size = {1.2, 1.2},
        .pos = {200, 500},
        .path_img = "game_src/upgrade/upgrade_speed.png",
        .abilities = speed_up
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 500},
        .path_img = "game_src/upgrade/upgrade_as.png",
        .abilities = attack_speed_upgrade
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 500},
        .path_img = "game_src/upgrade/glacial_slow.png",
        .abilities = glacial_slow
    }, {
        .size = {1.2, 1.2},
        .pos = {1080, 500},
        .path_img = "game_src/upgrade/final.png",
        .abilities = final
    }, {
        .size = {1.2, 1.2},
        .pos = {200, 800},
        .path_img = "game_src/upgrade/upgrade_health.png",
        .abilities = upgrade_health
    }, {
        .size = {1.2, 1.2},
        .pos = {480, 800},
        .path_img = "game_src/upgrade/regeneration.png",
        .abilities = regeneration
    }, {
        .size = {1.2, 1.2},
        .pos = {780, 800},
        .path_img = "game_src/upgrade/bloodbath.png",
        .abilities = blood_bath
    }
};

const int size_tree = NB_ELEM(fondation);

const int size_arrows = NB_ELEM(arrows);

sfClock *time_usable;
