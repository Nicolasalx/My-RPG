/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "dialog.h"
#include "main.h"

create_dialog_t create_dialog[] = {
    {
        .pos_sprite = {1150, 150},
        .path_img = "game_src/dialog/dialog.png",
        .size_sprite = {1, 1},

        .pos_text = {1200, 200},
        .text_to_write =
            "Go to the room of arrows.\nThere you will find a totem.",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_DIALOG},

        .when_active_dialog = PNJ_QUEST_ARROW,

        .pos_sprite_pnj = {1200, 500},
        .path_img_pnj = "game_src/pnj/totem_pnj.png",
        .size_sprite_pnj = {1, 1},

        .position_circle = {150, 150},
        .radius = 90,
        .color_circle = (sfColor) {0, 0, 255, 50},
        .color_border_circle = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3,
    },
    {
        .pos_sprite = {1150, 150},
        .path_img = "game_src/dialog/dialog.png",
        .size_sprite = {1.2, 1},

        .pos_text = {1200, 200},
        .text_to_write =
            "Go to the Skeleton Room.\nThere you will find an amulet.",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_DIALOG},

        .when_active_dialog = PNJ_QUEST_SKELET,

        .pos_sprite_pnj = {1200, 500},
        .path_img_pnj = "game_src/pnj/amuletter_pnj.png",
        .size_sprite_pnj = {1, 1},

        .position_circle = {150, 150},
        .radius = 90,
        .color_circle = (sfColor) {0, 0, 255, 50},
        .color_border_circle = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3,
    },
    {
        .pos_sprite = {1150, 150},
        .path_img = "game_src/dialog/dialog.png",
        .size_sprite = {1.2, 1},

        .pos_text = {1200, 200},
        .text_to_write =
            "Go to the boss room.\nYou can save the world !!!",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_DIALOG},

        .when_active_dialog = PNJ_QUEST_BOSS,

        .pos_sprite_pnj = {1200, 500},
        .path_img_pnj = "game_src/pnj/pnj_boss.png",
        .size_sprite_pnj = {1, 1},

        .position_circle = {150, 150},
        .radius = 90,
        .color_circle = (sfColor) {0, 0, 255, 50},
        .color_border_circle = (sfColor) {0, 0, 0, 255},
        .outlineThickness = 3,
    }
};

const int size_create_dialog = NB_ELEM(create_dialog);

bool activated_dialog[NB_DIALOG] = {false};
