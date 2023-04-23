/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "main.h"
#include "win.h"

void render_screen_win(void)
{
    sfRenderWindow_drawSprite(window, info_win.sprite, NULL);
}
