/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** boss
*/

#ifndef BOSS_H_
    #define BOSS_H_

    #include <SFML/Graphics.h>
    #include "generic_func.h"

    #define BOSS_ANIM_MULT 1.75

typedef enum {
    BOSS_RUN_LEFT,
    BOSS_ATTACK_LEFT,
    BOSS_DIE_LEFT,
    BOSS_RUN_RIGHT,
    BOSS_ATTACK_RIGHT,
    BOSS_DIE_RIGHT,
    NB_ANIM_BOSS
} boss_anim_t;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    double speed;
    sfClock *clock_move;
    sfRectangleShape *collision;
    sfRectangleShape *attack_collision;
    sfRectangleShape *health_bar;
    sfVector2f max_healt_bar_size;
    sfRectangleShape *health_bar_outline;
    int healt;
    int max_healt;
    int damage;
    int boss_dps;
    bool die;
    int dead;
    bool direc;
    boss_anim_t anim_to_play;
    anim_sprite_t boss_anim;
} boss_t;

extern boss_t boss[];
extern const int nb_boss;

void create_boss(void);
void render_boss(void);

#endif /* !BOSS_H_ */
