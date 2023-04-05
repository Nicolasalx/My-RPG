/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_

    #include "SFML/Graphics.h"

typedef enum {
    IDLE,
    RUN,
    JUMP,
    ATTACK
} player_anim_e;

typedef struct {
    char *sheet_path;
    unsigned int nb_frame;
    unsigned int current_frame;
    sfTexture *texture;
    sfSprite *sprite;
} anim_t;

typedef struct {
    player_anim_e anim_to_play;
    anim_t *player_anim;
} player_t;

#endif /* !PLAYER_H_ */
