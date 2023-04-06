/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_create_all_data
*/

#include "main.h"
#include "menu_game.h"
#include "quest.h"

void (*create[])(void) = {
    create_menu_button,
    create_menu_quest,
    NULL
};
