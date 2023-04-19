/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "animation.h"
#include "main.h"
#include "manage_view.h"

void more_opacity(void)
{
    float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(animation_level.clock));
    if (elapsed_seconds > 0.1) {
        if (animation_level.color_rectangle.a < 255) {
            animation_level.color_rectangle.a += 30;
        }
        sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.color_rectangle);
        sfClock_restart(animation_level.clock);
    }
    sfRenderWindow_drawRectangleShape(window, animation_level.rectangle, NULL);
}

void no_opacity(void)
{
    float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(animation_level.clock));
    if (elapsed_seconds > 0.1) {
        if (animation_level.color_rectangle.a > 0) {
            animation_level.color_rectangle.a -= 30;
        }
        sfRectangleShape_setFillColor(animation_level.rectangle, animation_level.color_rectangle);
        sfClock_restart(animation_level.clock);
    }
    sfRenderWindow_drawRectangleShape(window, animation_level.rectangle, NULL);
}

void render_animation(void)
{
    static bool display_animation = false;
    static bool enter_opacity_more = false;
    static bool enter_no_opacity = false;

    if (sfKeyboard_isKeyPressed(sfKeyN)) {
        display_animation = true;
        enter_no_opacity = true;
        enter_opacity_more = true;
        sfClock_restart(animation_level.clock);
        sfClock_restart(animation_level.clock_restart);
    }
    if (display_animation == true) {
        float elapsed_seconds_restart = sfTime_asSeconds(sfClock_getElapsedTime(animation_level.clock_restart));
        if (elapsed_seconds_restart < 3 && enter_opacity_more == true) {
            printf("More_opacity\n");
            more_opacity();
            enter_opacity_more = false;
        } else if (elapsed_seconds_restart >= 3 && elapsed_seconds_restart < 6 && enter_no_opacity == true) {
            no_opacity();
            printf("NO\n");
            enter_no_opacity = false;
        } else {
            display_animation = false;
        }
    }
}