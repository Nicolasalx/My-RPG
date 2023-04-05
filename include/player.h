/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_

    #include "SFML/Graphics.h"
    #include "generic_func.h"

typedef enum {
    IDLE,
    RUN,
    JUMP,
    ATTACK,
    NB_ANIM_PLAYER
} player_anim_e;

typedef struct {
    player_anim_e anim_to_play;
    player_anim_e last_anim;
    unsigned int current_frame;
    anim_t player_anim[];
} player_t;

extern player_t player;

#endif /* !PLAYER_H_ */
