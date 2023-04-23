/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "door.h"

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
        .pos_rectangle = {1500, 130},
        .size_rectangle = {50, 50},

        .choice_level = BACK_TO_START,
    },
};

const int size_door = NB_ELEM(door);

bool go_back = false;
bool go_level_1 = false;
bool go_level_2 = false;
bool go_level_3 = false;
