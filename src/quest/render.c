/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render.c
*/

#include "quest.h"
#include "main.h"

void render_menu_quest(void)
{
    if (display_quest == true) {
        for (int i = 0; i < size_quest_menu; ++i) {
            sfRenderWindow_drawSprite(window, img_quest_menu[i].sprite, NULL);
        }
    }
}
