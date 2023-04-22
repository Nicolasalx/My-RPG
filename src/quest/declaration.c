/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration.c
*/

#include "quest.h"

#define COLOR_TEXT_QUEST 0, 0, 0, 255

img_quest_t img_quest_menu[] = {
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {1.0, 1.0},

        .pos_text = {300, 300},
        .text_to_write = "",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_nothing
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 200},
        .text_to_write = "QUEST TOTEM",
        .size_text = 65,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_totem
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 280},
        .text_to_write = "Meet in the arrow room\n"
        "No prerequisites",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_totem
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 400},
        .text_to_write = "QUEST AMULET",
        .size_text = 65,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_amulet
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 480},
        .text_to_write = "Meet in the Skeleton Room\n"
        "Prerequisites: Totem and 1 key",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_amulet
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 600},
        .text_to_write = "QUEST BOSS",
        .size_text = 65,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_boss
    },
    {
        .pos = {0, 0},
        .path_img = "game_src/Quest/quest.png",
        .size = {0, 0},

        .pos_text = {300, 680},
        .text_to_write = "Meet in the boss room\n"
        "Prerequisites: Totem, Amulet and 3 keys",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_QUEST},
        .text_choose = text_boss
    }
};

const int size_quest_menu =
    sizeof(img_quest_menu) / sizeof(img_quest_t);

bool display_quest;

manage_animation_t manage_animation = {
    .dont_move_amuletter = 0,
    .dont_move_boss = 0,
    .dont_move_totem = 0,
    .move_amuletter = false,
    .move_boss = false,
    .move_totem = false,
};

bool quest_totem = false;
bool quest_amuletter = false;
bool quest_boss = false;
