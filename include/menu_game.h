/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_
    #include "SFML/Graphics.h"

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
} img_button_menu_t;

extern img_button_menu_t img_button_menu[];
extern const int size_img_button_menu;

void create_menu_button(void);
void render_menu(void);

#endif /* !MENU_H_ */
