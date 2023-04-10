/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** level_arrow
*/

#ifndef LEVEL_ARROW_H_
    #define LEVEL_ARROW_H_

    #include "SFML/Graphics.h"
    #include "math.h"

typedef struct {
    sfTexture* texture;
    sfSprite* sprite;
    sfVector2f position_touret;
    sfVector2f size_touret;
    float rotation_touret;
    char *path_img;

    sfCircleShape *arrow;
    sfVector2f position_arrow;
    float radius;
    sfColor color_arrow;
    sfColor color_border_arrow;
    float outlineThickness;
    sfVector2f reset_pos_arrow;

    sfVector2f current_position_arrow;
    sfVector2f direction_arrow;
    sfVector2f pos_start_arrow;
    sfVector2f pos_end_arrow;
    float speed_arrow;
    float distance;
} touret_arrow_t;

typedef struct {
    sfClock *clock_animation;
    sfClock *reset_pos;
} clock_level_arrow_t;

extern clock_level_arrow_t clock_level_arrow;

extern touret_arrow_t touret_arrow[];
extern const int size_touret_arrow;

void create_arrow_and_touret(void);
void render_level_arrow(void);

#endif /* !LEVEL_ARROW_H_ */
