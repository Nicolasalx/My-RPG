/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "game_menu.h"
#include "inventory.h"

saving_content_t saving_content[] = {
    {
        .pos_text = {1000, 200},
        .text_to_write = "SAVING",
        .size_text = 100,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },

    {
        .pos_text = {500, 250},
        .text_to_write = "Do you have helmet ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 250},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 250},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 300},
        .text_to_write = "Do you have armor ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 300},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 300},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

        {
        .pos_text = {500, 350},
        .text_to_write = "Do you have gloves ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 350},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 350},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 400},
        .text_to_write = "Do you have boots ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 400},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 400},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 450},
        .text_to_write = "You have (keys) :",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 450},
        .text_to_write = "0",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 500},
        .text_to_write = "Do you have amuletter ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 500},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 500},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 550},
        .text_to_write = "Do you have totem ?",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 550},
        .text_to_write = "YES",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },
    {
        .pos_text = {820, 550},
        .text_to_write = "NO",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 600},
        .text_to_write = "You have (potion) :",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
        {
        .pos_text = {820, 600},
        .text_to_write = "0",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 650},
        .text_to_write = "You have (XP) :",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
    {
        .pos_text = {820, 650},
        .text_to_write = "0",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {500, 700},
        .text_to_write = "You have (money) :",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = false,
    },
        {
        .pos_text = {820, 700},
        .text_to_write = "0",
        .size_text = 50,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
        .choice = true,
    },

    {
        .pos_text = {660, 750},
        .text_to_write = "Validation Saving",
        .size_text = 80,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
    },

    {
        .pos_text = {1100, 340},
        .text_to_write = "Save 1",
        .size_text = 80,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
    },

    {
        .pos_text = {1100, 490},
        .text_to_write = "Save 2",
        .size_text = 80,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
    },

    {
        .pos_text = {1100, 650},
        .text_to_write = "Save 3",
        .size_text = 80,
        .color_text = (sfColor) {COLOR_TEXT_SAVING},
    }
};

const int size_saving_content = NB_ELEM(saving_content);

validate_saving_t validate_saving[] = {
    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {350, 200},
    .size_rectangle = {1000, 700},

    .size_sprite = {0.4, 0.2},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {650, 760},
    .size_rectangle = {400, 100},

    .size_sprite = {0, 0},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1080, 350},
    .size_rectangle = {200, 100},

    .size_sprite = {0, 0},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    },


    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1080, 500},
    .size_rectangle = {200, 100},

    .size_sprite = {0, 0},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1080, 660},
    .size_rectangle = {200, 100},

    .size_sprite = {0, 0},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    }
};

const int size_validate_saving = NB_ELEM(validate_saving);
