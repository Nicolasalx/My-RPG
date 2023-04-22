/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "inventory.h"

loading_content_t loading_content[] = {
    {
        .color_rectangle = (sfColor) {BG_LOADING},
        .pos_rectangle = {350, 200},
        .size_rectangle = {1000, 700},

        .pos_text = {700, 160},
        .text_to_write = "Loading",
        .size_text = 150,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .can_choose = false,
        .validate = false,
    },

    {
        .color_rectangle = (sfColor) {BG_LOADING},
        .pos_rectangle = {650, 350},
        .size_rectangle = {400, 100},

        .pos_text = {750, 330},
        .text_to_write = "Save 1",
        .size_text = 100,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .can_choose = true,
        .validate = false,
    },

    {
        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {650, 500},
        .size_rectangle = {400, 100},

        .pos_text = {750, 480},
        .text_to_write = "Save 2",
        .size_text = 100,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .can_choose = true,
        .validate = false,
    },

    {
        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {650, 650},
        .size_rectangle = {400, 100},

        .pos_text = {750, 630},
        .text_to_write = "Save 3",
        .size_text = 100,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .can_choose = true,
        .validate = false,
    },

    {
        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {650, 780},
        .size_rectangle = {400, 100},

        .pos_text = {730, 760},
        .text_to_write = "Validation",
        .size_text = 100,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .can_choose = false,
        .validate = true,
    }
};

const int size_loading_content = NB_ELEM(loading_content);
