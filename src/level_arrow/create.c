/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "level_arrow.h"
#include "main.h"

void create_arrow_and_touret(void)
{
    clock_level_arrow.clock_animation = sfClock_create();
    clock_level_arrow.reset_pos = sfClock_create();
    for (int i = 0; i < size_touret_arrow; ++i) {
        touret_arrow[i].position_touret.x += 1920;
        touret_arrow[i].position_arrow.x += 1920;
        touret_arrow[i].reset_pos_arrow.x += 1920;
        touret_arrow[i].pos_start_arrow.x += 1920;
        touret_arrow[i].pos_end_arrow.x += 1920;

        touret_arrow[i].direction_arrow.x = touret_arrow[i].pos_end_arrow.x - touret_arrow[i].pos_start_arrow.x;
        touret_arrow[i].direction_arrow.y = touret_arrow[i].pos_end_arrow.y - touret_arrow[i].pos_start_arrow.y;

        touret_arrow[i].distance = sqrtf(touret_arrow[i].direction_arrow.x * touret_arrow[i].direction_arrow.x + touret_arrow[i].direction_arrow.y * touret_arrow[i].direction_arrow.y);
        touret_arrow[i].direction_arrow.x /= touret_arrow[i].distance;
        touret_arrow[i].direction_arrow.y /= touret_arrow[i].distance;

        touret_arrow[i].texture = sfTexture_createFromFile(touret_arrow[i].path_img, NULL);
        touret_arrow[i].sprite = sfSprite_create();
        sfSprite_setRotation(touret_arrow[i].sprite, touret_arrow[i].rotation_touret);
        sfSprite_setScale(touret_arrow[i].sprite, touret_arrow[i].size_touret);
        sfSprite_setTexture(touret_arrow[i].sprite, touret_arrow[i].texture, sfTrue);
        sfSprite_setPosition(touret_arrow[i].sprite, touret_arrow[i].position_touret);

        touret_arrow[i].arrow = sfCircleShape_create();
        sfCircleShape_setRadius(touret_arrow[i].arrow, touret_arrow[i].radius);
        sfCircleShape_setFillColor(touret_arrow[i].arrow, touret_arrow[i].color_arrow);
        sfCircleShape_setOutlineColor(touret_arrow[i].arrow, touret_arrow[i].color_border_arrow);
        sfCircleShape_setOutlineThickness(touret_arrow[i].arrow, touret_arrow[i].outlineThickness);
    }
}
