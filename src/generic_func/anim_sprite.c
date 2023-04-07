/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** anim_sprite
*/

#include "generic_func.h"
#include "main.h"
#include "player.h"

void anim_sprite(anim_sprite_t *anim_sprite, unsigned int anim_to_play)
{
    if (anim_sprite->current_frame >= anim_sprite->sprite_sheet[anim_to_play].nb_frame
    || anim_sprite->last_anim != anim_to_play) {
        anim_sprite->current_frame = 0;
    }
    sfSprite_setTextureRect(anim_sprite->sprite_sheet[anim_to_play].sprite,
        compute_rect_texture(&anim_sprite->sprite_sheet[anim_to_play],
        anim_sprite->current_frame));
    if (sfClock_getElapsedTime(anim_sprite->clock).microseconds / 1000
    >= 1000 / anim_sprite->sprite_sheet[anim_to_play].frame_rate) {
        sfClock_restart((*anim_sprite).clock);
        ++ anim_sprite->current_frame;
        anim_sprite->last_anim = anim_to_play;
    }
}
