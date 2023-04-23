/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** win
*/

#ifndef WIN_H_
    #define WIN_H_

    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;
} info_win_t;

extern info_win_t info_win;

void create_win_screen(void);
void render_screen_win(void);

#endif /* !WIN_H_ */
