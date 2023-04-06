/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** generic_func
*/

#ifndef GENERIC_FUNC_H_
    #define GENERIC_FUNC_H_

    #include <SFML/Graphics.h>

    #define MAX_SPRITE_SHEET 10

typedef struct {
    char *sheet_path;
    unsigned int nb_frame;
    unsigned int frame_rate;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2u texture_size;
} sprite_sheet_t;

typedef struct {
    unsigned int current_frame;
    unsigned int last_anim;
    sfClock *clock;
    sprite_sheet_t sprite_sheet[MAX_SPRITE_SHEET];
} anim_sprite_t;

void anim_sprite(anim_sprite_t *anim_sprite, unsigned int anim_to_play);

#endif /* !GENERIC_FUNC_H_ */
