/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "heal_xp_bar.h"

#define COLOR_TEXT_BAR 255, 255, 255, 255

heal_xp_bar_t heal_xp_bar[] = {
    {
        .pos_rectangle = {1600, 50},
        .color_rectangle = (sfColor) {0, 255, 0, 100},
        .size_rectangle = {300, 40},

        .pos_text = {1600, 0},
        .text_to_write = "HEAL",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_BAR},
        .choose_text = NO,
        .can_upgrade_rectangle = false
    },
    {
        .pos_rectangle = {1600, 50},
        .color_rectangle = (sfColor) {0, 204, 0, 150},
        .size_rectangle = {300, 40},

        .pos_text = {1700, 43},
        .text_to_write = "0 / 100",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_BAR},
        .choose_text = HEAL,
        .can_upgrade_rectangle = true
    },
    {
        .pos_rectangle = {1600, 130},
        .color_rectangle = (sfColor) {0, 255, 255, 150},
        .size_rectangle = {300, 40},

        .pos_text = {1600, 80},
        .text_to_write = "XP",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_BAR},
        .choose_text = NO,
        .can_upgrade_rectangle = false
    },
    {
        .pos_rectangle = {1600, 130},
        .color_rectangle = (sfColor) {0, 255, 255, 150},
        .size_rectangle = {300, 40},

        .pos_text = {1725, 120},
        .text_to_write = "0",
        .size_text = 40,
        .color_text = (sfColor) {COLOR_TEXT_BAR},
        .choose_text = XP_YES,
        .can_upgrade_rectangle = false
    }
};

const int size_heal_xp_bar = NB_ELEM(heal_xp_bar);

sfClock *clock_heal_bar = NULL;
