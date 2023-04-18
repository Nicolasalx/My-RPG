/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_chest
*/

#include "chest.h"

void create_chest(void)
{
    for (int i = 0; i < nb_chest; ++i) {
        chest[i].sprite = sfSprite_create();
        chest[i].texture = sfTexture_createFromFile(chest[i].path, NULL);
        chest[i].anim.texture_size = sfTexture_getSize(chest[i].texture);
        sfIntRect result_rect = {
            .left = chest[i].anim.current_frame *
                (chest[i].anim.texture_size.x / chest[i].anim.nb_frame),
            .top = 0,
            .height = chest[i].anim.texture_size.y,
            .width = chest[i].anim.texture_size.x / chest[i].anim.nb_frame
        };
        sfSprite_setTexture(chest[i].sprite, chest[i].texture, sfTrue);
        sfSprite_setPosition(chest[i].sprite, chest[i].pos);
        sfSprite_setScale(chest[i].sprite, chest[i].scale);
        sfSprite_setTextureRect(chest[i].sprite, result_rect);
        chest[i].anim.clock = sfClock_create();
    }
}
