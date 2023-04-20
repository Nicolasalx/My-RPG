/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "shop.h"
#include "main.h"
#include "player.h"

void detect_shop_open(bool *can_open_shop)
{
    if (check_collision(detect_shop.rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
        * can_open_shop = true;
    } else {
        sfRenderWindow_drawRectangleShape(window, detect_shop.rectangle, NULL);
    }
}

void render_shop(void)
{
    static bool can_open_shop = false;
    detect_shop_open(&can_open_shop);
    if (can_open_shop == true) {
        for (int i = 0; i < size_shop; ++i) {
            sfRenderWindow_drawRectangleShape(window, shop[i].rectangle, NULL);
            sfRenderWindow_drawText(window, shop[i].text, NULL);
            sfRenderWindow_drawSprite(window, shop[i].sprite, NULL);
        }
    }
}
