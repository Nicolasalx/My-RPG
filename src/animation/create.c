/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "animation.h"

void create_animation(void)
{
    animation_level.clock = sfClock_create();
    animation_level.play = sfClock_create();
    animation_level.clock_restart = sfClock_create();
    animation_level.rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(animation_level.rectangle, 3);
    sfRectangleShape_setOutlineColor(animation_level.rectangle, sfBlack);
    sfRectangleShape_setSize(animation_level.rectangle, animation_level.
        size_rectangle);
    sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.
        color_rectangle);
    sfRectangleShape_setPosition(animation_level.rectangle, animation_level.
        pos_rectangle);
}
