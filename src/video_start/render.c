/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "video_start.h"
#include "main.h"

void render_video(void)
{
    float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(video_start.clock));
    if (elapsed_seconds > 0.02) {
        if (video_start.rect.left == 3000) {
            video_start.rect.left = 0;
            video_start.rect.top += 338;
        }
        if (video_start.rect.top == 338 * 31) {
            video_start.rect.left = 0;
            video_start.rect.top = 0;
        }
        sfSprite_setTextureRect(video_start.sprite, video_start.rect);
        video_start.rect.left += 600;
        sfClock_restart(video_start.clock);
    }
    sfRenderWindow_drawSprite(window, video_start.sprite, NULL);
}