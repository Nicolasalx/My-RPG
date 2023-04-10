/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "level_arrow.h"
#include "main.h"

void render_level_arrow(void)
{
    for (int i = 0; i < size_touret_arrow; ++i) {
        float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(clock_level_arrow.reset_pos));
        if (elapsed_seconds < touret_arrow[i].distance / touret_arrow[i].speed_arrow) {
            touret_arrow[i].current_position_arrow.x = touret_arrow[i].pos_start_arrow.x + touret_arrow[i].direction_arrow.x * elapsed_seconds * touret_arrow[i].speed_arrow;
            touret_arrow[i].current_position_arrow.y = touret_arrow[i].pos_start_arrow.y + touret_arrow[i].direction_arrow.y * elapsed_seconds * touret_arrow[i].speed_arrow;
            sfCircleShape_setPosition(touret_arrow[i].arrow, touret_arrow[i].current_position_arrow);
        } else {
            sfClock_restart(clock_level_arrow.reset_pos);
        }
        sfRenderWindow_drawSprite(window, touret_arrow[i].sprite, NULL);
        sfRenderWindow_drawCircleShape(window, touret_arrow[i].arrow, NULL);
    }
}