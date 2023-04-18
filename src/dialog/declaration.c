/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "dialog.h"
#include "main.h"

#define COLOR_TEXT_DIALOG 0, 0, 0, 255

create_dialog_t create_dialog[] = {
    {
        .pos_sprite = {100, 100},
        .path_img = "game_src/dialog/dialog.png",
        .size_sprite = {3, 1},

        .pos_text = {150, 130},
        .text_to_write = "Bonjour",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_DIALOG},

        .when_active_dialog = PNJ_QUEST_ARROW,
    },
    {
        .pos_sprite = {200, 200},
        .path_img = "game_src/dialog/dialog.png",
        .size_sprite = {3, 1},

        .pos_text = {250, 230},
        .text_to_write = "THIBAUD HOMO ?",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_DIALOG},

        .when_active_dialog = PNJ_QUEST_SKELET,
    },
};

const int size_create_dialog = NB_ELEM(create_dialog);

bool activated_dialog[NB_DIALOG] = {false};
