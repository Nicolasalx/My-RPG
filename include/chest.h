/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** chest
*/

#ifndef CHEST_H_
    #define CHEST_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>
    #include "generic_func.h"

    #define COLOR_DETECTION 128, 128, 128, 100

typedef enum {
    CHEST_ARROW,
    CHEST_SKELET,
    CHEST_BOSS
} choice_chest_t;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    bool open;
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    single_anim_t anim;
    choice_chest_t choice_chest;

    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;
} chest_t;

extern chest_t chest[];
extern const int nb_chest;

void create_chest(void);
void render_chest(void);

#endif /* !CHEST_H_ */
