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
#include "math.h"

void get_direction_bot(int i)
{
    system_bot[i].direction_bot.x = system_bot[i].pos_end_bot.x -
        system_bot[i].
        pos_start_bot.x;
    system_bot[i].direction_bot.y = system_bot[i].pos_end_bot.y -
        system_bot[i].
        pos_start_bot.y;
    system_bot[i].distance = sqrtf(system_bot[i].direction_bot.x *
        system_bot[i].
        direction_bot.x +system_bot[i].direction_bot.y * system_bot[i].
            direction_bot.y);
    system_bot[i].direction_bot.x /= system_bot[i].distance;
    system_bot[i].direction_bot.y /= system_bot[i].distance;
}

void chase_set_pos(int i, float elapsed_seconds)
{
    system_bot[i].current_position_bot.x = system_bot[i].pos_start_bot.x +
        system_bot[i].direction_bot.x * elapsed_seconds * system_bot[i].
            speed_bot;
    system_bot[i].current_position_bot.y = system_bot[i].pos_start_bot.y +
        system_bot[i].direction_bot.y * elapsed_seconds * system_bot[i].
            speed_bot;
    system_bot[i].little_life_pos_rectangle = (sfVector2f) {system_bot[i].
        current_position_bot.x - 15, system_bot[i].current_position_bot.y -
            15};
    sfRectangleShape_setPosition(system_bot[i].little_life_rectangle,
        system_bot[i].little_life_pos_rectangle);
    system_bot[i].big_life_pos_rectangle = (sfVector2f) {system_bot[i].
        current_position_bot.x - 15, system_bot[i].current_position_bot.y
            - 15};
    sfRectangleShape_setPosition(system_bot[i].big_life_rectangle,
        system_bot[i].big_life_pos_rectangle);
    sfSprite_setPosition(system_bot[i].bot, system_bot[i].
        current_position_bot);
}

bool bot_chase_player(int i)
{
    float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(system_bot[i].clock));
    if (elapsed_seconds < system_bot[i].distance / system_bot[i].speed_bot) {
        chase_set_pos(i, elapsed_seconds);
        return false;
    } else {
        sfClock_restart(system_bot[i].clock);
        return true;
    }
}

void bot_got_base(int i)
{
    static bool first_pos = false;
    if (first_pos == false) {
        system_bot[i].pos_end_bot = system_bot[i].pos_bot_ini;
        first_pos = true;
    } else {
        system_bot[i].pos_start_bot = system_bot[i].current_position_bot;
    }
    system_bot[i].pos_end_bot = system_bot[i].pos_bot_ini;
    get_direction_bot(i);
    bot_chase_player(i);
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

void render_system_bot(void)
{
    static bool ini_pos_player = false;
    if (ini_pos_player == false) {
        player.pos.x = 300;
        player.pos.y = 300;
        ini_pos_player = true;
    }
    if (current_level == 1) {
        for (int i = 0; i < size_system_bot; ++i) {
            check_if_player_enter(i);
            get_direction_bot(i);
            if (system_bot[i].bot_can_move == true) {
                system_bot[i].pos_end_bot = player.pos;
                bot_chase_player(i);
            }
            if (system_bot[i].bot_can_move == false) {
                bot_got_base(i);
            }
            sfRenderWindow_drawCircleShape(window, system_bot[i].zone, NULL);
            sfRenderWindow_drawSprite(window, system_bot[i].bot, NULL);
            sfRenderWindow_drawRectangleShape(window,
                system_bot[i].big_life_rectangle, NULL);
            sfRenderWindow_drawRectangleShape(window,
                system_bot[i].little_life_rectangle, NULL);
        }
    }
}
