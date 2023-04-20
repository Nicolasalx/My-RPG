/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "shop.h"
#include "main.h"

shop_t shop[] = {
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {0, 0},
        .size_sprite = {1 * 2.6, 1 * 2.6},
        .path_img = "game_src/shop/bg_shop.jpg",
        .can_choose = false,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {1850, 20},
        .size_sprite = {0.25, 0.25},
        .path_img = "game_src/butons/Menu/Square/Buttons/X.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {200, 395},
        .size_rectangle = {220, 140},

        .pos_sprite = {230, 400},
        .size_sprite = {0.7, 0.7},
        .path_img = "game_src/Menu_game/clothes/helmet.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {440, 395},
        .size_rectangle = {220, 140},

        .pos_sprite = {480, 400},
        .size_sprite = {0.6, 0.6},
        .path_img = "game_src/Menu_game/clothes/armor.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {689, 395},
        .size_rectangle = {220, 140},

        .pos_sprite = {700, 380},
        .size_sprite = {0.8, 0.8},
        .path_img = "game_src/Menu_game/clothes/glove.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {930, 395},
        .size_rectangle = {220, 140},

        .pos_sprite = {950, 390},
        .size_sprite = {0.8, 0.8},
        .path_img = "game_src/Menu_game/clothes/boot.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 0},

        .color_rectangle = (sfColor) {128, 128, 128, 255},
        .pos_rectangle = {1180, 395},
        .size_rectangle = {220, 140},

        .pos_sprite = {1230, 393},
        .size_sprite = {0.25, 0.25},
        .path_img = "game_src/Menu_game/item/potion.png",
        .can_choose = true,
        .already_buy = false,
    },
    {
        .pos_text = {250, 580},
        .size_text = 50,
        .text_to_write = "150 gold",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {200, 580},
        .size_rectangle = {200, 80},

        .pos_sprite = {200, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },
    {
        .pos_text = {500, 580},
        .size_text = 50,
        .text_to_write = "150 gold",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {450, 580},
        .size_rectangle = {200, 80},

        .pos_sprite = {450, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },
    {
        .pos_text = {750, 580},
        .size_text = 50,
        .text_to_write = "150 gold",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {700, 580},
        .size_rectangle = {200, 80},

        .pos_sprite = {700, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },
    {
        .pos_text = {1000, 580},
        .size_text = 50,
        .text_to_write = "150 gold",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {950, 580},
        .size_rectangle = {200, 80},

        .pos_sprite = {950, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },
    {
        .pos_text = {1250, 580},
        .size_text = 50,
        .text_to_write = "50 gold",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {1200, 580},
        .size_rectangle = {170, 80},

        .pos_sprite = {1200, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },

    {
        .pos_text = {1535, 430},
        .size_text = 50,
        .text_to_write = "Validation",
        .color_text = (sfColor) {0, 0, 0, 255},

        .color_rectangle = (sfColor) {128, 128, 128, 180},
        .pos_rectangle = {1500, 420},
        .size_rectangle = {200, 100},

        .pos_sprite = {1200, 590},
        .size_sprite = {0.1, 0.1},
        .path_img = "game_src/Menu_game/item/money.png",
        .can_choose = false,
        .already_buy = false,
    },
};

const int size_shop = NB_ELEM(shop);

detect_shop_t detect_shop = {
    .color_rectangle = (sfColor) {0, 0, 255, 100},
    .pos_rectangle = {325, 130},
    .size_rectangle = {50, 50}
};
