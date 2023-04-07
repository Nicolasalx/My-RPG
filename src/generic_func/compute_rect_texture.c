/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** compute_rect_texture
*/

#include <SFML/Graphics.h>
#include "generic_func.h"

sfIntRect compute_rect_texture(sprite_sheet_t *sprite_sheet,
    unsigned int current_frame)
{
    sfIntRect result_rect = {
        .left = current_frame *
            (sprite_sheet->texture_size.x / sprite_sheet->nb_frame),
        .top = 0,
        .height = sprite_sheet->texture_size.y,
        .width = sprite_sheet->texture_size.x / sprite_sheet->nb_frame
    };
    return result_rect;
}