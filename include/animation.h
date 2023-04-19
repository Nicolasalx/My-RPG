/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** animation
*/

#ifndef ANIMATION_H_
    #define ANIMATION_H_

    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfClock *clock;
    sfClock *clock_restart;
} animation_level_t;

extern bool display_animation;

extern animation_level_t animation_level;
void create_animation(void);
void render_animation(int level_choose);

#endif /* !ANIMATION_H_ */
