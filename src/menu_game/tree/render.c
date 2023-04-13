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
        if (mouse_button_pressed == true &&
            is_mouse_over_sprite(fondation[i].sprite) == true &&
            fondation[i].abilities != NULL) {
            fondation[i].abilities(i);
        }
        sfRenderWindow_drawSprite(window, fondation[i].sprite, NULL);
    }
}
