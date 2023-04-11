/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** inventory
*/

#ifndef TREE_H_
    #define TREE_H_

    #include "SFML/Graphics.h"
    #include "main.h"

typedef struct {
    bool can_opac;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
} create_tree_t;

extern const int size_tree;

extern create_tree_t fondation[];


void display_tree(void);
void create_button_tree(void);

#endif /* !TREE_H_ */
