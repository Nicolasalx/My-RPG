/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** generic_func
*/

#ifndef GENERIC_FUNC_H_
    #define GENERIC_FUNC_H_

    #include <SFML/Graphics.h>

typedef struct {
    char *sheet_path;
    unsigned int nb_frame;
    unsigned int current_frame;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2u texture_size;
} anim_t;

#endif /* !GENERIC_FUNC_H_ */
