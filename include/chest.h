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

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    bool open;
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    unsigned int nb_frame;
    unsigned int current_fram;
} chest_t;

extern chest_t chest[];

#endif /* !CHEST_H_ */
