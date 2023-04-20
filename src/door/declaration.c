/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "door.h"

#define COLOR_DOOR 128, 128, 128, 255

door_t door[] = {
    {
        .color_rectangle = (sfColor) {255, 0, 0, 100},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = LEVEL_ARROW,
    },
    {
        .color_rectangle = (sfColor) {0, 255, 0, 100},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = LEVEL_SKELET,
    },
    {
        .color_rectangle = (sfColor) {0, 0, 255, 100},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = LEVEL_BOSS,
    },
    {
        .color_rectangle = (sfColor) {COLOR_DOOR},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = BACK_TO_START,
    },
    {
        .color_rectangle = (sfColor) {COLOR_DOOR},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = BACK_TO_START,
    },
    {
        .color_rectangle = (sfColor) {COLOR_DOOR},
        .pos_rectangle = {1225, 130},
        .size_rectangle = {50, 50},

        .choice_level = BACK_TO_START,
    },
};

const int size_door = NB_ELEM(door);
