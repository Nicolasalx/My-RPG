/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "menu_game.h"
#include "main.h"

void render_menu(void)
{
    for (int i = 0; i < size_img_button_menu; ++i) {
        sfRenderWindow_drawSprite(window, img_button_menu[i].sprite, NULL);
    }
}
