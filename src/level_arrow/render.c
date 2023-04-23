/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "level_arrow.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"
#include "game_menu.h"
#include "tree.h"

void calculate(float elapsed_seconds, int i)
{
    if (elapsed_seconds < touret_arrow[i].distance /
        touret_arrow[i].speed_arrow) {
            touret_arrow[i].current_position_arrow.x =
            touret_arrow[i].pos_start_arrow.x +
            touret_arrow[i].direction_arrow.x *
            elapsed_seconds *
            touret_arrow[i].speed_arrow;
            touret_arrow[i].current_position_arrow.y =
            touret_arrow[i].pos_start_arrow.y +
            touret_arrow[i].direction_arrow.y *
            elapsed_seconds *
            touret_arrow[i].speed_arrow;
            sfCircleShape_setPosition(touret_arrow[i].arrow,
            touret_arrow[i].current_position_arrow);
        } else {
            sfClock_restart(clock_level_arrow.reset_pos);
        }
}

void direction_render_arrow(int i, sfFloatRect rectangleBounds)
{
    sfVector2f circleCenter =
    sfCircleShape_getPosition(touret_arrow[i].arrow);
    float circleRadius = sfCircleShape_getRadius(touret_arrow[i].arrow);
    sfFloatRect circleBounds = {circleCenter.x - circleRadius,
    circleCenter.y - circleRadius, circleRadius * 2.f, circleRadius * 2.f};
    if (sfFloatRect_intersects(&rectangleBounds, &circleBounds, NULL)) {
        player.pos.x = 300;
        player.pos.y = 450;
    }
    float elapsed_seconds =
    sfTime_asSeconds(sfClock_getElapsedTime(clock_level_arrow.reset_pos));
    calculate(elapsed_seconds, i);
    sfRenderWindow_drawSprite(window, touret_arrow[i].sprite, NULL);
    sfRenderWindow_drawCircleShape(window, touret_arrow[i].arrow, NULL);
}

void render_level_arrow(void)
{
    static bool first_time_enter_level = false;
    if (current_level == 1) {
        if (first_time_enter_level == false) {
            player.pos.x = 300;
            player.pos.y = 300;
            first_time_enter_level = true;
        }
        sfFloatRect rectangleBounds =
        sfRectangleShape_getGlobalBounds(player.collision);
        for (int i = 0; i < size_touret_arrow; ++i) {
            direction_render_arrow(i, rectangleBounds);
        }
    }
}
