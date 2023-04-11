/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "game_menu.h"

game_menu_selection_t game_menu_selection [] = {
    {
    .color_rectangle = (sfColor) {0, 0, 0, 150},
    .pos_rectangle = {0, 0},
    .size_rectangle = {1920, 1080},
    .pos_text = {0, 0},
    .text_to_write = "",
    .game_menu_state = INVENTORY,
    .can_pressed = false,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {340, 30},
    .size_rectangle = {200, 100},
    .pos_text = {370, 40},
    .text_to_write = "Inventory",
    .game_menu_state = INVENTORY,
    .can_pressed = true,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {590, 30},
    .size_rectangle = {200, 100},
    .pos_text = {595, 40},
    .text_to_write = " Abilities ",
    .game_menu_state = TREE,
    .can_pressed = true,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {840, 30},
    .size_rectangle = {200, 100},
    .pos_text = {880, 40},
    .text_to_write = "Settings",
    .game_menu_state = SETTINGS,
    .can_pressed = true,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {1090, 30},
    .size_rectangle = {200, 100},
    .pos_text = {1130, 40},
    .text_to_write = "Loading",
    .game_menu_state = LOADING,
    .can_pressed = true,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {1340, 30},
    .size_rectangle = {200, 100},
    .pos_text = {1380, 40},
    .text_to_write = "Saving",
    .game_menu_state = SAVING,
    .can_pressed = true,
    }
};

const int size_game_menu_selection = NB_ELEM(game_menu_selection);

game_menu_state_t game_menu_state = {INVENTORY};
