/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "animation.h"
#include "main.h"
#include "manage_view.h"
#include "player.h"

void opacity_more(int level_choose, bool *disable)
{
    sfTime elapsed = sfClock_getElapsedTime(animation_level.clock);
    float elapsedTime = sfTime_asSeconds(elapsed);
    if (elapsedTime >= 1.9f && elapsedTime <= 2.1f) {
        next_level = level_choose;
        print(INT(next_level));
        //current_level = level_choose;
    }
    if (elapsedTime < 2.f) {
        animation_level.color_rectangle.a = (sfUint8)(255 * elapsedTime / 2.f);
    } else if (elapsedTime < 4.f) {
        animation_level.color_rectangle.a = (sfUint8)(255 * (4.f - elapsedTime) / 2.f);
    } else {
        sfClock_restart(animation_level.clock);
        animation_level.color_rectangle.a = 0;
        display_animation = false;
        * disable = false;
    }
    sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.color_rectangle);
    sfRenderWindow_drawRectangleShape(window, animation_level.rectangle, NULL);
}

void render_animation(int level_choose, bool *disable)
{
    if (display_animation == true && * disable == true) {
        opacity_more(level_choose, disable);
    }
    
}
