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

    #define LEFT 0
    #define RIGHT 1

typedef enum {
    IDLE_RIGHT,
    RUN_RIGHT,
    ATTACK_RIGHT,
    IDLE_LEFT,
    RUN_LEFT,
    ATTACK_LEFT,
    NB_ANIM_PLAYER
} player_anim_e;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    double speed;
    sfRectangleShape *collision;
    player_anim_e anim_to_play;
    anim_sprite_t player_anim;
} player_t;

extern player_t player;

void create_player(void);
void render_player(void);
void player_move(void);
void check_collision_player(sfVector2f prev_pos_player, sfVector2f prev_pos_rect);

#endif /* !PLAYER_H_ */
