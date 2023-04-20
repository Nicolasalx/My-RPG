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
        .size_rectangle = {1, 1},

        .pos_sprite = {100, 100},
        .size_sprite = {1, 1},
        .path_img = "game_src/shop/bg_shop.jpg",
    }
};

const int size_shop = NB_ELEM(shop);

detect_shop_t detect_shop = {
    .color_rectangle = (sfColor) {0, 0, 255, 100},
    .pos_rectangle = {300, 130},
    .size_rectangle = {50, 50}
};
