/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "game_menu.h"
#include "tree.h"

void display_tree(void)
{
    for (int i = 0; i < size_tree; ++i) {
        sfRenderWindow_drawSprite(window, fondation[i].sprite, NULL);
    }
}
