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
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {150, 150},
        .size_sprite = {2, 1.5},
        .path_img = "game_src/shop/bg_shop.jpg",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {1500, 150},
        .size_sprite = {0.2, 0.2},
        .path_img = "game_src/Settings/quit.png",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {200, 350},
        .size_sprite = {1, 1},
        .path_img = "game_src/Menu_game/clothes/armor.png",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {450, 350},
        .size_sprite = {1, 1},
        .path_img = "game_src/Menu_game/clothes/boot.png",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {650, 350},
        .size_sprite = {1, 1},
        .path_img = "game_src/Menu_game/clothes/glove.png",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {900, 350},
        .size_sprite = {1, 1},
        .path_img = "game_src/Menu_game/clothes/helmet.png",
    },
    {
        .pos_text = {100, 100},
        .size_text = 50,
        .text_to_write = "Bjr",
        .color_text = (sfColor) {128, 128, 128, 255},

        .color_rectangle = (sfColor) {0, 255, 0, 255},
        .pos_rectangle = {100, 100},
        .size_rectangle = {0, 0},

        .pos_sprite = {1150, 375},
        .size_sprite = {0.3, 0.3},
        .path_img = "game_src/Menu_game/item/potion.png",
    },
};

const int size_shop = NB_ELEM(shop);

detect_shop_t detect_shop = {
    .color_rectangle = (sfColor) {0, 0, 255, 100},
    .pos_rectangle = {325, 130},
    .size_rectangle = {50, 50}
};
