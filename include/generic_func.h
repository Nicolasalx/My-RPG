/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** generic_func
*/

#ifndef GENERIC_FUNC_H_
    #define GENERIC_FUNC_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>

    #define MAX_SPRITE_SHEET 20

    #define vect_arithm(dest, sign, src) dest.x sign src.x; dest.y sign src.y

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

typedef struct {
    unsigned int current_frame;
    unsigned int nb_frame;
    unsigned int frame_rate;
    bool stop_playing;
    bool play;
    sfVector2u texture_size;
    sfClock *clock;
} single_anim_t;

void anim_sprite(anim_sprite_t *anim_sprite, unsigned int anim_to_play);
sfIntRect compute_rect_texture(sprite_sheet_t *sprite_sheet,
    unsigned int current_frame);
bool check_collision(sfRectangleShape *rect_1, sfRectangleShape *rect_2);
double my_leading_coeff(sfVector2f pos_1, sfVector2f pos_2);
sfVector2f get_rect_center(sfRectangleShape *rect);

#endif /* !GENERIC_FUNC_H_ */
