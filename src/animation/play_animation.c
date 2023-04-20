/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** play_animation.c
*/

#include "main.h"
#include "animation.h"

void play_animation(void)
{
    sfTime elapsed = sfClock_getElapsedTime(animation_level.play);
    float elapsedTime = sfTime_asSeconds(elapsed);

    if (elapsedTime < 1.f) {
        animation_level.color_rectangle.a = 255;
    } else if (elapsedTime < 4.f) {
        animation_level.color_rectangle.a = (sfUint8)(255 * (4.f - elapsedTime) / 3.f);
    } else {
        play_anim = false;
        sfClock_restart(animation_level.play);
        animation_level.color_rectangle.a = 0;
    }
    sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.color_rectangle);
    sfRenderWindow_drawRectangleShape(window, animation_level.rectangle, NULL);
}
