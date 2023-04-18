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

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    bool open;
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    single_anim_t anim;
} chest_t;

extern chest_t chest[];
extern const int nb_chest;

void create_chest(void);
void render_chest(void);

#endif /* !CHEST_H_ */
