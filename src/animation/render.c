/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "animation.h"
#include "main.h"
#include "manage_view.h"

void opacity_more(int level_choose)
{
    sfTime elapsed = sfClock_getElapsedTime(animation_level.clock);
    float elapsedTime = sfTime_asSeconds(elapsed);
    if (elapsedTime < 2.f) {
        animation_level.color_rectangle.a = (sfUint8)(255 * elapsedTime / 2.f);
    } else if (elapsedTime > 1.90f && elapsedTime < 2.1f) {
        current_level = level_choose;
    } else if (elapsedTime < 4.f) {
        animation_level.color_rectangle.a = (sfUint8)(255 * (4.f - elapsedTime) / 2.f);
    }
    else {
        sfClock_restart(animation_level.clock);
        animation_level.color_rectangle.a = 0;
        display_animation = false;
    }
    sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.color_rectangle);
    sfRenderWindow_drawRectangleShape(window, animation_level.rectangle, NULL);
}

void render_animation(int level_choose)
{
    if (display_animation == true) {
        opacity_more(level_choose);
    }
}
