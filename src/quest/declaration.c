/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration.c
*/

#include "quest.h"

img_quest_t img_quest_menu[] = {
    {
    .pos = {0, 0},
    .path_img = "game_src/Quest/quest.png",
    .size = {1.0, 1.0}
    }
};

const int size_quest_menu =
    sizeof(img_quest_menu) / sizeof(img_quest_t);

bool display_quest;
