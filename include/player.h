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
    #include <stdbool.h>

    #define PLAYER_ANIM_MULT 1.75

typedef enum {
    IDLE_LEFT,
    IDLE_RIGHT,
    IDLE_UP,
    IDLE_DOWN,
    WALK_LEFT,
    WALK_RIGHT,
    WALK_UP,
    WALK_DOWN,
    ATTACK_LEFT,
    ATTACK_RIGHT,
    ATTACK_UP,
    ATTACK_DOWN,
    NB_ANIM_PLAYER
} player_anim_e;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    player_anim_e anim_to_play;
    anim_sprite_t player_anim;
} player_t;

extern player_t player;

void create_player(void);
void render_player(void);
void event_player(sfEvent *event);
void player_move(sfEvent *event);
void player_reset(void);

#endif /* !PLAYER_H_ */
