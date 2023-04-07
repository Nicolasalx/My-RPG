/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_all_data
*/

#include "main.h"
#include "menu_game.h"

sfFont* font;

void create_all_data(void)
{
    for (int i = 0; create[i] != NULL; ++i) {
        create[i]();
    }
}
