/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "system_bot_skelet.h"
#include "main.h"
#include "player.h"
#include "math.h"

bool check_if_player_enter(int i, sfFloatRect rectangleBounds)
{
    sfVector2f rectPos = sfRectangleShape_getPosition(player.collision);
    sfVector2f circlePos = sfCircleShape_getPosition(system_bot[i].zone);
    sfVector2f rectSize = sfRectangleShape_getSize(player.collision);
    float circleRadius = sfCircleShape_getRadius(system_bot[i].zone);
    float distance = sqrt((circlePos.x - rectPos.x) * (circlePos.x - rectPos.x) + (circlePos.y - rectPos.y) * (circlePos.y - rectPos.y));
    float rectHalfWidth = rectSize.x / 2.f;
    float rectHalfHeight = rectSize.y / 2.f;

    if (distance > circleRadius + rectHalfWidth && distance > circleRadius + rectHalfHeight) {
        print("Rectangle is outside circle.\n");
    } else if (distance < circleRadius - rectHalfWidth && distance < circleRadius - rectHalfHeight) {
        print("Rectangle is inside circle.\n");
    } else {
        print("Rectangle is partially inside circle.\n");
    }
}

void render_system_bot(void)
{
    sfFloatRect rectangleBounds = sfRectangleShape_getGlobalBounds(player.collision);
    for (int i = 0; i < size_system_bot; ++i) {
        check_if_player_enter(i, rectangleBounds);
        sfRenderWindow_drawCircleShape(window, system_bot[i].zone, NULL);
        sfRenderWindow_drawSprite(window, system_bot[i].bot, NULL);
        sfRenderWindow_drawRectangleShape(window, system_bot[i].big_life_rectangle, NULL);
        sfRenderWindow_drawRectangleShape(window, system_bot[i].little_life_rectangle, NULL);
    }
}
