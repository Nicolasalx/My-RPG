/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "video_start.h"

void create_video(void)
{
    video_start.clock = sfClock_create();
    video_start.rect = (sfIntRect) {0, 0, 600, 338};
    video_start.texture = sfTexture_createFromFile(video_start.path_img, NULL);
    video_start.sprite = sfSprite_create();
    sfSprite_setScale(video_start.sprite, video_start.size_sprite);
    sfSprite_setTexture(video_start.sprite, video_start.texture, sfTrue);
    sfSprite_setPosition(video_start.sprite, video_start.pos_sprite);
}
