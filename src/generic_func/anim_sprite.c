/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** anim_sprite
*/

#include "generic_func.h"

void anim_sprite(anim_sprite_t *anim_sprite, unsigned int anim_to_play)
{
    if (anim_sprite->current_frame >= anim_sprite->sprite_sheet[anim_to_play].nb_frame
    || anim_sprite->last_anim != anim_to_play) {
        anim_sprite->current_frame = 0;
    }
    if (sfClock_getElapsedTime(anim_sprite->clock).microseconds / 1000
    >= 1000 / anim_sprite->sprite_sheet[anim_to_play].frame_rate) {
        sfClock_restart((*anim_sprite).clock);
        sfSprite_setTextureRect(anim_sprite->sprite_sheet[anim_to_play].sprite,
        (sfIntRect) {
            .left = anim_sprite->current_frame *
                (anim_sprite->sprite_sheet[anim_to_play].texture_size.x /
                anim_sprite->sprite_sheet[anim_to_play].nb_frame),
            .top = 0,
            .height = anim_sprite->sprite_sheet[anim_to_play].texture_size.y,
            .width = anim_sprite->sprite_sheet[anim_to_play].texture_size.x /
                anim_sprite->sprite_sheet[anim_to_play].nb_frame
            }
        );
        ++ anim_sprite->current_frame;
        anim_sprite->last_anim = anim_to_play;
    }
}
