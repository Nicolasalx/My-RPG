/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "shop.h"
#include "main.h"

void render_shop(void)
{
    for (int i = 0; i < size_shop; ++i) {
        sfRenderWindow_drawRectangleShape(window, shop[i].rectangle, NULL);
        sfRenderWindow_drawText(window, shop[i].text, NULL);
        sfRenderWindow_drawSprite(window, shop[i].sprite, NULL);
    }
}
