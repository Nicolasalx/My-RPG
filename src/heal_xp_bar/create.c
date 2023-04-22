/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "main.h"
#include "heal_xp_bar.h"

void create_heal_xp_bar(void)
{
    clock_heal_bar = sfClock_create();
    for (int i = 0; i < size_heal_xp_bar; ++i) {
        heal_xp_bar[i].text = sfText_create();
        sfText_setString(heal_xp_bar[i].text, heal_xp_bar[i].text_to_write);
        sfText_setFont(heal_xp_bar[i].text, font);
        sfText_setCharacterSize(heal_xp_bar[i].text, heal_xp_bar[i].size_text);
        sfText_setPosition(heal_xp_bar[i].text, heal_xp_bar[i].pos_text);
        sfText_setFillColor(heal_xp_bar[i].text, heal_xp_bar[i].color_text);

        heal_xp_bar[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setOutlineThickness(heal_xp_bar[i].rectangle, 3);
        sfRectangleShape_setOutlineColor(heal_xp_bar[i].rectangle, sfBlack);
        sfRectangleShape_setSize(heal_xp_bar[i].rectangle, heal_xp_bar[i].
            size_rectangle);
        sfRectangleShape_setFillColor(heal_xp_bar[i].rectangle, heal_xp_bar[i].
            color_rectangle);
        sfRectangleShape_setPosition(heal_xp_bar[i].rectangle, heal_xp_bar[i].
            pos_rectangle);
    }
}
