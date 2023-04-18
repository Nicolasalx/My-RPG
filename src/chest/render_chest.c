/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_chest
*/

#include "main.h"
#include "chest.h"
#include "generic_func.h"

void play_single_anim(sfSprite *sprite, single_anim_t *anim)
{
    if (anim->play == false || anim->stop_playing == true) {
        return;
    }
    sfIntRect result_rect = {
        .left = anim->current_frame *
            (anim->texture_size.x / anim->nb_frame),
        .top = 0,
        .height = anim->texture_size.y,
        .width = anim->texture_size.x / anim->nb_frame
    };
    if (anim->current_frame >= anim->nb_frame) {
        anim->stop_playing = true;
        return;
    }
    sfSprite_setTextureRect(sprite, result_rect);
    if (sfClock_getElapsedTime(anim->clock).microseconds / 1000
        >= 1000 / anim->frame_rate) {
        sfClock_restart(anim->clock);
        ++ anim->current_frame;
    }
}

void render_chest(void)
{
    for (int i = 0; i < nb_chest; ++i) {
        play_single_anim(chest[i].sprite, &chest[i].anim);
        sfRenderWindow_drawSprite(window, chest->sprite, NULL);
    }
}
