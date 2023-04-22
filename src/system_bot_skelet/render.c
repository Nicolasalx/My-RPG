/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "system_bot_skelet.h"
#include "main.h"
#include "manage_view.h"
#include "player.h"
#include "manage_view.h"
#include "math.h"
#include "inventory.h"

bool collision_rectangle_sprite(sfRectangleShape *rect, sfSprite *sprite)
{
    sfFloatRect rect_bound = sfRectangleShape_getGlobalBounds(rect);
    sfFloatRect sprite_bound = sfSprite_getGlobalBounds(sprite);

    return sfFloatRect_intersects(&rect_bound, &sprite_bound, NULL);
}

void check_if_player_enter(int i)
{
    sfVector2f rectPos = sfRectangleShape_getPosition(player.collision);
    sfVector2f circlePos = sfCircleShape_getPosition(system_bot[i].zone);
    sfVector2f rectSize = sfRectangleShape_getSize(player.collision);
    float circleRadius = system_bot[i].radius;
    circlePos.x += circleRadius;
    circlePos.y += circleRadius;
    float distance = sqrt((circlePos.x - rectPos.x) * (circlePos.x -
        rectPos.x) +
        (circlePos.y - rectPos.y) * (circlePos.y - rectPos.y));
    float rectHalfWidth = rectSize.x / 2.f;
    float rectHalfHeight = rectSize.y / 2.f;
    if (distance > circleRadius + rectHalfWidth && distance >
        circleRadius + rectHalfHeight) {
        system_bot[i].bot_can_move = false;
    } else if (distance < circleRadius - rectHalfWidth && distance <
        circleRadius - rectHalfHeight) {
        system_bot[i].bot_can_move = true;
    } else {
        system_bot[i].bot_can_move = true;
    }
}

bool skelet_die(int i)
{
    if (system_bot[i].nb_life_bot <= 0) {
        system_bot[i].can_draw = false;
        return true;
    }
    return false;
}
