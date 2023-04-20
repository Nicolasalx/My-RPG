/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "door.h"

void create_door(void)
{
    for (int i = 0; i < size_door; ++i) {
        door[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setOutlineThickness(door[i].rectangle, 3);
        sfRectangleShape_setOutlineColor(door[i].rectangle, sfBlack);
        sfRectangleShape_setSize(door[i].rectangle, door[i].size_rectangle);
        sfRectangleShape_setFillColor(door[i].rectangle, door[i].color_rectangle);
        sfRectangleShape_setPosition(door[i].rectangle, door[i].pos_rectangle);
    }
}
